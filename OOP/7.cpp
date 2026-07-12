#include <iostream>
using namespace std;

class MyClass{
    public:
    void myMethod();
};

// define method outside a function
void MyClass :: myMethod()
{
    cout << "Hello World \n";
}


int main()
{
    MyClass myObj;
    myObj.myMethod();
   return 0;
}