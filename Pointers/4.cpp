#include <iostream>
using namespace std;
class A{
    int a;
    public:
        // A & setData(int a)
        void setData(int a){
            // a=a; <== This gives garbage value
/* 
this is keyword which is pointer which poits to the object which is being created
or which invokes member function
*/
            this->a=a;
            // return *this;
        }
        void getData(){
            cout << "The value of a is : " << a << "\n";
        }
}; 
int main()
{
    A a;
    a.setData(4);
    a.getData();
   return 0;
}