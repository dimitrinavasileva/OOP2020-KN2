#include <iostream> 
using namespace std;

class Shape {
protected:
    int width, height;

public:
    Shape() = default;
    Shape(int a, int b) {
        width = a;
        height = b;
    }
    // - early binding 
    int area() {
        cout << "Parent class area :" << endl;
        return 0;
    }
    /* 
    // - late binding(or dynamic binding)
    virtual int area() {
        cout << "Parent class area :" << endl;
        return 0;
    }*/
};
class Rectangle : public Shape {
public:
    Rectangle() = default;
    Rectangle(int a, int b) :Shape(a, b) { }

    int area() {
        cout << "Rectangle class area :" << endl;
        return (width * height);
    }
};

class Triangle : public Shape {
public:
    Triangle() = default;
    Triangle(int a = 0, int b = 0) :Shape(a, b) { }

    int area() {
        cout << "Triangle class area :" << endl;
        return (width * height / 2);
    }
};

int main() {
    Shape* shape;
    Rectangle rec(10, 7);
    Triangle  tri(10, 5);

    shape = &rec;
    shape->area();

    shape = &tri;
    shape->area();

    return 0;
}