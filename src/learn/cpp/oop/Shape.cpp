#include <iostream>

// -- interface --
class Shape {

    protected:
        int id;

    private:
        int name_of_shape;

    public:
        Shape();  // default constructor
        ~Shape(); // destructor
		unsigned float getValue();
		void setValue(unsigned float value);

};


// -- implementation --
Shape::Shape() {

}

Shape::~Shape() {

}

Shape::getValue() {

}

Shape::setValue(unsigned float value) {

}