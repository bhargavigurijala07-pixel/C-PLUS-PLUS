#include <iostream>
using namespace std;
// 1. Object as a Class Member
class Address {
public:
    string city;

    Address(string c) {
        city = c;
    }
};
class Student {
public:
    string name;
    Address addr;       // Object of Address is a class member
    Student(string n, string c) : addr(c) {
        name = n;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "City: " << addr.city << endl;
    }
};
// 2. Pointer to a Class
class Employee {
public:
    int id;

    void show() {
        cout << "Employee ID: " << id << endl;
    }
};
// 3. this Pointer
class Number {
public:
    int value;

    Number(int value) {
        this->value = value;
    }

    void display() {
        cout << "Value: " << this->value << endl;
    }
};
// 4. Virtual Base Class
class Person {
public:
    void showPerson() {
        cout << "Person class" << endl;
    }
};
// Person is a virtual base class
class Student2 : virtual public Person {
};
class Employee2 : virtual public Person {
};
class Manager : public Student2, public Employee2 {
};
int main() {
    // Object as a class member
    cout << "1. Object as a Class Member" << endl;
    Student s("Sai", "Rajahmundry");
    s.display();
    // Pointer to a class
    cout << "\n2. Pointer to a Class" << endl;
    Employee e;
    e.id = 101;
    Employee *ptr = &e;
    ptr->show();
    // this pointer
    cout << "\n3. this Pointer" << endl;
    Number n(50);
    n.display();
    // Virtual Base Class
    cout << "\n4. Virtual Base Class" << endl;
    Manager m;
    m.showPerson();
    return 0;
}

