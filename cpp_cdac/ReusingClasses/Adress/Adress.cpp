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

int main(){
    Adress ad1;
    ad1.Display();
    cout<<"----------------------------------------------------------------------------------"<<endl;
    Adress ad2("Karve nagar","Pune",50100);
    ad2.Display();
}

