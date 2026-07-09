#include <iostream>
using namespace std;


class Book{
    public:
    string title;
    string author;
    int year;
};
//Matilda, Roald Dahl, 1988
//The Giving Tree, Shel Silverstein, 1964
int main()
{

    // object 1
    Book myObj1;
    myObj1.title="matilda";
    myObj1.author="Roald Dahl";
    myObj1.year=1988;

    //object 2
    Book myObj2;
    myObj2.title="The Giving Tree";
    myObj2.author="shel silverstein";
    myObj2.year=1964;

    cout << myObj1.title << " , "  << myObj1.author << " , " << myObj1.year << "\n";
    cout << myObj2.title << " , "  << myObj2.author << " , " << myObj2.year << "\n";

   return 0;
}