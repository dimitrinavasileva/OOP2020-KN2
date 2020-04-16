> Inheritance is the process of inheriting properties of objects of one class by objects of another class. The class which inherits the properties of another class is called Derived or Child or Sub class and the class whose properties are inherited is called Base or Parent or Super class. When a single class is derived from a single parent class, it is called Single inheritance. It is the simplest of all inheritance.

> For example:
>   - Animal is derived from living things
>   - Car is derived from vehicle
>   - Typist is derived from staff

> Syntax

```c++
    class A   // base class
    {
        ...
    };
    class B : acess_specifier A   // derived class
    {   
        ...
    } ;
```

```c++
#include <iostream> 
using namespace std; 

class Base
{
   public:
        void getdata()
        {
            cout << "Enter the value of x = "; 
            cin >> x;
        }
        int x;
 };

class Derive : public Base
{
   public:
        void readdata()
        {
            cout << "Enter the value of y = "; 
            cin >> y;
        }
        void product()
        {
            cout << "Product = " << x * y;
        }
    private:
        int y;
 };
 
 int main()
 {
    Derive a;
    a.getdata();
    a.readdata();
    a.product();
    return 0;
 }
```