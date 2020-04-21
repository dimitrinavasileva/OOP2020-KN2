> __Function Overloading__
>   - __see Overloading.cpp__

> __Function Overriding__
>   - __see Overriding.cpp__

> __Difference between function overloading and function overriding__
>   - 1) Function Overloading happens in the same class when we declare same functions with different arguments in the same class. Function Overriding is happens in the child class when child class overrides parent class function.
>   - 2) In function overloading function signature should be different for all the overloaded functions. In function overriding the signature of both the functions (overriding function and overridden function) should be same.
>   - 3) Overloading happens at the compile time thats why it is also known as compile time polymorphism while overriding happens at run time which is why it is known as run time polymorphism.
>   - 4) In function overloading we can have any number of overloaded functions. In function overriding we can have only one overriding function in the child class.

> __Polymorphism__ means that a call to a member function will cause a different function to be executed depending on the type of object that invokes the function
>
> __Virtual Function__ 
> A virtual function is a function in a base class that is declared using the keyword virtual. Defining in a base class a virtual function, with another version in a derived class, signals to the compiler that we don't want static linkage for this function.
>
> What we do want is the selection of the function to be called at any given point in the program to be based on the kind of object for which it is called. This sort of operation is referred to as dynamic linkage, or late binding.
>   - __see Polymorphism.cpp__

> __The Diamond Problem__
>   - __see TheDiamondProblem.cpp__