#include <iostream>
using namespace std;

class Car{
    public:
    string brand;
    string model;
    int year;

    Car(string x,string y,int z);
};


Car::Car(string x,string y,int z)
{
    brand=x;
    model=y;
    year=z;
}
int main()
{
    Car myObj1={"BMW","X5",1999};
    Car myObj2={"Ford","Mustang",199};

    cout << myObj1.brand <<"   "<< myObj1.model <<"   "<< myObj1.year << "\n";
    cout << myObj2.brand <<"   "<< myObj2.model <<"   "<< myObj2.year << "\n";
   return 0;
}