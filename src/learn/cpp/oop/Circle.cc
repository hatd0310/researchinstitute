#include<iostream>
#include "Shape.cpp"

class Circle : public Shape {
    // private data member
    private:
        double radius;

    // public member function    
    public:
        void compute_area(double r) {
            // member function can access private 
            // data member radius
            radius = r;

            double area = 3.14 * radius * radius;

            std::cout << "Radius is: " << radius << "\n";
            std::cout << "Area is: " << area << "\n";
        }

        void setId(int id) {

            // Child class is able to access the inherited 
            // protected data members of base class

            id_protected = id;
        }
        void displayId() {
            std::cout << "id_protected is: " << id_protected << "\n";
        }

};

