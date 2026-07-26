#include <iostream>
using namespace std;

class Rectangle;

class Square{
    float side;
    public:
        Square(float s){
            side=s;
        }
        friend class Rectangle;
}; 

class Rectangle{
    int height;
    int width;
    public:
        void convert(Square s){
            height=s.side;
            width=s.side;
        }

        float area(){
            return height*width;
        }

        void display(){
            cout << "Height   :" << height << "\n";
            cout << "Width    :" << width << "\n";
            cout << "Area     :" << area() << "\n";
        }
};
int main()
{
    int side;
    cout << "Enter the size of one Side : ";
    cin >> side;

    Square sq(side);

    Rectangle rect;

    rect.convert(sq);
    rect.display();
   return 0;
}