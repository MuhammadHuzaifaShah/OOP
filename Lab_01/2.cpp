#include <iostream>
using namespace std;
class Circle{
    double radius;
    double pi=3.14159;
    public:
        Circle(){
            radius=0.0;
        }
        void setRadius(int r){
            radius =r;
        }
        void getRadius(){
            cout << "Radius :" << radius << "\n";
        }
        void getArea(){
            cout << "Area : " << pi*radius*radius << "\n";
        }
        void getDiameter(){
            cout << "Diameter : " << radius*2 << "\n";
        }
        void getCircumference(){
            cout << "Circumference : " << 2*pi*radius << "\n";
        }
}; 
int main()
{
    Circle c;
    c.setRadius(10);
    c.getRadius();
    c.getArea();
    c.getDiameter();
    c.getCircumference();
   return 0;
}