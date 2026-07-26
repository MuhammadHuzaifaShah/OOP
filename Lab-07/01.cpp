#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
class ObjectTracker{
   static int count;
   public:
      ObjectTracker(){
         count++;
      }
      ObjectTracker(const ObjectTracker& other){
         count++;
      }
      ~ObjectTracker(){
         count--;
      }

      static int display(void){
         return count;
      }
};
int ObjectTracker::count=0; 
int main()
{
    srand(time(0));

    int size=rand()%6 +5;

    ObjectTracker* obj= new ObjectTracker[size];

    cout << "Object Created \n";

    for(int i=0;i<size;i++){
      cout << "Object " << i+1 << ":   Active Object " << ObjectTracker::display() << "\n";
    }

    cout << "\nCurrent Active Objects : " << ObjectTracker::display() << "\n";


    delete[] obj;
    cout << "\nAfter Deleting array ==> Current Active Objects : " << ObjectTracker::display() << "\n";

    

   return 0;
}