#include <iostream>
using namespace std;
class base{
    protected:
        int a;
    private:
        int b;
}; 
/*
   for protected derivation
                            | Public Derivation | Private Derivation | Protected Derivation
        1.Private Members   | Not Inherited     | Not Inherited      | Not Inherited     
        2.Public Members    |   Public          |  Private           |  Protected
        3.Protected Members |  Protected        |  Private           |  Protected
*/
class derived : base{

};
int main()
{
    base ba;
    derived d;
    // cout << ba.a;   ==> This will show error because a is derived as protected
   return 0;
}