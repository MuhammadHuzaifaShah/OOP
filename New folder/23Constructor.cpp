#include <iostream>
using namespace std;

class complex{
    int a,b;
/*
--> Creating constructor
--> constructor is a special type of function that has same name as class
--> It is automatically invoked (runs when function is made)
--> it is used to initialize the objects of its class
*/
public:
    complex(void);  // constructor declaration
    void printNumber()
    {
        cout << "Complex Number is " << a << " +" << b << "i" << endl;
    }

};
complex :: complex(void)  // ---> thsi is a default constructor as it takes no parameter
{
    a=10;
    b=0;
    cout << "Hello World !"<< "\n";
}
int main()
{
    complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
   return 0;
}

/*
---> it should be declared in public section of the class
--->They are automatically invoked when object is created
--->Do not have return type.they donot return value and dont have void type
--->it can have default argument
--->we cannot refer to their addresses
*/