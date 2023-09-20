#include<iostream>
#include<string.h>
using namespace std;

//student class using dynamic allocation

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

class Student{
    int roll_no;
    char name[20];
    Date dob,doa;

    public:
    Student();
    Student(int, char[], int , int , int , int , int , int );
    void Display();
    void setName(char[]);
    void setRollno(int);
    void setDOB(int, int, int);
    void setDOA(int, int, int);
};

Student ::Student(){
    roll_no = 0;
    strcpy(name,"NA");
}


Student :: Student(int roll_no, char name[], int d1, int m1, int y1, int d2, 
int m2, int y2):dob(d1,m1,y1),doa(d2,m2,y2){
    this->roll_no = roll_no;
    strcpy(this->name, name);
}

void Student::Display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Roll no: "<<roll_no<<endl;
    cout<<"Date of Birth: ";
    dob.Display();
    cout<<"Date of admission: ";
    doa.Display();
}

void Student::setName(char name[]){
    strcpy(this->name , name);
}

void Student::setRollno(int n){
    roll_no = n;
}

void Student::setDOB(int d, int m, int y){
    this->dob = Date(d,m,y);
}

void Student::setDOA(int d, int m, int y){
    this->doa = Date(d,m,y);
}


int main(){

    //creating objects dynamically for five students

    Student *arr = new Student[5];

    //getting input of 5 students
    int rn,d1,m1,y1,d2,m2,y2;
    char nm[20];
    for(int i= 0; i<5; i++){
        cout<<"---------------------------------------------------------------------------------"<<endl;
        cout<<"Enter Data for "<<i+1<<"student."<<endl;
        cout<<"Enter name: ";
        cin>>nm;
        arr[i].setName(nm);
        cout<<"Enter roll no: ";
        cin>>rn;
        arr[i].setRollno(rn);
        cout<<"Enter date of Birth: ";
        cin>>d1>>m1>>y1;
        arr[i].setDOB(d1,m1,y1);

        cout<<"Enter date of Admission: ";
        cin>>d2>>m2>>y2;
        arr[i].setDOA(d2,m2,y2);
    }

    cout<<"\n\n\n Printing data of 5 students:"<<endl;

    for(int i=0; i<5; i++){
        cout<<"---------------------------------------------------------------------------------"<<endl;
        cout<<"Data for "<<i+1<<"student: "<<endl;
        cout<<"---------------------------------------------------------------------------------"<<endl;
        arr[i].Display();
    }

    delete [] arr;
    
    return 0;
}