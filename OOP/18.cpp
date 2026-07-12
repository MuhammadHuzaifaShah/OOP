// object to array
#include <iostream>
using namespace std;

class Employ{
    int id;
    int salary;
    public:
    void setId(void)
    {

        salary=122;
        cout << "Enter Id of Employ :";
        cin >> id;
    }
    void getId(void)
    {
        cout << "Id of Employee is : " << id << endl;
    }
};
int main()
{
    Employ fb[4];

    for(int i=0;i<4;i++)
    {
        fb->setId();
        fb->getId();
    }

   return 0;
}