#include <iostream>
using namespace std;
class  Shop{
    int id;
    float price;
    public:
        void setData(int a,float b){
            id=a;
            price=b;
        }

        void getData(){
            cout << "Code of item is : " << id << "\n";
             cout << "Price of item is : " << price << "\n";
        }
};
int main()
{
    int size=3;
    Shop *ptr=new Shop[size];
    int p,i;
    float q;
    Shop *ptrTemp=ptr;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the id and Price of item " << i+1 << "\n";
        cin >> p >> q;
        ptr->setData(p,q);
        ptr++;
    }
    ptr=ptrTemp;
    for ( i = 0; i < size; i++)
    {
        cout << "Item Number : " << i+1 << "\n";
        ptr->getData();
        ptr++;
    }
    
    
   return 0;
}