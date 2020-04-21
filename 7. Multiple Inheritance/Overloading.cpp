#include <iostream> 
using namespace std;

void print(int i) {
    cout << " Here is int " << i << endl;
}
void print(double  f) {
    cout << " Here is float " << f << endl;
}
void print(char const* c) {
    cout << " Here is char* " << c << endl;
}

int getNumber(int a) {
    return a;
}

float getNumber(float a) {
    return a;
}

float sum(int a, float b) {
    return a + b;
}

float sum(float b, int a) {
    return a + b;
}

class Test
{
protected:
    int x;
public:
    Test(int i) :x(i) { }
    void fun() const
    {
        cout << "fun() const called " << endl;
    }
    void fun()
    {
        cout << "fun() called " << endl;
    }
};

/*
// OOPS -> ERROR

int test(int a) {
    a++;
    return res;
}

double test(int a) { // compiler error; new declaration of test(int)
    a++;
    return res;
}

int f ( int x) {
    return x+10;
}

int f ( const int x) {
    return x+10;
}

int func ( int x, int y) {
    return x+10;
}

int func ( int x, int y = 10) { // redefinition of int func(int, int)
    return x+y;
}

*/

int main() {
    print(10);
    print(10.10);
    print("ten");

    int b = 19;
    cout << getNumber(b) << endl;
    float a = 1.36;
    cout << getNumber(a) << endl;

    cout << sum(a, b) << endl;
    cout << sum(b, a) << endl;

   // cout << test(b) << endl;

    Test t1(10);
    const Test t2(20);
    t1.fun();
    t2.fun();
    return 0;

    return 0;
}