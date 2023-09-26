/*
2. Create class Employee with data type name.
   Derive classes Programmer,DataBaseAdministrator,SystemAdministrator.
   a. all classes has display and test functions.
   a. programmer class has function Codding();
   b. DataBaseAdministrator class has function CreateDataBase();
   c. SystemAdministrator class has function SystemUpdate();
   d. Create Array of Employee Pointer with size 5.
   e. Check name of all classes  at runtime.
   g. Excute class specific function from respective classes.
*/
#include<string>
#include<iostream>
using namespace std;

class Employee{
    
    public:
        virtual void  Display(){
            cout<<"Display in employee class."<<endl;
        }
        virtual void Test(){
            cout<<"Test in employee class."<<endl;
        }
};

class Programmer: public Employee{
    
    public:
        void  Display(){
            cout<<"Display in Programmer class."<<endl;
        }

        void Test(){
            cout<<"Test in Programmer class."<<endl;
        }

        void Coding(){
            cout<<"Coding in Programmer class."<<endl;
        }
};

class DataBaseAdministrator: public Employee{
    
    public:
        void  Display(){
            cout<<"Display in DataBaseAdministrator class."<<endl;
        }

        void Test(){
            cout<<"Test in DataBaseAdministrator class."<<endl;
        }

        void CreateDataBase(){
            cout<<"CreateDataBase in DataBaseAdministrator class."<<endl;
        }
};


class SystemAdministrator: public Employee{
    
    public:
        void  Display(){
            cout<<"Display in SystemAdministrator class."<<endl;
        }

        void Test(){
            cout<<"Test in SystemAdministrator class."<<endl;
        }

        void SystemUpdate(){
            cout<<"SystemUpdate in SystemAdministrator class."<<endl;
        }
};

int main(){
    Employee *arr[5];
    arr[0] = new Programmer();
    arr[1] = new DataBaseAdministrator();
    arr[2] = new SystemAdministrator();
    arr[3] = new Employee();
    arr[4] = new DataBaseAdministrator();

    DataBaseAdministrator *d = dynamic_cast<DataBaseAdministrator*> (arr[1]);
    d->CreateDataBase();

    SystemAdministrator *s = dynamic_cast<SystemAdministrator*> (arr[2]);
    s->SystemUpdate();

    Programmer *p = dynamic_cast<Programmer*> (arr[0]);
    p->Coding();
    


    // for(int i=0; i<5; i++){
    //     arr[i]->Display();
    //     arr[i]->Test();

    //     DataBaseAdministrator *d = dynamic_cast<DataBaseAdministrator*>(arr[i]);
    //     d ->CreateDataBase();
    // }
    return 0;
}


