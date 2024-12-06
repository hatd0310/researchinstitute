#include "Shape.cpp"

class Circle : public Shape {
    private:
        double radius;
        
    public:
        Circle() {
            this->radius = 0;
        }

        void compute_area(double r) {

            radius = r;

            double area = 3.14 * radius * radius;

            cout << "Radius is: " << radius << endl;
            cout << "Area is: " << area << endl;
        }


};

