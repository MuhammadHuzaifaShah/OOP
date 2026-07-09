#include <iostream>
using namespace std;
class base{
    int data1;  // private by default not accessible
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
}; 
void base :: setData(void)
{
    data1=10;
    data2=20;
}

int base :: getData1()
{
    return data1;
}

// int base :: getData2()
// {
//     return data2;
// }
class derived : private base{  // we cannot call set data in main function
    int data3;
    public:
        void process();
        void display();
};

void derived :: process()
{
    setData();
    data3=data2 * getData1();
}

void derived :: display()
{
    cout << "Value of Data1 is : " << getData1() << "\n";
    cout << "Value of Data2 is : " << data2 << "\n";
    cout << "Value of Data2 is : " << data3 << "\n";

}
int main()
{
    derived der;
    // der.setData();
    der.process();
    der.display();
   return 0;
}