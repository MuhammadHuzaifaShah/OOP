#include <iostream>
using namespace std;

class MyClass{
    public:
    void myMethod()
    {
        cout << "Hello World \n";
    }
};

// define method inside a function
int main()
{
    MyClass myObj;
    myObj.myMethod();
   return 0;
}