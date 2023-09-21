#include<iostream>
#include<string.h>

using namespace std;

class Employee{
    int id;
    char name[20];

    public:
    Employee();
    Employee(int, const char *);
    void Display();
};

Employee::Employee(){
    id = 0;
    strcpy(name,"NA");
}

Employee::Employee(int i, const char * nm){
    id = i;
    strcpy(name,nm);
}

void Employee::Display(){
    cout<<"Name: "<<name<<endl;
    cout<<"ID: "<<id<<endl;
}




class WageEmployee:public Employee{
    double hr,rate;
    public:
    WageEmployee();
    WageEmployee(int, const char*, double ,double);
    double calSal();
    void Display(){
        Employee::Display();
        cout<<"Hours: "<<hr<<endl;
        cout<<"Rate : "<<rate<<endl;
    }
};

WageEmployee::WageEmployee(){
    hr=rate = 0;
}

WageEmployee::WageEmployee(int i, const char* name, double h ,double r):Employee(i,name){
    hr = h;
    rate = r;
}


double WageEmployee::calSal(){
    return hr*rate;
}


int main(){
    WageEmployee w(101,"Mayur",10,150.50);
    w.Display();
    cout<<"Salary: "<<w.calSal()<<endl;
    return 0;
}