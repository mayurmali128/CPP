#include<iostream>
#include<string>

using namespace std;

class Customer{
    string name,email,adress;
    public:
        Customer();
        Customer(string, string,string);
        void Display();
};

Customer::Customer(){
    name = "Default";
    email = "Default";
    adress = "Default";
}

Customer::Customer(string name, string email,string adress){
    this->name = name;
    this->email = email;
    this->adress = adress;
}

void Customer::Display(){
    cout<<"\n\n \t\t\t Name: "<<name<<endl;
    cout<<"\n\n \t\t\t Email: "<<email<<endl;
    cout<<"\n\n \t\t\t Adress: "<<adress<<endl;
}

class RegCusto:public Customer{
    int cid;

    public:
        RegCusto();
        RegCusto(int,string,string,string);
        double calDiscount(double);
        void Display();
};

RegCusto::RegCusto():Customer(){
    cid = 0;
}

RegCusto::RegCusto(int id,string s1,string s2,string s3):Customer(s1,s2,s3){
    cid = id;
}

double RegCusto::calDiscount(double amount){
    return (amount*5/100);
}

void RegCusto::Display(){
    cout<<"\n\n \t\t\t Regular customer."<<endl;
    cout<<"\n\n \t\t\t Customer id: "<<cid<<endl;
    Customer::Display();
}


int main(){

    string email,name,adress;
    int ch,id,amount;

    while(1){
        cout<<"\n\n \t\t\t Please enter your choise:"
        <<"\n\n \t\t\t 1.New Customer"
        <<"\n\n \t\t\t 2.Returnung customer(Regular customer)"
        <<"\n\n \t\t\t 0. Press zero for exit...";

        cin>>ch;
        if(ch==1){
            cout<<"\n\n \t\t\t Please enter your name: ";
            getline(cin>>ws,name);
            cout<<"\n\n \t\t\t Please enter your email: ";
            getline(cin>>ws,email);
            cout<<"\n\n \t\t\t Please enter your Adress: ";
            getline(cin>>ws,adress);
            cout<<"\n\n \t\t\t Enter your total amount:";
            cin>>amount;
            Customer c1(name,email,adress);
            cout<<"----------------------------------------------------------------------------------------------"<<endl;
            c1.Display();
            cout<<"----------------------------------------------------------------------------------------------"<<endl;
            cout<<"\n\n \t\t\t Sorry No offer for you.";
            cout<<"\n\n \t\t\t Your total amount is "<<amount<<endl;
            cout<<"----------------------------------------------------------------------------------------------"<<endl;
        }
        else if(ch==2){
            cout<<"\n\n \t\t\t Please enter your name: ";
            getline(cin>>ws,name);
            cout<<"\n\n \t\t\t Please enter your email: ";
            getline(cin>>ws,email);
            cout<<"\n\n \t\t\t Please enter your Adress: ";
            getline(cin>>ws,adress);
            cout<<"\n\n \t\t\t Please enter your id: ";
            cin>>id;
            cout<<"\n\n \t\t\t Enter your total amount:";
            cin>>amount;
            RegCusto c2(id,name,email,adress);
            cout<<"----------------------------------------------------------------------------------------------"<<endl;
            c2.Display();
            cout<<"----------------------------------------------------------------------------------------------"<<endl;
            cout<<"\n\n \t\t\t Cograts ! You got 5% off ";
            double save = c2.calDiscount(amount);
            cout<<"\n\n \t\t\t Your total Saving is "<<save<<"!"<<endl;
            cout<<"\n\n \t\t\t Your total amount is "<<(amount-save)<<endl;
            cout<<"----------------------------------------------------------------------------------------------"<<endl;
        }
        else if(ch==0){
            break;
        }
        else{
            cout<<"\n\n \t\t\t Please enter vaid key!!!"<<endl;
        }
    }

    return 0;
}