/*
==> Destructor Never takes an argument nor return a value
==> when we need object program call constructor
==> when no need for object compiler call destructor to destruct object.
*/
#include <iostream>
using namespace std;
int count=0;

class num{
    public:
        num()
        {
            count++;
            cout << "This is the time when construtor is called for object " << count << "\n";
        }
    ~num()
    {
        cout << "This is the time when destrutor is called for object " << count << "\n";
        count--;
    }
};
int main()
{
    cout << "We are in the main ." << "\n";
    cout << "Creating first object ."<< "\n";

    num n1;
    {
        cout << "We are Entering the block ." << "\n";
        cout << "Creating two more object." << "\n";
        num n2,n3;
        cout << "We are Exiting the block ." << "\n";
    }
    cout << "Back to main. " <<"\n";
   return 0;
}