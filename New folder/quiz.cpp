#include <iostream>
#include <cmath>
using namespace std;

class  point{
    int x,y;
    public:
        friend void distance(point,point);
        
        point(int a,int b)
        {
            x=a;
            y=b;
        }
        void display()
        {
            cout << "The Points are : (" << x << "," << y << ")\n";
        }
};
void distance(point o1,point o2)
{
    int x_diff=o2.x-o1.x;
    int y_diff=o2.y-o1.y;

    float dis=sqrt((x_diff)*(x_diff)+(y_diff)*y_diff);

    cout << "Distance is : " << dis << "\n";
}

int main()
{
    point p(1,1);
    p.display();
    point q(3,4);
    q.display();

    distance(p,q);
   return 0;
}