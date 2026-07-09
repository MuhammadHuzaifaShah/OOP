#include <iostream>
using namespace std;
class MyClass{ // class
    public:     // access specifier
    MyClass(){   // constructor
        cout << "Hello world! ";
    }
};
int main()
{
    MyClass myobj; // create an object of MyClass (call the constructor)
   return 0;
}