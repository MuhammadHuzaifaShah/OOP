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
    MyClass myObj;
    myObj.myNum=19;
    myObj.myName="Huzaifa";
    cout << myObj.myNum << "\n";
    cout << myObj.myName ;
    return 0;
}