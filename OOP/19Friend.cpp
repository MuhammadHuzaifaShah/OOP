#include <iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:

    friend complex sumComplex(complex o1, complex o2);  // allowed fuction to access anything with private members
    void setNumber(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    void printNumber()
    {
        cout << "Complex Number is " << a << " +" << b << "i" << endl;
    }
}; 

complex sumComplex(complex o1,complex o2)
{
    complex o3;
    // cout << a ; not allowed we need object_name.member_name like   o1.a+o2.a
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
    complex c1,c2,sum;

    c1.setNumber(1,4);
    c1.printNumber();

    c2.setNumber(5,8);
    c2.printNumber();

    sum=sumComplex(c1,c2);
    sum.printNumber();

   return 0;
}

/*
Properties of friend function
--->Not in the scope of Class 
--->since it is not in the scope of class so it is not called from the object of that class c1.sumComplex=Invalid
--->can be invoked without the help of object
--->usually contain  objects as arguments
---> can be declared inside public and private section of class
---> it cannot access members directly by their names andn need object_name.member_name to access any member 
*/