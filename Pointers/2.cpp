#include <iostream>
using namespace std;

class Complex{
    int real,imaginary;
    public:
        void getData(){
            cout << "The real part is " << real << "\n";
            cout << "The imaginary part is " << imaginary << "\n";
        }
        void setData(int a,int b){
            real=a;
            imaginary=b;
        }
}; 
int main()
{
    // Complex c1;
    // Complex *ptr=&c1;
    Complex *ptr=new Complex;
    // (*ptr).setData(1,54); is exactlt same as
    ptr->setData(1,54); // is pointer ko dereference karo
    (*ptr).getData();
   return 0;
}