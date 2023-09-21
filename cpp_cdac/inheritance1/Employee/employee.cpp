#include<iostream>
#include<string.h>

using namespace std;

class Date{
    int day,mn,year;

    public:

        Date();              //default constructor
        Date(int ,int ,int ); //parameterised constructor

        void Display(){
            cout<<"Date: "<<day<<"/"<<mn<<"/"<<year<<endl;
        }
};

Date::Date(){
    day = mn=1;
    year = 2023;
}

Date::Date(int a, int b, int c){
    day =a;
    mn = b;
    year = c;
}


class cString{
    int len;
    char *str;

    public:
    
        cString();
        cString(const char*);
        cString(cString& );
        cString operator =(cString&);
        void getStr();
        ~cString();
};

//default constructer
cString::cString(){
    len = 0;
    str = new char[1];
    str[0] = '\0';
}

//para constructer
cString::cString(const char* str){
    this->len = strlen(str);
    this->str = new char[len+1];
    strcpy(this->str,str);
}

//copy constructer
cString::cString(cString& s2){
    this->len = s2.len;
    this->str = new char[len+1];
    strcpy(this->str,s2.str);
}

//= operator overload
cString cString::operator =(cString& s2){
    this->len = s2.len;
    this->str = new char[len+1];
    strcpy(this->str,s2.str);
    return *this;
}

void cString::getStr(){
    cout<<"String: "<<str<<endl;
}

cString:: ~cString(){
    delete []str;
}

class Person{
    cString name;
    Date dob;

    public:
        Person();
        Person(const char*, int, int, int);
        void Display();
};

Person::Person(){
    //do nothing
}

Person::Person(const char* s1, int d, int m, int y):name(s1),dob(d,m,y){

}

void Person::Display(){
    cout<<"Name: ";
    name.getStr();
    cout<<"Date of Birth: ";
    dob.Display();
}


class Employee : public Person{
    int emp_id;
    float salary;

    public:
        Employee();
        Employee(int , float, const char* , int, int,int);
        void Display();
};

Employee::Employee(){
    emp_id = 0;
    salary = 0;
}

Employee::Employee(int id, float sal, const char* str, int d, int m,int y):Person(str,d,m,y){
    emp_id = id;
    salary = sal;
}

void Employee::Display(){
    cout<<"Employee id: "<<emp_id<<endl;
    Person::Display();
    cout<<"Employee Salary: "<<salary<<endl;
}

int main(){
    cout<<"Calling Person using person object: "<<endl;
    Person p1("Mayur", 12, 12, 2001);
    p1.Display();

    cout<<"Calling Employee using  employee object: "<<endl;
    Employee e(101,10000,"Mayur",12,12,2001);
    e.Display();

    return 0;
}