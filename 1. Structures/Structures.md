> A data structure is a group of data elements grouped together under one name. These data elements, known as members, can have different types and different lengths. Data structures can be declared in C++ using the following syntax:
```c++
struct type_name {
member_type1 member_name1;
member_type2 member_name2;
member_type3 member_name3;
} object_names;
```
> Where type_name is a name for the structure type, object_name can be a set of valid identifiers for objects that have the type of this structure. Within braces {},
there is a list with the data members, each one is specified with a type and a valid identifier as its name.

> Unlike Arrays, Structures in C++ are user defined data types which are used to store group of items of non-similar data types.

> By default, all members of a structure have __PUBLIC__ access for all its members.

> ### Examples

```c++
#include <iostream>
using namespace std;

//Structure declaration
struct Person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    Person p1; //Structure variable
    
    cout << "Enter Full name: ";
    cin.get(p1.name, 50); // p1.name -> access name of a structure
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;

    return 0;
}
```

> The information is taken from [here](http://www.cplusplus.com/doc/tutorial/structures/)