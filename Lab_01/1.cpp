#include <iostream>
#include <iomanip>
using namespace std;
class Date{
    int day,month,year;
    public:
        void setter(int setDay,int setMonth,int setYear){
            day=setDay;
            month=setMonth;
            year=setYear;
        }

        int getday() const
        {
            return day;
        }
        int getmonth() const
        {
            return year;
        }
        int getyear() const
        {
            return year;
        }
        void displayDate();
        void inputDate();
}; 
void Date:: inputDate(){
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter Month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

}
void Date:: displayDate(){
    cout << setw(2) << setfill('0') << day << "/" 
         << setw(2) << setfill('0') << month << "/" 
         << setw(4)  <<setfill('0') <<  year << "\n";
}
int main()
{
    // satatic
    Date dates[5];

    dates[0].setter(9,11,1877);
    dates[1].setter(25,12,1876);
    dates[2].setter(14,8,1947);
    dates[3].setter(11,9,1948);
    dates[4].setter(9,11,1877);

    for(int i=0;i<5;i++)
    {
    dates[i].displayDate();
    }
    cout << "\n\n\n";
    
    // dynamic Allocation
    int size;
    cout << "Enter the size of Array of dates : ";
    cin >> size;
    cout << "\n";
    Date *dynamicDates=new Date[size];

    for(int i=0;i<size;i++){
        cout << "Date " << i+1 << "\n";
        dynamicDates[i].inputDate();
    }
    

    for(int i=0;i<size;i++){
        dynamicDates[i].displayDate();
    }

    delete[] dynamicDates;
   return 0;
}