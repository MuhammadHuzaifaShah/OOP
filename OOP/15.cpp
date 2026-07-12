#include <iostream>
using namespace std;


class binary{
    string s;   // private member of the class
    public:

    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};

void binary :: read(void)
{
    cout << "Enter a binary Number :";
    cin >> s;
}

void  binary :: chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) !='0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format. ";
            exit(0);
        }
    }
    
}

void  binary :: ones(void)
{

    chk_bin();  // it runs without using object
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }
}

void  binary :: display(void)
{

    cout << "Binary number is : ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i) ;
    }
    cout << endl;
}

 
int main()
{
    binary b;
    b.read();
    // b.chk_bin();  if we don't write this we can implement directly in a function also
    b.display();
    b.ones();
    b.display();
   return 0;
}