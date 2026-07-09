#include <iostream>
using namespace std;
class B{
    public:
        void say(){
            cout << "Hello World ! " << "\n";
        }
};

class D: public B{
    int a;
    public:
        void say(){
            cout << "Hello My World ! " << "\n";
        }
};
int main()
{
    B b;
    b.say();
    D d;
    d.say();  // if D say function is not then it call Class B function
   return 0;
}