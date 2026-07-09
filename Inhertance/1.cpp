#include <iostream>
using namespace std;

// base class
class Employee{
    public:
    int id;
    float salary;
    Employee(int inpID)
    {
        id=inpID;
        salary=34.0;
    }
    Employee(){}
};

// Derived class syntex
/*
class {{dervived-class-name}} : {{visibility mode}} {{base-class-name}}
{
    class members/methods/etc....
}
1.Default visibility mode is private
2.Private visibility mode: Public members of base class becomes private members of derived class
3.public visibility mode: Public members of base class becomes public members of derived class
4.Private members of base class never becomes member of derived class
*/

class programer : public Employee{
    public:
    programer(int inID)
    {
        id=inID;
    }
    int lan=9;
    void getdata()
    {
        cout << id << "\n";
    }
};

int main()
{
    Employee huzaifa(2);

    cout << huzaifa.salary<< "\n";
    programer skill(10);
    cout<<skill.lan<<"\n";
    cout <<skill.id<<"\n";
    skill.getdata();

   return 0;
}