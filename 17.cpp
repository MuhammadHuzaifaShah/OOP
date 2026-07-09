#include <iostream>
using namespace std;
class Employee{
    int id;
    static int count ; // =1000; is not allowed
    public:
        void setData(void)
        {
            cout << "Enter the id of Employ : ";
            cin >> id;
            count ++;
        }
        void getData(void)
        {
            cout << "Id of the Employ Number  " << count << " is " << id;
            cout << "\n";
        }
        static void getCount(void)   // Static Function Member
        {

            // cout << id ; Throw an Error
            cout << "The value of count is : " << count << "\n";   // they can access only static variable
        }
};
int Employee :: count;  // Default value is Zero(0) and we can give any value 


// Count is the static data member
int main()
{
    Employee huzaifa,hamza,ahmed;

    huzaifa.setData();
    huzaifa.getData();

    Employee :: getCount();  // this run without object access

    ahmed.setData();
    ahmed.getData();

    Employee :: getCount();

    hamza.setData();
    hamza.getData();

    Employee :: getCount();

   return 0;
}