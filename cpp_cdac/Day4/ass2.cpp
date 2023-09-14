#include<iostream>
#include<string>

using namespace std;


typedef struct Employee{
    int empid;
    string name;

    void getdata(){
        cout<<"Enter emp - id:";
        cin>>empid;
        cout<<"Name:";
        getline(cin>>ws,name); //ws is used to ignore whitespaces because getline uses 

    }

    void putdata(){
        cout<<"Name:"<<name<<endl;
        cout<<"Emp id :"<<empid<<endl;
    }
}emp;

int main(){
    int size;
    cout<<"How many employees you want to insert:";

    cin>>size;
    emp* employes = new emp[size];

    for(int i=0; i<size; i++){
        cout<<"Please enter emplyee"<<i+1<<" data"<<endl;
        employes[i].getdata();
    }
    cout<<"Given data of emplyess:"<<endl;
    for(int i=0; i<size; i++){
        employes[i].putdata();
    }

    delete [] employes;

    return 0;
}