#include <iostream>
using namespace std;
class complex{
    int a,b;
    public:
        complex(int x,int y)   // this is known as constructor overloading
        {
            a=x;
            b=y;
        }
        complex(int x)   // <---- parametarized constructor
        {
            a=x;
            b=0;
        }
        complex()    // Default constructor
        {
            a=0;
            b=0;
        }
        void printNum()
        {
            cout << "Your Number is " << a << "+" << b << "i" << "\n";
        }
}; 
int main()
{
    complex c1(4,6);
    c1.printNum();

    complex c2(4);
    c2.printNum();

    complex c3;
    c3.printNum();
    


   return 0;
}