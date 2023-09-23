#include<iostream>
#include<string.h>
using namespace std;

class Person{
    char name[20];
    int age;

    public:
        Person();
        Person(const char*, int);
        virtual void  Display() const;
        // virtual void calSal() = 0;
};

Person::Person(){
    strcpy(this->name,"NA");
    age = 0;
}

Person::Person(const char* name, int age){
    strcpy(this->name,name);
    this->age = age;
}

void Person::Display() const{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}

class Employee:public Person{
    int empid;

    protected:
        double sal;

    public:
        Employee();
        Employee(const char*, int, int, double);
        void Display()const;
        virtual void calSal() =0;
};

Employee::Employee(){
    empid = sal = 0;
}

Employee::Employee(const char* name, int age , int empid, double sal) :Person(name,age){
    this->empid = empid;
    this->sal = sal;
}

void Employee::Display()const{
    Person::Display();
    cout<<"Emp id: "<<empid<<endl;
    cout<<"Salary: "<<sal<<endl;
}

class Manager:public Employee{

    double hra,ta;

    public:
        Manager();
        Manager(const char* , int , int , double , double, double);
        void Display()const;
        void calSal();
};

Manager::Manager(){
    hra = ta = 0;
}

Manager::Manager(const char* name , int age , int id, double sal, double hra, double ta):Employee(name,age,id,sal){
    this->hra = hra;
    this->ta = ta;
}

void Manager::Display()const{

    Employee::Display();
    cout<<"HRA: "<<hra<<endl;
    cout<<"TA: "<<ta<<endl;
}

void Manager::calSal(){
    sal += hra + ta;

    cout<<"Calaculated Salary: "<<sal<<endl;
}


class WageEmp:public Employee{

    double hr,rate;

    public:
        WageEmp();
        WageEmp(const char* , int , int , double , double, double);
        void Display()const;
        void calSal();
};

WageEmp::WageEmp(){
    hr = rate = 0;
}

WageEmp::WageEmp(const char* name , int age , int id, double sal, double hr, double rate):Employee(name,age,id,sal){
    this->hr = hr;
    this->rate = rate;
}

void WageEmp::Display()const{

    Employee::Display();
    cout<<"Hours: "<<hr<<endl;
    cout<<"Rate: "<<rate<<endl;
}

void WageEmp::calSal(){
    sal += (hr*rate);
    cout<<"Calaculated Salary: "<<sal<<endl;
}

class Sales:public Employee{

    double sales,comm;

    public:
        Sales();
        Sales(const char* , int , int , double , double, double);
        void Display()const;
        void calSal();
};

Sales::Sales(){
    sales = comm = 0;
}

Sales::Sales(const char* name , int age , int id, double sal, double sales, double comm):Employee(name,age,id,sal){
    this->sales = sales;
    this->comm = comm;
}

void Sales::Display()const{

    Employee::Display();
    cout<<"Sales: "<<sales<<endl;
    cout<<"Commission: "<<comm<<endl;
}

void Sales::calSal(){
    sal += (sales*comm);
    cout<<"Calaculated Salary: "<<sal<<endl;
}


int main(){

    Employee *p[3];

    //object of emp will not created beacuse it is abstract

    // p[0] = new Person("Mayur",20);
    p[0] = new Manager("Manager",30,101,10000,100,100);
    p[1] = new WageEmp("Wage employee",25,102,100,10,10);
    p[2] = new Sales("Sales",24,103,1000,15,70);

    cout<<"Displaying all objects data:"<<endl;
    
    for(int i=0; i<4; i++){
        cout<<"------------------------------------------------------------------------------------"<<endl;
        p[i]->calSal();
        p[i]->Display();
    }

    return 0;
}