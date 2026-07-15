#include <iostream>
using namespace std;

class Student{
    string name;
    double cgpa;
    int rollNo;
    int noOfTests;
    int tests;
    double average;
    public:
        Student(){
            name="";
            cgpa=0.0;
            rollNo=0;
            noOfTests=0;
            tests=NULL;
            average=0.0;
        }
        void setter(string,double,int,int,int,double);
};

void Student::setter(string n,double c,int rN,int nOT,int t,double avg){
    name=n;
    cgpa=c;
    rollNo=rN;
    noOfTests=nOT;
    tests=t;
    average=avg;
}

int main()
{
    
   return 0;
}