#include <iostream>
using namespace std;

// if we declare Y as friend ,we need forward declaration
class Y;
class X{
    int data;
    public:
        void setVlalue(int value)
        {
            data=value;
        }
        friend void add(X,Y);
}; 

class Y{
    int num;
    public:
        void setVlalue(int value)
        {
            num=value;
        }
    friend void add(X,Y);
}; 

void add(X o1,Y o2)
{
    cout << "Summing up data of X and Y Gives  : " << o1.data+o2.num << "\n";
}
int main()
{
    X a;
    a.setVlalue(3);
    Y b;
    b.setVlalue(5);

    add(a,b);
   
   return 0;
}