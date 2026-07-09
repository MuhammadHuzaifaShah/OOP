#include <iostream>
using namespace std;
class student{
    protected:
        int roll_Number;
    public:
        void set_Roll_Number(int);
        void get_Roll_Number(void);
}; 
void student :: set_Roll_Number(int r)
{
    roll_Number=r;
}
void student :: get_Roll_Number()
{
    cout << "The roll Number is " << roll_Number << "\n";
}

class exam : public student{
    protected:
        float math;
        float physics;
    public:
        void set_marks(float,float);
        void get_mark(void);
};

void exam :: set_marks(float m1,float m2)
{
    math=m1;
    physics=m2;
}

void exam :: get_mark()
{
    cout << "Marks Obtained in Math are " << math << "\n";
    cout << "Marks Obtained in Physics are " << physics << "\n";
}

class result : public exam{
        float percentage;
    public:
        void display_Result()
        {
            get_Roll_Number();
            get_mark();
            cout << "Your result is " << (math + physics) / 2 << "%" << "\n";
        }

};
int main()
{
    /*
    notes:
    ===> If we are inheriting B from A and C from B [A--->B--->C]
    ===> A is the base class for B and B is the base class for C
    ===> A --->B ----> C is called inheritance path 
    */
    result huz;
    huz.set_Roll_Number(420);
    huz.set_marks(99,100);
    huz.display_Result();
   return 0;
}