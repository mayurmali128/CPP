#include<iostream>
#include<string.h>

using namespace std;


class cString{
    int len;
    char *str;

    public:
    
        cString();
        cString(const char*);
        cString(cString& );
        bool operator <(cString&);
        bool operator >(cString&);
        cString operator =(cString&);
        bool operator ==(cString&);
        char& operator [](int i);
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
//0 equal
//1 fist is greater
//-1 is greater
bool cString::operator <(cString& s2){

    if(strcmp(this->str,s2.str)==-1) return true;
    //else
    return false;
}

bool cString::operator >(cString& s2){
    if(strcmp(this->str,s2.str)==1) return true;
    //else
    return false;
}


cString cString::operator =(cString& s2){
    this->len = s2.len;
    this->str = new char[len+1];
    strcpy(this->str,s2.str);
    return *this;
}

bool cString::operator ==(cString& s2){
    if(strcmp(this->str,s2.str)==0) return true;
    //else
    return false;
}
char& cString::operator [](int i){
    return str[i];
}

void cString::getStr(){
    cout<<str<<endl;
}

cString:: ~cString(){
    delete []str;
}


class Adress{
    int pincode;
    cString area,city;

    public:

    Adress();
    Adress(const char *, const char *, int);
    void Display();
    Adress operator =(Adress&);
};

Adress :: Adress(){
    pincode = 0;
}

Adress :: Adress(const char* a, const char* c, int pincode):area(a),city(c){
    this->pincode = pincode;  
}

void Adress::Display(){
    cout<<"Area: ";
    area.getStr();
    cout<<"City: ";
    city.getStr();
    cout<<"Pincode: "<<pincode<<endl;
}

//overload = operator
Adress Adress::operator=(Adress& temp){
    this->pincode = temp.pincode;
    this->area = temp.area;
    this->city = temp.city;
}

class Employee{
    int emp_id;
    cString name;
    Adress perm_adr,curr_adr;
    
    public:
    Employee();
    Employee(int ,cString, Adress, Adress);
    void Display();
};

Employee::Employee(){
    emp_id = 0;
}

Employee::Employee(int id, cString s1, Adress pre, Adress tem){
    emp_id = id;
    name = s1;
    perm_adr = pre;     //need to overload = oprator for Adress class
    curr_adr = tem;
}

void Employee::Display(){
    cout<<"Employee id: "<<emp_id<<endl;
    cout<<"Employee name: ";
    name.getStr();
    cout<<"Permanat Adress: ";
    perm_adr.Display();
    cout<<"Current Adress: ";
    curr_adr.Display();
}


int main(){
    cString name("Mayur Mali");
    Adress ad1("Karve Nagar","Pune",50100); //area city pincode
    Adress ad2("Jamner", "Jalgaon", 42420);

    Employee emp(101,name,ad2,ad1);
    emp.Display();
    
    return 0;
}

