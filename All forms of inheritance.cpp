#include <iostream>
using namespace std;

// 1. Single Inheritance
class Animal {
public:
    void eat() {
        cout << "Animal eats food" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

// 2. Multilevel Inheritance
class Vehicle {
public:
    void start() {
        cout << "Vehicle starts" << endl;
    }
};

class Car : public Vehicle {
public:
    void drive() {
        cout << "Car is driving" << endl;
    }
};

class SportsCar : public Car {
public:
    void race() {
        cout << "Sports car is racing" << endl;
    }
};

// 3. Multiple Inheritance
class Father {
public:
    void fatherProperty() {
        cout << "Father's property" << endl;
    }
};

class Mother {
public:
    void motherProperty() {
        cout << "Mother's property" << endl;
    }
};

class Child : public Father, public Mother {
public:
    void childInfo() {
        cout << "Child inherits from both Father and Mother" << endl;
    }
};

// 4. Hierarchical Inheritance
class Shape {
public:
    void display() {
        cout << "This is a shape" << endl;
    }
};

class Circle : public Shape {
public:
    void circle() {
        cout << "This is a circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void rectangle() {
        cout << "This is a rectangle" << endl;
    }
};

// 5. Hybrid Inheritance
class Person {
public:
    void personInfo() {
        cout << "This is a person" << endl;
    }
};

class Student : public Person {
public:
    void studentInfo() {
        cout << "This is a student" << endl;
    }
};

class Employee {
public:
    void employeeInfo() {
        cout << "This is an employee" << endl;
    }
};

class WorkingStudent : public Student, public Employee {
public:
    void workingStudentInfo() {
        cout << "This is a working student" << endl;
    }
};

int main() {

    cout << "1. SINGLE INHERITANCE" << endl;
    Dog d;
    d.eat();
    d.bark();

    cout << "\n2. MULTILEVEL INHERITANCE" << endl;
    SportsCar s;
    s.start();
    s.drive();
    s.race();

    cout << "\n3. MULTIPLE INHERITANCE" << endl;
    Child c;
    c.fatherProperty();
    c.motherProperty();
    c.childInfo();

    cout << "\n4. HIERARCHICAL INHERITANCE" << endl;
    Circle cir;
    Rectangle rec;

    cir.display();
    cir.circle();

    rec.display();
    rec.rectangle();

    cout << "\n5. HYBRID INHERITANCE" << endl;
    WorkingStudent ws;
    ws.personInfo();
    ws.studentInfo();
    ws.employeeInfo();
    ws.workingStudentInfo();

    return 0;
}


