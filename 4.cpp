#include <iostream>
using namespace std;

// single obj
class MyClass{
    public:
    int myNum;
    string myName;
};
int main()
{
    MyClass myObj1;
    myObj1.myNum=19;
    myObj1.myName="Huzaifa";

    MyClass myObj2;
    myObj2.myNum=18;
    myObj2.myName="Hamza";


    cout << myObj1.myNum << " : " << myObj1.myName << "\n";

    cout << myObj2.myNum << " : " << myObj2.myName << "\n";
    return 0;
}