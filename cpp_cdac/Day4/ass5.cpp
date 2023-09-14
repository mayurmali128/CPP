#include<iostream>
#include<string>

using namespace std;

typedef struct  Student
{
    int rollno;
    string name;
    int no_of_subject;
    int *marks;
    int totalmark = 0;

    void getData(){
        cout<<"Enter Name:";
        getline(cin>>ws,name);
        cout<<"Enter roll no:";
        cin>>rollno;
        cout<<"Enter no of subjects";
        cin>>no_of_subject;
        marks = new int[no_of_subject];

        cout<<"Please enter each subjects marks: "<<endl;

        for(int i=0; i<no_of_subject; i++){
            cin>>marks[i];
            totalmark += marks[i];
        }
    }

    void putData(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll Number:"<<rollno<<endl;
        cout<<"Total marks:"<<totalmark<<endl;
    }
    
}stud;

stud getMaxMarks(stud students[], int n){
    int maxi = students[0].totalmark;
    stud temp = students[0];

    for(int i=1; i<n; i++){
        if(maxi<students[i].totalmark){
            maxi = students[i].totalmark;
            temp = students[i];
        }
    }
    return temp;
}

int main(){
    int n;
    cout<<"Please enter number of student: ";
    cin>>n;
    stud* students = new stud[n];

    for(int i=0; i<n; i++){
        cout<<"Please enter student"<<i+1<<" data"<<endl;
        students[i].getData();
    }

    for(int i = 0; i<n; i++){
        cout<<"-----------------------------------------------------------------------------"<<endl;
        cout<<"Given data of student"<<i+1<<endl;
        cout<<"-----------------------------------------------------------------------------"<<endl;
        students[i].putData();
        cout<<"-----------------------------------------------------------------------------"<<endl;
    }

    stud res = getMaxMarks(students,n);
    cout<<"Student having maximum total marks is: "<<endl;

    res.putData();

    delete []students;

    return 0;
}
