#include <iostream>
using namespace std;
class Date{
    int day,month,year;
    public:
        void setter(int setDay,int setMonth,int setYear){
            day=setDay;
            month=setMonth;
            year=setYear;
        }

        void getter(){
            int getDay=day;
            int getMonth=month;
            int getYear=year;
        }
        void displayDate();
}; 
void Date:: displayDate(){
    cout << day << "/" << month << "/" << year << "\n";
}
int main()
{
    int size;
    cout << "Enter the size of Array of dates : ";
    cin >> size;
    cout << "\n";
    Date dates[size];

    
    
   return 0;
}