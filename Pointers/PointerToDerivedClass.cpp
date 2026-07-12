#include <iostream>
using namespace std;

class BaseClass{
    public:
    int var_base;
    void display(){
        cout << "Displaying the base Variable " << var_base << "\n";
    }
};

class DerivedClass:public BaseClass{
    public:
    int var_Derived;
    void display(){
        cout << "Displaying the DErived Variable " << var_Derived << "\n";
        cout << "Displaying the base Variable from derived class " << var_base << "\n";
    }
};
int main()
{
    BaseClass *base_Class_Pointer;
    BaseClass obj_Base;
    DerivedClass obj_Derived;
    base_Class_Pointer= &obj_Derived; 
    base_Class_Pointer->var_base=34;
    // base_Class_Pointer->var_derived=134; This will throw an error
    base_Class_Pointer->display();

    DerivedClass *derived_Class_pointer;
    derived_Class_pointer=&obj_Derived;
    derived_Class_pointer->var_Derived=320;
    derived_Class_pointer->display();
  
   return 0;
}