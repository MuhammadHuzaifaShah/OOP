#include <iostream>
using namespace std;
/*
syntax for multiple inheritance
class dervied : visibility-mode base 1 , visibility-mode base 2
{
    class body of class "derived"
}
*/ 

class base1{
    protected:
        int base1int;
    public:
        void setBase1(int a){
            base1int=a;
        }
};

class base2{
    protected:
        int base2int;
    public:
        void setBase2(int a){
            base2int=a;
        }
};

class derived: public base1, public base2{
    public:
        void show(){
            cout << "The value of base1 is " << base1int << "\n";
            cout << "The value of base2 is " << base2int << "\n";
            cout << "The value of base1 and base2 is " << base1int+base2int << "\n";
        }
};

/*
The inherited derived class will look like this:
Data members:
    base1int --> Protected
    base2int --> Protected
Member Functions:
    void setBase1() ---> Public
    void setBase2() ---> Public
    void show() ---> Public
*/
int main()
{
    derived huz;
    huz.setBase1(23);
    huz.setBase2(25);
    huz.show();
   return 0;
}