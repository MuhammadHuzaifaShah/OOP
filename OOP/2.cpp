#include <iostream>
using namespace std;
 
class student{
    public:
    string name;
    int age;
    void display()
    {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
    }
};

int main()
{
    student s1;
    s1.name="Huzaifa";
    s1.age=19;
    s1.display();
   return 0;
}