#include <iostream>
#include <cstdint>
#include <memory> // details on function: smart_pointer()

/*
	point to locations in memory
*/
void pointer_syntax()
{
	// declaration pointer: <variable_type> *<name>;
	int* points_to_integer;

	int* num1 = new int(11); // Heap: Allocates space for one integer
	int* num2 = num1;
	*num1 = 22;

	std::cout << "num1 = " << *num1 << std::endl;
	std::cout << "num2 = " << *num2 << std::endl;
}

void pointer_decimal()
{
	/*
	 * Example:
	 * 0x12 => (1 * 16^1) + (2 * 16^0) = (1 * 16) + (2 * 1) = 16 + 2 = 18
	 * 0x34 => (3 * 16^1) + (4 * 16^0) = (3 * 16) + (4 * 1) = 48 + 4 = 52
	 */

	uint8_t arr[4] = { 0x12, 0x34, 0x56, 0x78 };
	uint8_t arr_2[4] = { 0x11, 0x22, 0x33, 0x44 };

	printf("Address of arr   : %p\n", (void*)&arr);
	printf("Address of arr[0]: %p\n", (void*)&arr[0]);
	printf("Address of arr[1]: %p\n", (void*)&arr[1]);
	printf("Address of arr[2]: %p\n", (void*)&arr[2]);
	printf("Address of arr[3]: %p\n\n", (void*)&arr[3]);

	printf("Address of arr_2   : %p\n", (void*)&arr_2);
	printf("Address of arr_2[0]: %p\n", (void*)&arr_2[0]);
	printf("Address of arr_2[1]: %p\n", (void*)&arr_2[1]);
	printf("Address of arr_2[2]: %p\n", (void*)&arr_2[2]);
	printf("Address of arr_2[3]: %p\n\n", (void*)&arr_2[3]);

	// Casting (= explicit conversion) [cf. implicit conversion]
	// Casting the address of first element (which is of type uint8_t*) to a uint32_t*
	// Note: Dereferencing ptr_1 is safe because it points to a valid memory location
	uint32_t* ptr_1 = (uint32_t*)&arr[0];
	printf("Address in ptr_1: %p\n", ptr_1);
	printf("Address in ptr_1: %p\n", (void*)ptr_1);
	printf("Value pointed to by ptr_1: 0x%08X\n", *ptr_1);

	printf("\n");

	// Note: Dereferencing ptr_2 is unsafe and can lead to undefined behavior

	uint32_t* ptr_2 = (uint32_t*)arr[0];
	printf("Address in ptr_2: %p\n", ptr_2);
	printf("Address in ptr_2: %p\n", (void*)ptr_2);
	printf("Value pointed to by ptr_2: 0x%08X\n", *ptr_2);
}

void ptr2ptr()
{

	int n = 5;
	int** arr = new int* [n];

	// Initialize each pointer in the array to point to a dynamically allocated integer
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int;
		*arr[i] = i * 10; // Assign a value to the integer pointed to by arr[i]
	}

	// Access and print the values pointed to by the pointers in the array
	for (int i = 0; i < n; i++)
	{
		std::cout << *arr[i] << " ";
	}
	std::cout << std::endl;

	// Deallocate the memory for each integer and the array of pointers
	for (int i = 0; i < n; i++)
	{
		delete arr[i];
	}
	delete[] arr;
}

/*
	=== Smart Pointer (Modern C++11 and later) ===
	unique_ptr
	shared_ptr
	weak_ptr
	=> that automate memory management
*/
void smart_pointer()
{
	std::unique_ptr<int> ptr = std::make_unique<int>(42);                // Use make_unique
	std::shared_ptr<float> shared_ptr1 = std::make_shared<float>(3.14f); // Use make_shared
	// No need to manually delete!  Smart pointers handle it automatically.
}

int main()
{
	pointer_syntax();

	return 0;
}
