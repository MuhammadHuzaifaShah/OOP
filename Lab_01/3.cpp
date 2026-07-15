#include <iostream>
using namespace std;
class Car{
    int yearModel;
    string make;
    int speed;
    public:
        Car(int yM){
            yearModel=yM;
            speed=0;
            make="";
        }
        void setter(int,string,int);
        void getter();
        void accelarate();
        void brake();
}; 

void Car::setter(int yM,string m,int s)
{
            yearModel=yM;
            make=m;
            speed=s;
}
void Car :: getter()
{
            cout << "Model is : " << yearModel << "\n";
            cout << "Make of the car : (" << make << ")\n";
            cout << "Speed is " << speed << "\n";
}

void Car:: accelarate(){
    speed=speed+5;
}

void Car:: brake(){
    speed=speed-5;
}
int main()
{
    Car c(2001);
    // c.setter(2001,"Kamal",10);
    c.getter();
    c.accelarate();
    c.accelarate();
    c.accelarate();
    c.getter();
    c.brake();
    c.brake();
    c.brake();
    c.brake();
    c.getter();
   return 0;
}