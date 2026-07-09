#include <iostream>
using namespace std;
 

// class complex

class complex;

class calculator{
    public:

    int add(int a,int b)
    {
        return a+b;
    }

    int sumRealComplex(complex ,complex);
    int sumComComplex(complex ,complex);
};

class complex{
    int a;
    int b;


    // individual declaring function as friend
    // friend int calculator :: sumRealComplex(complex ,complex);
    // friend int calculator :: sumComComplex(complex ,complex);

    // Alter : Declaring the whole class as friend


    friend class calculator;
    public:

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

int calculator :: sumRealComplex(complex o1,complex o2)
{
        return (o1.a+o2.a);
}

int calculator :: sumComComplex(complex o1,complex o2)
{
        return (o1.b+o2.b);
}
int main()
{
    complex o1,o2,sum;

    o1.setNumber(1,4);
    o1.printNumber();

    o2.setNumber(5,8);
    o2.printNumber();


    calculator calc;
    int res=calc.sumRealComplex(o1,o2);
    cout << "Sum of real part is " << res << "\n";

    int resC=calc.sumComComplex(o1,o2);
    cout << "Sum of real part is " << resC <<"i " <<"\n";
   return 0;
}