#include<iostream>
#include "Shape.cpp"

class Circle : public Shape {
private:
    double radius;

public:
    void compute_area(double r) {

        radius = r;

        double area = 3.14 * radius * radius;

        std::cout << "Radius is: " << radius << "\n";
        std::cout << "Area is: " << area << "\n";
    }

    void setId(int id) {

        id_protected = id;
    }

    void displayId() {
        std::cout << "id_protected is: " << id_protected << "\n";
    }

};

