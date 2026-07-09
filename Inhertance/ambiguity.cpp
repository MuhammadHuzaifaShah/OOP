#include <iostream>
using namespace std;

class base1{
    public:
        void greet(){
            cout<< "How are you. " << "\n";
        }
};

class base2{
    public:
        void greet(){
            cout<< "Kesa ho pae jan. " << "\n";
        }
};
class derive: public base1,public base2{
    int a;
    public:
        void greet(){
            base1::greet();  // base2::greet(); will call base2 greet function
        }
};
int main()
{
    base1 base1obj;
    base2 base2obj;

    base1obj.greet();
    base2obj.greet();

    derive d;
    d.greet();    


   return 0;
}