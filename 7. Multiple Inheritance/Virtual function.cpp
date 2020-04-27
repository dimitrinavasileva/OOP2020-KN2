#include<iostream>
using namespace std;

class B {
    virtual void f1() { // private member
        cout << "Private f1() - class B" << endl;
    }
public:
    void f() {
        cout << "class B f()" << endl;
        f1();
    } // public interface
};
struct D : public B {
    void f1() override {
        cout << "class D f1()" << endl;
    }

};


int main()
{
    D d;
    B* bp = &d;
    bp->f();
}