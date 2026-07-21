#include <iostream>
using namespace std;
 
class Number{
    int a;
    public:
        Number(){    // <== Default Construtor
            a=0;
        }      
        Number(int num)  // <== Parametarized Constructor
        {
            a=num;
        }
        Number(Number &obj)
        {
            cout << "Copy Construtor is called ." << "\n";
            a=obj.a;   // <=== This is Copy Contrutor
        }
        void display()
        {
            cout << "The number is : "<< a << "\n";
        }
};
int main()
{
    Number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();

    Number z1(z);   // copy construtor invoked
    z1.display();
    // ===> z1 exactly resembles to z or x or y

    z2 =z; // ==> copy construtor not invoked or called
    z2.display();

    Number z3=z;  // ==> copy construtor invoked
    z3.display();
   
   return 0;
}
/*
==> compiler supply its own copy construter 
==> if we made a copy constructor than it will run obviously
==> if we donot make our own copy constructor it will not throw an error because
    compiler provide its own copy construtor
*/