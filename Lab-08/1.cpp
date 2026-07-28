#include <iostream>
using namespace std;
class IntArray{
    int arraySize;
    int* arr;
    public:
        IntArray(int s){
            arraySize=s;
            if(arraySize>0){
                arr=new int[arraySize];
                for(int i=0;i<arraySize;i++){
                    arr[i]=0;                }
            }
            arr=nullptr;
        }
        IntArray(const IntArray &obj){ // Copy Constructor
            arraySize=obj.arraySize;
            if(arraySize>0){
                arr=new int[arraySize];
                for(int i=0;i<arraySize;i++){
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
            arraySize=0;
        }
        void setSize(int);
        void setArr(int,int);

        int* getArr() const;
        int getSize() const;
        void display() const;
        IntArray addArrays(const IntArray) const;
         int &operator[](int index){
            static int dummy=-999;
            if(index<0 || index>arraySize){
                dummy=-999;
                return dummy;
            }
            return arr[index];
         }
}; 
void IntArray::setSize(int s){
    if(arr !=nullptr){
                delete[] arr;
                arr=nullptr;
    }
    arraySize=(s>0)?s:0;
    if(arraySize>0){
        arr=new int[arraySize];
        for(int i=0;i<arraySize;i++){
            arr[i]=0;
        }
    }
}
void IntArray::setArr(int idx,int val){
    if(idx>=0 && idx<arraySize){
        arr[idx]=val;
    }else{
        cout << "Invalid Index.\n";
    }
}
int* IntArray::getArr() const{
    return arr;
}
int IntArray::getSize() const{
    return arraySize;
}
void IntArray:: display() const
{
    if(arr==nullptr || arraySize==0){
        cout << "[Empty Array]";
        return;
    }
    cout << "Array is : ";
    for(int i=0;i<arraySize;i++){
        cout << arr[i] << " ";
    }

    cout << "\n";
}
IntArray IntArray:: addArrays (const IntArray obj) const{
    if(arraySize !=obj.arraySize){
        cout << "For Addition Size of both Arrays Must be same.\n";
    }

    IntArray result(arraySize);

    for(int i=0;i<arraySize;i++){
        result.arr[i]=arr[i]+obj.arr[i];
    }
    return result;
} 
int main()
{
    
   return 0;
}