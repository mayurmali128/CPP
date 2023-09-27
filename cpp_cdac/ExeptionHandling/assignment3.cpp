#include<iostream>
#include<string.h>
using namespace std;

class AmountExceed:public exception{
    public:
    
    const char* what(){
        return "Deposite amoount exceed limit. Pan card details required.";
    }
};

class MinimumBal:public exception{
    public:
    const char* what(){
        return "Minimum balanced reached. You cannot withdraw.";
    }
};


class Account{
    int acno;
    double amount;
    char name[20];

    public:
        Account();
        void Accept();
        void Display();
        void Deposite(double);
        void Withdraw(double);
};

Account::Account(){
    acno = 0;
    amount = 0;
    strcpy(name,"NA");
}

void Account::Accept(){
    cout<<"Please enter followin information."<<endl;
    cout<<"Name: ";
    cin>>name;
    cout<<"Account no : ";
    cin>>acno;
    cout<<"Balace: ";
    cin>>amount;
}



void Account::Display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Account no : "<<acno<<endl;
    cout<<"Balace: "<<amount<<endl;
}

void Account::Deposite(double am){
    if(am>=50000 ) throw AmountExceed();
    amount += am;
}

void Account::Withdraw(double w){
    if(amount-w<10000) throw MinimumBal();
    amount -= w;
}


int main(){
    Account a1;
    a1.Accept();
    cout<<"Your info: "<<endl;
    a1.Display();

    try{
        cout<<"Enter amount to deposite:";
        double d;
        cin>>d;
        a1.Deposite(d);
    }
    catch(AmountExceed e){
        cout<<e.what();
    }

    try{
        cout<<"Enter amount to Withdraw:";
        double d;
        cin>>d;
        a1.Withdraw(d);
    }
    catch(MinimumBal e){
        cout<<e.what();
    }



    return 0;
}