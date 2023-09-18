#include<iostream>
#include<string.h>

using namespace std;
//Constructor practice

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
    cout<<"String: "<<str<<endl;
}

cString:: ~cString(){
    delete []str;
}



class Person{
    cString name;
    Date b_day;

    public:
        Person();
        Person(const char *, int, int, int);
        void getData();
        ~Person();
};


Person::Person(){
    //do nothing 
}

Person::Person(const char * str, int a, int b, int c): name(str),b_day(a,b,c){}

void Person::getData(){
    cout<<"Name: ";
    name.getStr();
    cout<<endl;
    b_day.Display();
}

Person::~Person(){
}

int main(){
    Person p1;
    p1.getData();
    cout<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    Person p2("Mayur",29,6,2023);
    p2.getData();
}


