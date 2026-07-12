#include <iostream>
using namespace std;


class c2;
class c1{
    int val1;
    friend void exchange(c1 &,c2 &);
    public:
        void inData(int a)
        {
            val1=a;
        }
        void display()
        {
            cout << val1 << "\n";
        }
};

class c2{
    int val2;
    friend void exchange(c1 &,c2 &);   
    // we use & ,if we donot use this it cannot change value in main function
    public:
        void inData(int b)
        {
            val2=b;
        }
        void display()
        {
            cout << val2 << "\n";
        }
};

void exchange(c1 &x,c2 &y)
{
    int temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;
}
int main()
{
    c1 oc1;
    c2 oc2;

    oc1.inData(34);
    oc2.inData(64);
    
    exchange(oc1,oc2);


    cout << "The value of oc1 after exchanging : ";
    oc1.display();
    cout << "The value of oc1 after exchanging : ";
    oc2.display();
   return 0;
}