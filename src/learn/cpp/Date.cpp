#include "Month.cpp"

class Date {
	public:
		/*
			- const placed after the function name.
			the function does not modify the object on which is called.
			if you have a const object of the class, you can only call
			const member functions on it.
		*/
		Month month() const; // Does not modifying the state of the Date object
		
		/*
			- const placed after the function name.
			the caller cannot modify the returned Month object.
			The function itself may or may not modify the object
			it is called on (it's not a const member function).
		*/
		const Month month_(); // This function returns a const Month object
		Month const month__();
};


int main() {
	// const placed after the function name.
	const Date today;
	Month m = today.month(); // OK: calling a const function on a const object

	Date tomorrow;
	m = tomorrow.month();   // OK: calling a const function on a non-const object
	
	// const placed after the function name.
	const Month m_ = tomorrow.month_(); // The returned Month is const
    // m = Month::February; // Error: cannot modify a const Month
	
	return 0;
}
