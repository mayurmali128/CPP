#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Record{
    int no;
    string name;
    string info;

    public:
        Record();
        void Display();
        void accept();
        int getId(){
            return no;
        }
};

Record::Record(){
    no = 0;
    name = string("Default");
    info = string("Default");
}

void Record::Display(){
    cout<<"Record id: "<<no<<endl;
    cout<<"Record name: "<<name<<endl;
    cout<<"Record info: "<<info<<endl;
}

void Record::accept(){
    cout<<"Record id: ";
    cin>>no;
    cout<<"Record name: ";
    getline(cin>>ws,name);
    cout<<"Record info: ";
    getline(cin>>ws,info);
}

void insert(){
    Record r;
    r.accept();

    ofstream out;
    out.open("record.dat",ios::app|ios::binary);
    out.write((char*)&r,sizeof(r));
    out.close();
}

Record find_record(int id){
    Record r;

    ifstream in;
    in.open("record.dat",ios::binary);

    while(in.read((char*)&r,sizeof(r))){
        if(r.getId()==id){
            cout<<"Record found!"<<endl;
            r.Display();
            break;
        }
    }
}

int main(){

    int ch;
    while(1){
        cout<<"\n \t\t enter your choise: \
                \n \t\t 1. Insert  Data \
                \n \t\t 2. Find data by id \
                \n \t\t 0. Exit"<<endl;
        
        cin>>ch;

        if(ch==1){
            insert();
        }
        else if(ch==2){
            int id;

            cout<<"Enter record id: ";
            cin>>id;
            find_record(id);
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