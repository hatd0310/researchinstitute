#include <iostream>
#include <vector>
#include <stdexcept> // For exceptions

template <typename T>
class Stack
{
private:
    std::vector<T> data;
    // Or, for a fixed-size stack:
    // T data[MAX_SIZE];
    // int top; // Index of the top element
    // const int MAX_SIZE; // Capacity of the stack

public:
    // Constructor (for dynamic array)
    Stack() : data() {} // Initialize an empty vector

    // Constructor (for fixed-size array - uncomment if using that implementation)
    // Stack(int size) : top(-1), MAX_SIZE(size) {}

    bool isEmpty() const
    {
        return data.empty(); // For dynamic array
                             // return top == -1;  // For fixed-size array
    }

    // For fixed-size array, you'd also need:
    bool isFull() const
    {
        // return top == MAX_SIZE - 1;
        return false; // For dynamic array, it can grow as needed
    }

    void push(const T &value)
    {
        if (isFull())
        {
            throw std::overflow_error("Stack overflow"); // Throw an exception
        }
        data.push_back(value); // For dynamic array
                               // data[++top] = value; // For fixed-size array
    }

    // Or, if you want to allow moving:
    void push(T &&value)
    {
        if (isFull())
        {
            throw std::overflow_error("Stack overflow");
        }
        data.push_back(std::move(value)); // Efficiently move the value
                                          // data[++top] = std::move(value); // For fixed-size array
    }

    T pop()
    {
        if (isEmpty())
        {
            throw std::underflow_error("Stack underflow");
        }
        T topValue = data.back(); // Get the top value
        data.pop_back();          // Remove the top element
        // T topValue = data[top--]; // For fixed-size array
        return topValue;
    }

    T peek() const
    {
        if (isEmpty())
        {
            throw std::underflow_error("Stack underflow");
        }
        return data.back(); // For dynamic array
                            // return data[top]; // For fixed-size array
    }

    size_t size() const
    {
        return data.size(); // For dynamic array
        // return top + 1; // For fixed-size array
    }
};

int main()
{
    try
    {
        int a = 11;
        Stack<int> intStack;
        intStack.push(10);
        intStack.push(20);
        intStack.push(30);
        intStack.push(a);

        std::cout << "Top element: " << intStack.peek() << std::endl;
        std::cout << "Popped element: " << intStack.pop() << std::endl;
        std::cout << "Size: " << intStack.size() << std::endl;
        std::cout << "Is empty? " << intStack.isEmpty() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}