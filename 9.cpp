#include <iostream>
using namespace std;

/*Create a class Dog with a method bark() that prints "Woof!".

Then call that method from main() using an object of the class.*/
class  Dog{
    public:
    void bark();
};

void Dog :: bark()
{
    cout << "Woof! \n";
}
int main()
{
    Dog myObj;
    myObj.bark();
   return 0;
}