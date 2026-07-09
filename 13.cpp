#include <iostream>
using namespace std;

class Car{
    public:
    string brand;
    string model;
    int year;

    Car()
    {
        brand="Unknown";
        model="Unknown";
        year=0;
    }

    Car(string x,string y,int z)
    {
    brand=x;
    model=y;
    year=z;
    }
};


int main()
{
    Car myObj;
    Car myObj1={"BMW","X5",1999};
    Car myObj2={"Ford","Mustang",199};

    cout << myObj.brand <<"   "<< myObj.model <<"   "<< myObj.year << "\n";
    cout << myObj1.brand <<"   "<< myObj1.model <<"   "<< myObj1.year << "\n";
    cout << myObj2.brand <<"   "<< myObj2.model <<"   "<< myObj2.year << "\n";
   return 0;
}