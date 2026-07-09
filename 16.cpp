#include <iostream>
using namespace std;


// Array in OOP

class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;

    public:
    void initCounter(void){counter=0;}
    void setPrice(void);
    void diaplayPrice(void);
};

void shop :: setPrice(void)
{
    cout << "Enter Id of item " << counter +1 << " : ";
    cin >> itemId[counter];
    cout << "Enter Price of item " << counter +1 << " : ";
    cin >> itemPrice[counter];
    counter ++;
}

void shop :: diaplayPrice(void)
{
    for(int i=0;i<counter;i++)
    {
        cout << "The price of Item Id " << itemId[i] << " is " << itemPrice[i] << "\n";
    }
}

 
int main()
{
    shop dukaan;
    dukaan.initCounter();

    for (int i = 0; i < 3; i++)
    {
        dukaan.setPrice();  // we can write this seperately also
    }
    
    dukaan.diaplayPrice();
   return 0;
}
