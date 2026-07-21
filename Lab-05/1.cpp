#include <iostream>
using namespace std;

class IntArray {
    int* arr;
    int size;
    public:
        IntArray(){ // Default Constructor
            arr=nullptr;
            size=0;
        }
        IntArray(int s){ // Pararmetarized Constructor
            cout << "Parametarized Constructor is Called .\n";
            size=s;
            arr=new int[size];
        }
        IntArray(const IntArray &obj){ // Copy Constructor
            size=obj.size;
            if(size>0){
                arr=new int[size];
                for(int i=0;i<size;i++){
                    arr[i]=obj.arr[i];
                }
            }
            else{
                arr=nullptr;
            }
        }

        ~IntArray(){
            if(arr !=nullptr){
               delete[] arr;
               arr=nullptr;
            }

            size=0;
        }

        void setSize(int);
        void setArr(int,int);
        int getSize() const;
        int* getArr() const;
        void display() const;
        IntArray addArrays(const IntArray) const;
        IntArray subArray(const IntArray) const;
        IntArray mulArray(const IntArray ) const;
        bool palindrome() const;
        IntArray reverse () const;
        IntArray cyclicRotate(int n) const;
};

void IntArray::setSize(int s){
    if(arr !=nullptr){
        delete[] arr;
        arr=nullptr;
    }

    size=(s>0)? s:0;
    if(size>0){
        arr=new int[size];
        for(int i=0;i<size;i++){
            arr[i]=0;
        }
    }

}
void IntArray:: setArr(int idx,int val){
    if(idx>=0 && idx<size){
        arr[idx]=val;
    }else{
        cout << "Invalid index.\n";
    }
}
int IntArray::getSize() const{
    return size;
}
int* IntArray::getArr() const{
    return arr;
}
void IntArray:: display() const
{
    if(arr==nullptr || size==0){
        cout << "[Empty Array]";
        return;
    }
    cout << "Array is : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    cout << "\n";
}

IntArray IntArray:: addArrays (const IntArray obj) const{
    if(size !=obj.size){
        cout << "For Addition Size of both Arrays Must be same.\n";
        return IntArray();
    }

    IntArray result(size);

    for(int i=0;i<size;i++){
        result.arr[i]=arr[i]+obj.arr[i];
    }
    return result;
} 

IntArray IntArray::subArray(const IntArray obj) const{
    if(size !=obj.size){
        cout << "For Substraction Size of both Arrays Must be same.\n";
        return IntArray();
    }
    IntArray result(size);

    for(int i=0;i<size;i++){
        result.arr[i]=arr[i]-obj.arr[i];
    }
    return result;
}

IntArray IntArray:: mulArray(const IntArray obj) const {
    if(size !=obj.size){
        cout << "For Multiplication Size of both Arrays Must be same.\n";
        return IntArray();
    }
    IntArray result(size);

    for(int i=0;i<size;i++){
        result.arr[i]=arr[i]*obj.arr[i];
    }
    return result;
}

