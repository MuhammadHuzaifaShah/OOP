#include <iostream>
using namespace std;
 
int main()
{
    // basic pointer example
    int a=4;
    int* ptr=&a;
    *ptr=999;
    cout << "Value of a: " << *(ptr) << endl;  // Dereferencing pointer to get the value of a

    // new pointer example
    int *p=new int(40);
    cout << "The value at address p is : " << *(p) << "\n";

    int *arr=new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
   
    cout << "The value of arr[0] is " << arr[0] << "\n"; 
    cout << "The value of arr[1] is " << *(arr+1) << "\n"; 
    cout << "The value of arr[2] is " << arr[2] << "\n"; 

    // delete operator
     delete [] arr;
   return 0;
}