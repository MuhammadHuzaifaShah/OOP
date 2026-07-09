#include<iostream>
using namespace std;

/*
student =>test
student =>sports
test =>result
tets =>sports
*/
class Student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(void){
            cout<<"Your roll no is "<< roll_no<<endl;
        }
};
class Test: virtual public Student{
    protected:
        float math,pyhsics;
    public:
        void set_marks(float m1,float m2){
            math=m1;
            pyhsics=m2;
        }
        void print_marks(void){
            cout << "Your Result is : " <<endl
            << "Math =" << math << endl
            << "Phsics =" << pyhsics << endl; 
        }
};

class Sport: virtual public Student{
    protected:
        float score;
    public:
        void set_score(float s){
            score=s;
        }
        void print_score(void){
            cout << "Your PT score is : " << score << "\n";
        }
};

class Result: public Sport,public Test{
    private:
        float total;
    public:
        void display(void){
            total=math+pyhsics+score;
            print_number();
            print_marks();
            print_score();
            cout << "Your total score is : " << total << "\n";
        }
};
int main(){
    Result harry;
    harry.set_number(420);
    harry.set_marks(78.5,99.5);
    harry.set_score(9);
    harry.display();
    return 0;
}