#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Employee{
    string name;
    int eid;
    double salary;

    public:
        Employee();
        void setData();
        void Display();
        // void insert();
        // void extract();
};
Employee::Employee(){
    name = string("NA");
    eid = 0;
    salary = 0;
}
void Employee::setData(){
    cout<<"Enter name: ";
    getline(cin>>ws,name);
    cout<<"Employee id: ";
    cin>>eid;
    cout<<"Salary: ";
    cin>>salary;
}

void Employee::Display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Employee id: "<<eid<<endl;
    cout<<"Salary: "<<salary<<endl;
}

void insert(){
    Employee emp;
    ofstream wr;
    emp.setData();
    wr.open("Data.dat",ios::app | ios::binary);
    wr.write((char*) &emp,sizeof(emp));
    wr.close();
}

void extract(){
    Employee emp;
    ifstream in;
    in.open("data.dat",ios::binary);

    while(in.read((char*)&emp,sizeof(emp))){
        cout<<"--------------------------------------------------------------------------"<<endl;
        emp.Display();
        cout<<"--------------------------------------------------------------------------"<<endl;
    }
        // emp.Display();
        // emp.Display();
    in.close();
}

int main(){
    int ch;
    while(1){
        cout<<"\n \t\t enter your choise: \
                \n \t\t 1. Insert Employee Data \
                \n \t\t 2. Display alll employee data : \
                \n \t\t 0. Exit"<<endl;
        
        cin>>ch;

        if(ch==1){
            insert();
        }
        else if(ch==2){
            extract();
        }
        else if(ch==0){
            break;
        }
        else{
            cout<<"Please enter valid key."<<endl;
        }
        
    }
    return 0;
}