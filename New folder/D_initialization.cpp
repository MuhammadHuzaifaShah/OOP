#include <iostream>
using namespace std;
class bankDeposit{
    int principal;
    int year;
    float intersetRate;
    float returnValue;
    public:
        bankDeposit(){}; 
        // ==> compiler need a constructor that do nothing otherwise it throw errors
        // ==> second method is that to not make blank objects, make each object when you want
        // ==> bandDeposit bd1 =bankDeposit(p,y,r);   <=== like this 
        // ==> bandDeposit bd1,bd2,bd3;   <== for this make a blank constructor 
        bankDeposit(int p,int y,int r);
        bankDeposit(int p,int y,float r);
        void show();

};

bankDeposit :: bankDeposit(int p,int y,float r)  // when intersetRate is in float format
{
    principal=p;
    year=y;
    intersetRate=r;
    returnValue=principal;

    for(int i=0;i<y;i++)
    {
        returnValue  = returnValue * (1+intersetRate);
    }
}

bankDeposit :: bankDeposit(int p,int y,int r)  // when intersetRate is in int format
{
    principal=p;
    year=y;
    intersetRate=float(r)/100;
    returnValue=principal;

    for(int i=0;i<y;i++)
    {
        returnValue  = returnValue * (1+intersetRate);
    }
}

void bankDeposit :: show()
{
    cout << "\n principal Amount is : " << principal 
    <<  "\n After " << year << " years amount is : " << returnValue << "\n"; 
}
int main()
{
    bankDeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;

    cout << "Enter the values of p ,y and r : " << "\n";
    cin >> p >> y >> r ;
    bd1 =bankDeposit(p,y,r);
    bd1.show();

    cout << "Enter the values of p ,y and R : " << "\n";
    cin >> p >> y >> R ;
    bd2 =bankDeposit(p,y,R);
    bd2.show();
   return 0;
}