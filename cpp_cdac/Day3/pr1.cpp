#include<iostream>

using namespace std;


//witout using third variable
void swap1(int& a , int& b){
    a = a + b;
    b = a - b;
    a = a - b;
}

void swap2(int& a, int &b){
    int temp =  a;
    a = b;
    b = temp;
}

int main(){
    int a,b;

    cout<<"Please enter the 2 values: ";
    cin>>a>>b;
    cout<<"Given values are A = "<<a<<endl<< "B = "<<b<<endl;
    swap1(a,b);
    cout<<"After swapping without using third variable values are A = "<<a<<endl<< "B = "<<b<<endl;
    swap2(a,b);
    cout<<"After swapping using third variable values are A = "<<a<<endl<< "B = "<<b<<endl;
    return 0;
}