#include "Bank.h"
#include<string.h>

Bank :: Bank(){
    cnt++;
    acNo = cnt;
    bal = 0;
    strcpy(name,"default");
}

Bank :: Bank(const char* name, int bal){
    cnt++;
    acNo = cnt;
    this->bal = bal;
    strcpy(this->name,name);
}
void Bank::gatData(){
    cout<<"Bank AC no: "<<acNo<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Bank Balance: "<<bal<<endl;
    cout<<"Rate of interest: "<<rate<<endl;
}
void Bank::setInterest(int r){
    rate = r;
}

int Bank::getInterest(){
    return rate;
}