bool IntArray::palindrome() const{
    int i=0,j=size-1;

    while(i<j){
        if(arr[i] != arr[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

IntArray IntArray::reverse() const{
    IntArray result(size);
    for(int i=0;i<size;i++){
        result.arr[i]=arr[size-1-i];
    }

    return result;
}

IntArray IntArray::cyclicRotate(int n) const{
    IntArray result(size);
    if(size==0){
        return result;
    }
    for(int i=0;i<n;i++){
        result.arr[i]=arr[size-n+i];
    }
    for(int i=0;i<size-n;i++){
        result.arr[n+i]=arr[i];
    }

    return result;
}
int main()
{
    int size1,size2;
    cout << "Enter the size of Array 1: ";
    cin >>size1;
    cout << "\n";

    IntArray array1(size1);

    int value;
    array1.setSize(size1);

    cout << "For First Array put Values.\n";
    for(int i=0;i<size1;i++){
        cout << "Enter Value for Index " << i << ":";
        cin >> value;
        array1.setArr(i,value);
    }

    cout << "\nEnter the size of Array 2: ";
    cin >>size2;
    cout << "\n";
    IntArray array2(size2);
    array2.setSize(size2);
    cout << "For Second Array put Values.\n";
    for(int i=0;i<size2;i++){
        cout << "Enter Value for Index " << i << ":";
        cin >> value;
        array2.setArr(i,value);
    }

   int choice;
   
   do
   {
    cout << "--------------------Menu--------------------\n";
    cout << "1.Display Array 1\n";
    cout << "2.Display Array 2\n";
    cout << "3.Add Arrays\n";
    cout << "4.Substract Array\n";
    cout << "5.Multiply Array\n";
    cout << "6.To check Array 1 is Pallindrome.\n";
    cout << "7.To check Array 2 is Pallindrome.\n";
    cout << "8.Reverse Array 1\n";
    cout << "9.Reverse Array 2\n";
    cout << "10.Cyclic Rotate of Array 1\n";
    cout << "11.Cyclic Rotate of Array 2\n";
    cout << "12.Make Copy of Array 1\n";
    cout << "12.Make Copy of Array 2\n";
    cout << "0.Exit\n";

    cout << "Enter Your Choice.";
    cin >> choice;
    cout << "\n";

    switch (choice)
   {
   case 1:{
        cout << "Array 1 ";
        array1.display();
    break;
   }
    case 2:{
        cout << "Array 2 ";
        array2.display();
    break;
   }
    case 3:{
        if(array1.getSize() != array2.getSize()){
            cout << "Size of Both arrays Must be same.";
            break;
        }
        IntArray result=array1.addArrays(array2);

        cout << "Array 1 + Array 2 : ";
        result.display();
    break;
    }
    case 4:{
        if(array1.getSize() != array2.getSize()){
            cout << "Size of Both arrays Must be same.";
            break;
        }
        IntArray result=array1.subArray(array2);

        cout << "Array 1 - Array 2 : ";
        result.display();
    break;
    }
    case 5:{
        if(array1.getSize() != array2.getSize()){
            cout << "Size of Both arrays Must be same.";
            break;
        }
        IntArray result=array1.addArrays(array2);

        cout << "Array 1 * Array 2 : ";
        result.display();
    break;
    }
    case 6:{
        if(array1.palindrome()){
            cout << "Array 1 is Pallindrome.\n";
            break;
        }else{
        cout << "Array 1 is not a Pallindrome.\n";
        }
        break;
    }
    case 7:{
        if(array2.palindrome()){
            cout << "Array 2 is Pallindrome.\n";
            break;
        }else{
        cout << "Array 2 is not a Pallindrome.\n";
        }
        break;
    }
    case 8:{
        IntArray result=array1.reverse();
        cout << "Reverse Array 1 : ";
        array1.display();
    }
    case 9:{
        IntArray result=array2.reverse();
        cout << "Reverse Array 2 : ";
        array2.display();
    }
    case 10:{
        int n;
        cout << "Enter the value for Cyclic rotate : ";
        cin >> n;
        IntArray result=array1.cyclicRotate(n);

        cout << "Array 1 after Cyclic rotate : ";
        array1.display();
        break;
    }
    case 11:{
        int n;
        cout << "Enter the value for Cyclic rotate : ";
        cin >> n;
        IntArray result=array2.cyclicRotate(n);

        cout << "Array 2 after Cyclic rotate : ";
        array2.display();
        break;
    }
    case 12:{
        IntArray cpy1(array1);

        cout << "Copy of Array 1: ";
        cpy1.display();
        break;
    }
    case 13:{
        IntArray cpy2(array1);

        cout << "Copy of Array 2: ";
        cpy2.display();
        break;
    }
   default:
        cout << "Invlid Choice .\n";
}}while(choice !=0);

   return 0;
}