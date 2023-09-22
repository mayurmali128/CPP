#include<iostream>
#include<string.h>

using namespace std;

class Person{
    char name[20];
    int age;

    public:
        Person();
        Person(const char *, int);
        void Display()const;
};

Person::Person(){
    strcpy(name,"NA");
}

Person::Person(const char* name, int age){
    strcpy(this->name,name);
    this->age = age;
}

void Person::Display()const{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}

class Emp:public Person{
    private:
        int empid;
    protected:
        double salary;
    public:
        Emp();
        Emp(const char*, int, int, double);
        void Display()const;
};

Emp::Emp(){
    empid = salary = 0;
}

Emp::Emp(const char* nm, int ag, int id, double sal): Person(nm,ag){
    empid = id;
    salary = sal;
}

void Emp::Display() const{
    cout<<"Emp id: "<<empid<<endl;
    Person::Display();
    cout<<"Salary: "<<salary<<endl;
}

class SalePerson:public Emp{
    double sales,comm;

    public:
        SalePerson();
        SalePerson(const char*, int , int, double, double, double);
        void Display()const;
        void calSal();
};

SalePerson::SalePerson(){
    sales = comm = 0;
}

SalePerson::SalePerson(const char* nm, int ag, int id, double sl, double sales, double comm):Emp(nm,ag,id,sl){
    this->sales = sales;
    this->comm = comm;
}

void SalePerson::Display()const{
    Emp::Display();
    cout<<"Sales: "<<sales<<endl;
    cout<<"Commission: "<<comm<<endl;
}

void SalePerson::calSal(){
    salary += sales*comm;
    cout<<"Salary of sales person: "<<salary<<endl;
}

class WageEmp:public Emp{
    double hr,rate;

    public:
        WageEmp();
        WageEmp(const char*, int , int, double, double, double);
        void Display()const;
        void calSal();
};

WageEmp::WageEmp(){
    hr = rate = 0;
}

WageEmp::WageEmp(const char* nm, int ag, int id, double sl, double hr, double rt):Emp(nm,ag,id,sl){
    this->hr = hr;
    rate = rt;
}

void WageEmp::Display()const{
    Emp::Display();
    cout<<"Hours: "<<hr<<endl;
    cout<<"Rate: "<<rate<<endl;
}

void WageEmp::calSal(){
    salary +=  hr*rate;
    cout<<"Salary of Wage employee: "<<salary<<endl;
}

class Manager:public Emp{
    double ta,hra;

    public:
        Manager();
        Manager(const char*, int , int, double, double, double);
        void Display()const;
        void calSal();
};

Manager::Manager(){
}

Manager::Manager(const char* nm, int ag, int id, double sl, double ta, double hra):Emp(nm,ag,id,sl){
   this->ta = ta;
   this->hra = hra;
}

void Manager::Display()const{
    Emp::Display();
    cout<<"HRA: "<<hra<<endl;
    cout<<"TA: "<<ta<<endl;
}

void Manager::calSal(){
    salary += ta + hra;
    cout<<"Salary of manager: "<<salary<<endl;
}



int main(){

    cout<<"-----------------------------------------------------------------------------------"<<endl;
    SalePerson s1("ABC",21,101,10000,50,20);
    s1.calSal();
    s1.Display();
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    Manager m1("Manager",30,10,100000,1000,20000);
    m1.calSal();
    m1.Display();
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    WageEmp w1("WageEmployee",25,102,10000,12,50);
    w1.calSal();
    w1.Display();
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    return 0;
}
