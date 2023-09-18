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


//Student class

class Student{
    int roll_no;
    Date d_birth, d_adm;
    cString name;

    public:

    Student();
    Student(int, Date , Date, cString);
    void Display();
};

Student::Student(){
    roll_no = 0;
}

Student::Student(int a, Date b, Date ad, cString na){
    roll_no = a;
    d_adm = ad;
    d_birth = b;
    name = na;
}

void Student::Display(){
    cout<<"Roll no: "<<roll_no<<endl;
    cout<<"Date of birth: "<<endl;
    d_birth.Display();
    cout<<"Date of admission: "<<endl;
    d_adm.Display();
    name.getStr();
}


int main(){
    // Date d1(12,7,2023);
    // Date b1(12,12,2002);

    // char abc[20];
    // cout<<"Please enter name: ";
    // cin>>abc;
    // cString str(abc);

    // Student st1;
    // Student st2(10,b1,d1,str);

    // st1 = st2;

    // st1.Display();


    Student arr[5];

    for(int i=0; i<5; i++){
        int a,b,c,n;
        char str[20];
        cout<<"Enter Data for "<<i+1<<" student"<<endl;
        cout<<"Enter your Roll No: ";
        cin>>n;
        cout<<"Enter your DOB: ";
        cin>>a>>b>>c;
        Date dob(a,b,c);
        cout<<"Enter your DOA: ";
        cin>>a>>b>>c;
        Date doa(a,b,c);
        cout<<"Enter your name: ";
        cin>>str;
        cString abc(str);
        Student st(n,dob,doa,abc);
        arr[i] = st;
    }

    cout<<"Given data of students= "<<endl;
    for(int i=0; i<5; i++){
        cout<<"--------------------------------------------------------------------------------------------------"<<endl;
        arr[i].Display();
        cout<<"--------------------------------------------------------------------------------------------------"<<endl;
    }

    return 0;
}
