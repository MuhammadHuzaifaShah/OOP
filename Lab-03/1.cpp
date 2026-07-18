#include <iostream>
using namespace std;

class Student{
    string name;
    double cgpa;
    int rollNo;
    int noOfTests;
    int *tests;
    double average;
    public:
        Student(string n="",double c=0.0,int rN=0,int nOT=0)
        {
            name=n;
            cgpa=c;
            rollNo=rN;
            noOfTests=nOT;
            average=0.0;

            if(noOfTests>0)
            {
                tests=new int[noOfTests];
                for(int i=0;i<noOfTests;i++)
                {
                    tests[i]=0;
                }
            }
            else
            {
                tests=nullptr;
            }
        }
        ~Student()
        {
            if (tests != nullptr)
            {
                delete[] tests;
                tests = nullptr;
            }
        }
        void setname(string);
        void setcgpa(float);
        void setrolno(int);
        void setNoOfTest(int);
        void setTest(int,int);
        void setavg(float);
        string getname() const;
        double getCgpa() const;
        int getRollNo() const;
        int getNoOfTests() const;
        int getTests(int) const;
        double getAverage() const;
        void display();
        void calculateAvg();
        
};

void Student::setname(string n){
    name=n;
}

void Student::setcgpa(float c){
    cgpa=c;
}

void Student::setrolno(int r){
    rollNo=r;
}

void Student::setNoOfTest(int n){
    if(tests!=nullptr)
        delete[] tests;

    noOfTests=n;

    if(noOfTests>0)
    {
        tests=new int[noOfTests];
        for(int i=0;i<noOfTests;i++)
            tests[i]=0;
    }
    else
        tests=nullptr;
}

void Student::setTest(int idx,int score){
    if (idx >= 0 && idx < noOfTests)
        {
            tests[idx] = score;
        }
}

void Student:: setavg(float a){
    average=a;
}


string Student::getname() const{
            return name;
}

double Student::getCgpa() const{
            return cgpa;
}

int Student:: getRollNo() const{
            return rollNo;
}

int Student::getNoOfTests() const{
            return noOfTests;
}

int Student::getTests(int idx) const{
            if (idx >= 0 && idx < noOfTests)
            return tests[idx];

        return -1;
}

double Student:: getAverage() const{
            return average;
}


void Student::calculateAvg(){
    if(noOfTests==0){
        average=0;
        return; 
    }
    int sum=0;
    for(int i=0;i<noOfTests;i++){
        sum +=tests[i];
    }
    average=(double)sum/noOfTests;
}

void Student::display(){
    cout << "Name       :"<< name << "\n";
    cout << "Cgpa       :"<< cgpa << "\n";
    cout << "Roll No    :"<< rollNo << "\n";
    cout << "Tests Score:";

    for(int i=0;i<noOfTests;i++){
        cout << tests[i] << " ";
    }
    cout << "\n";
    cout << "Average : " << average << "\n";
}

void takeInformation(Student* students, int numOfStudents){
    string name;
    float cgpa;
    int noOftests;
    int rollNo;
    int testScore;
    int marks;

    for(int i=0;i<numOfStudents;i++){
        cout << "\n Enter the Information of Student " << i+1 << "\n";

        cout << "Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Roll No: ";
        cin >> rollNo;

        cout << "CGPA: ";
        cin >> cgpa;

        cout << "Number of Tests: ";
        cin >> noOftests;

        students[i].setname(name);
        students[i].setrolno(rollNo);
        students[i].setcgpa(cgpa);
        students[i].setNoOfTest(noOftests);

        for(int j=0;j<noOftests;j++){
            cout << "Enter test " << j+1 << " Marks : ";
            cin >> marks;
            students[i].setTest(j,marks);
        }
        students[i].calculateAvg();
    }
}

void displayOneStudent(Student* students, int noOfStudents, int studentNo){
    if(studentNo>noOfStudents || studentNo <=0){
        cout << "\n Invalid Student Number .";
        return;
    }
    students[studentNo-1].display();
}

void displayAllStudents(Student* students, int noOfStudents){
    for(int i=0;i<noOfStudents;i++){
        students[i].display();
        cout << "\n";
    }
}

void findTopper(Student* students, int noOfStudents){
    if(noOfStudents==0){
        return;
    }

    int topper=0;

    for(int i=1;i<noOfStudents;i++){
        if(students[i].getAverage()>students[topper].getAverage()){
            topper=i;
        }
    }

    cout << "\n Topper Information \n";
    students[topper].display();
}

int main()
{
    int noOfStudent;
    cout << "Enter Number of Students : ";
    cin >> noOfStudent;

    Student* students = new Student[noOfStudent];

    int choice;

    do{
        cout << "\n1.Take Information.\n";
        cout << "2.Display One Student.\n";
        cout << "3.Display all Students.\n";
        cout << "4.Find Topper.\n";
        cout << "5.Exit\n\n";

        cout << "Enter Your Choice : ";
        cin >> choice; 

        switch (choice)
        {
        case 1:
            takeInformation(students,noOfStudent);
            break;
        case 2:
            int studentNo;
            cout << "Enter Student No : ";
            cin >> studentNo;
            displayOneStudent(students,noOfStudent,studentNo);
            break;
        case 3:
            displayAllStudents(students,noOfStudent);
            break;
        case 4:
            findTopper(students,noOfStudent);
            break;
        case 5:
            cout << "Exiting Program .\n";
            break;
        default:
            cout << "Invalid Choice .";
            break;
        }
    }while(choice !=5);

    if (students != nullptr)
    {
        delete[] students;
        students = nullptr;
    }

   return 0;
}