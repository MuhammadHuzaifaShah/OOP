#include <iostream>
using namespace std;
/*
Order of Execution of Constructor
    CASE 1
    class B: public A{
==>     first A() then B()
    };
    CASE 2
    class A: public B,public C{
==>      first class B() then Class C() and then A()
    };
    CASE 3
    class A:public B,virtual public C{
==>     first class C,then class B() and then A()
    };
*/

class base1{
    int data1;
    public:     
        base1(int i){
            data1=i;
            cout << "Base1 Class constructor is called." << "\n";
        }
        void printDataBase1(void){
            cout << "The value of Data is : " << data1 << "\n";
        }
};


class base2{
    int data2;
    public:     
        base2(int i){
            data2=i;
            cout << "Base2 Class constructor is called." << "\n";
        }
        void printDataBase2(void){
            cout << "The value of Data is : " << data2 << "\n";
        }
};

class derived:public base1 ,public base2{ // changing order dose matter in this
    int derived1,derived2;
    public:
        derived(int a,int b,int c,int d):base1(a),base2(b){ // changing order does not matter
            derived1=c;
            derived2=d;
            cout << "Derived Class construtor called." << "\n";
        }
        void printDataDerived(void){
            cout << "The value of derived1 is : " << derived1 << "\n";
            cout << "The value of derived2 is : " << derived2 << "\n";
        }
};
int main()
{
    derived har(1,2,3,4);
    har.printDataBase1();
    har.printDataBase2();
    har.printDataDerived();
   return 0;
}