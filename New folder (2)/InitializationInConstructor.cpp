#include <iostream>
using namespace std;
/*
Syntex for Initilization List in Constructor
    constrctor (argument List):Initialization Section
    {
        assignment + other code;
    }


    class test{
    int a,b;
    public:
        test(int i,int j):a(i),b(j){ // initilization list
    };
*/

class test{
    int a;
    int b;
    public:
        // test(int i,int j):a(i),b(j)
        // test(int i,int j):a(i),b(i+j)
        // test(int i,int j):a(i),b(a+j)
        // test(int i,int j):b(j),a(i+b) 
        /*we declare a before b but we initialize b first and then a, 
        so a will be initialized with garbage value of b*/ 
        test(int i,int j):a(i)
        { 
            b=j;
            cout << "Constructor called." << "\n";
            cout << "The value of a is : " << a << "\n";
            cout << "The value of b is : " << b << "\n";
    }
};
int main()
{
    test a(4,3);
   return 0;
}