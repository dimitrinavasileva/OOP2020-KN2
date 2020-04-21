#include <iostream>
using namespace std;


class BaseClass {
public:
    void disp() { //overridden function
        cout << "Function of Base class" << endl;
    }
};

class DerivedClass : public BaseClass {
public:
    void disp() { //overriding function
        cout << "Function of Derived class" << endl;
    }
};

int main() {
    DerivedClass obj1 = DerivedClass();
    BaseClass obj2 = DerivedClass();
    obj1.disp();
    obj2.disp();


    BaseClass* b;
    DerivedClass d;
    b = &d;
    b->disp();

    return 0;
}