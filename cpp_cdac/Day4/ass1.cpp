#include<iostream>
#include<string>

using namespace std;



typedef struct Student{
    int rollno;
    string name;
    int total;

    void getdata(){
        cout<<"Roll number:";
        cin>>rollno;
        cout<<"Total marks:";
        cin>>total;
        cout<<"Name:";
        cin>>name;

    }

    void putdata(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll Number:"<<rollno<<endl;
        cout<<"Total marks:"<<total<<endl;
    }
}st;

st FindMaxTotal(st students[],int n){
    st res = students[0];
    int maxi = students[0].total;

    for(int i= 1; i<n; i++){
        if(maxi<students[i].total){
            maxi = students[i].total;
            res = students[1];
        }
    }
    return res;
}

int main(){

    st students[3];

    for(int i=0; i<3; i++){
        cout<<"Please enter the roll no, name and total marks of student"<<i+1<<endl;
        students[i].getdata();
    }

    for(int i = 0; i<3; i++){
        cout<<"-----------------------------------------------------------------------------"<<endl;
        cout<<"Given data of student"<<i+1<<endl;
        cout<<"-----------------------------------------------------------------------------"<<endl;
        students[i].putdata();
        cout<<"-----------------------------------------------------------------------------"<<endl;
    }

    st temp = FindMaxTotal(students,3);

    cout<<"\n\n\n \t\t Student data having maximum marks is: "<<endl;
    cout<<"\n\n\n \t\t Name: "<<temp.name<<endl<<"\n\n\n \t\t Roll no: "<<temp.rollno<<endl<<"\n\n\n \t\t Total marks: "<<temp.total<<endl;
    
    return 0;
}