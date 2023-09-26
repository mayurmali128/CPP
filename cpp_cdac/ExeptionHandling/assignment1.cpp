// 1. Accept two  numbers from user and print addtion,subtraction,multiplication,division.
//    user exception handling for divid by zero.

#include<iostream>

using namespace std;


int main(){
    int a ,b;

    
        cout<<"Please enter two numbers: ";
        cin>>a>>b;
        cout<<"Addition: "<<a+b<<endl;
        cout<<"Substraction: "<<a-b<<endl;
        try{
            if(b==0) throw 100;

            cout<<"Divison : "<<a/b<<endl;
        }
        catch(int n){
            cout<<"b value cannot be zero."<<endl;
        }
        cout<<"Multiplication: "<<a*b<<endl;
    
    return 0;
}
