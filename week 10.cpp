//lawrence Njeru//
//week 10//
//bcs-05-0066/2025//

#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }
};

// Derived class
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

// Derived class
class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Triangle" << endl;
    }
};

int main() {
    Shape *shape;   // Base class pointer

    Circle c;
    Rectangle r;
    Triangle t;

    shape = &c;
    shape->draw();

    shape = &r;
    shape->draw();

    shape = &t;
    shape->draw();

    return 0;
}
