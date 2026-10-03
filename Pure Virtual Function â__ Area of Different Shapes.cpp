#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void area() = 0;
};

// Rectangle class
class Rectangle : public Shape {
private:
    float length, breadth;

public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    void area() override {
        cout << "Area of Rectangle = "
             << length * breadth << endl;
    }
};

// Circle class
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() override {
        cout << "Area of Circle = "
             << 3.14 * radius * radius << endl;
    }
};

// Triangle class
class Triangle : public Shape {
private:
    float base, height;

public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }

    void area() override {
        cout << "Area of Triangle = "
             << 0.5 * base * height << endl;
    }
};

int main() {
    Rectangle r(10, 5);
    Circle c(7);
    Triangle t(10, 6);

    Shape *ptr;

    ptr = &r;
    ptr->area();

    ptr = &c;
    ptr->area();

    ptr = &t;
    ptr->area();

    return 0;
}
