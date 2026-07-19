#include <iostream>
#include <fstream>
using namespace std;
class Employee{
    int id;
    string name;
    string deptName;
    public:
        Employee(int i=0,string n="",string dN=""){
            id=i;
            name=n;
            deptName=dN;
        }
        void setId(int);
        void setName(string);
        void setDepName(string);
        int getId();
        string getName();
        string getDepName();
        void display();

        void storeInFile(ofstream&);
        void readFromFile(ifstream&);
};

void Employee::setId(int i)
{
    id=i;
}
void Employee::setName(string n)
{
    name=n;
}
void Employee:: setDepName(string dN){
    deptName=dN;
}

int Employee::getId(){
    return id;
}
string Employee::getName(){
    return name;
}
string Employee::getDepName(){
    return deptName;
}

void Employee::display(){
    cout << "ID              :" << getId() << "\n";
    cout << "Name            :" << getName() << "\n";
    cout << "Department Name :" << getDepName() << "\n";
}

void Employee::storeInFile(ofstream& out){
    out << "ID              :" << id << "\n";
    out << "Name            :" << name << "\n";
    out << "Department Name :" << deptName << "\n";
}

void Employee::readFromFile(ifstream& inp){
    inp >> id;
    inp.ignore();

    getline(inp, name);
    getline(inp, deptName);
}

int main()
{
    int size;
    int id;
    string name;
    string depName;
    cout << "Enter Number of Employees : ";
    cin >> size;
    cout << "\n";
    Employee* employees=new Employee[size];

    for(int i=0;i<size;i++){
        cout << "Enter All attributes for Employee " << i+1 <<"\n";
        cout << "Enter id :";
        cin >> id;
        cout << "Enter Name :";
        cin >> name;
        cout << "Enter Department Name :";
        cin >> depName;
        employees[i].setId(id);
        employees[i].setName(name);
        employees[i].setDepName(depName);
        cout << "\n";
    }

    ofstream fout("Emp.txt");
    if(!fout){
        cout << "Error in Opening File." << "\n";
        delete[] employees;
        return 1;
    }

    fout << "Number of Employees : " << size <<"\n";

    for(int i=0;i<size;i++){
        employees[i].storeInFile(fout);
        cout << "\n";
    }

    fout.close();

    ifstream fin("Emp.txt");
    if(!fin){
        cout << "Error In opening File .\n";
        return 1;
    }

    for(int i=0;i<size;i++){
        employees[i].readFromFile(fin);
        cout << "\n";
    }
    fin.close();


    for(int i=0;i<size;i++){
        cout << "Employee " << i+1 << " Information \n";
        employees[i].display();
        cout << "\n";
    }

    delete[] employees;
    employees=nullptr;
   return 0;
}