//create a emp structure and add 5 emp data to it 
#include<iostream>
#include<string>

using namespace std;

typedef struct Employee{
    int id;
    string name;
    int salary;

    void setData(){
        cout<<"Enter id: ";
        cin>>id;
        cout<<"Enter Name: ";
        getline(cin>>ws,name);
        cout<<"Enter Salary: ";
        cin>>salary;
    }

    void getData(){
        cout<<"Name: "<<name<<endl;
        cout<<"Id: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
}emp;

int main(){
    int n;
    cout<<"Please enter no of employees: ";
    cin>>n;

    //dyanamic memory allcation
    
    emp* employees = new emp[n];

    for(int i=0; i<n; i++){
        cout<<"Please enter employee "<<i+1<<" data"<<endl;
        employees[i].setData();
    }

    cout<<"Given data of employees are: "<<endl;

    for(int i=0; i<n; i++){
        cout<<"----------------------------------------------------------------"<<endl;
        employees[i].getData();
        cout<<"----------------------------------------------------------------"<<endl;
    }

    delete []employees;

    return 0;
}