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
            else{
            arr=nullptr;
            }
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
        void setSize(int s){
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
        void setArr(int idx,int val){
            if(idx>=0 && idx<arraySize){
                arr[idx]=val;
            }else{
                cout << "Invalid Index.\n";
            }
        }

        int* getArr() const{
            return arr;
        }
        int getSize() const{
            return arraySize;
        }

        void display() const
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

        int &operator[](int index){
            static int dummy=-999;
            if(index<0 || index>=arraySize){
                dummy=-999;
                return dummy;
            }
            return arr[index];
         }

         IntArray &operator+=(const IntArray &obj){
            int newSize=arraySize+obj.arraySize;

            int* temp=new int[newSize];
            for(int i=0;i<arraySize;i++){
                temp[i]=arr[i];
            }
            for(int i=0;i<obj.arraySize;i++){
                temp[arraySize+i]=obj.arr[i];
            }

            delete[] arr;

            arr=temp;
            arraySize=newSize;

            return *this;
         }

         IntArray &operator=(const IntArray &obj){
            if(this !=&obj){
                delete[] arr;

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

             return *this;
         }
}; 

int main()
{
    IntArray a1(3);
    a1[0]=1;
    a1[1]=2;
    a1[2]=3;
    a1.display();
    IntArray a2(2);
    a2[0]=4;
    a2[1]=5;
    a2.display();
    cout << "a1[1] = " << a1[1] << " \n";
    cout << "a2[1] = " << a2[1] << " \n";
    a1 +=a2;
    cout << "After oncatenating : ";
    a1.display();
    a1=a2;
    cout << "After Assignment: ";
    a1.display();
   return 0;
}