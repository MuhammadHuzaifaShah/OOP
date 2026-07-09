#include <iostream>
using namespace std;
class simple{
    int data1,data2;
    public:    // default argument
        simple(int a,int b=9)  // if we pass only one value ,the value of B is set to be 9
        {
            data1=a;
            data2=b;
        }
        void print();
}; 

void simple :: print()
{
    cout << "You value are " << data1 << " , " << data2 << "\n";
}
int main()
{
    simple o1(3);  // if we pass one value then the value b is default

    o1.print();
   return 0;
}