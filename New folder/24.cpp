#include <iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    complex(int ,int);  // constructor declaration
    void printNumber()
    {
        cout << "Complex Number is " << a << " +" << b << "i" << endl;
    }

};
complex :: complex(int x,int y)  // ---> thsi is a parametarized constructor as it takes parameter
{
    a=x;
    b=y;
}
int main()
{
    complex a(4,6);    // <--- Implicit call

    complex b=complex(4,7);    // <--- Explicit call
    a.printNumber();
    b.printNumber();
    
   return 0;
}