#include<iostream>

using namespace std;

void add(int,int);
void add(int,int,int);
void add(float,float);
void add(int,float);
void add(float,int);

int main(){
    add(3,4);
    add(3,4,5);
    add(3.45f,4.95f);
    add(3,4.55f);
    add(3.45f,4);
    return 0;
}

void add(int a, int b){
    cout<<"\n\n\n \t\t Calling void add(int,int) "<<endl;
    cout<<"\n\n\n \t\t Addition is :"<<a+b<<endl;
}

void add(int a, int b, int c){
    cout<<"\n\n\n \t\t Calling void add(int,int,int) "<<endl;
    cout<<"\n\n\n \t\t Addition is :"<<a+b+c<<endl;
}

void add(float a, float b){
    cout<<"\n\n\n \t\t Calling void add(float,float) "<<endl;
    cout<<"\n\n\n \t\t Addition is :"<<a+b<<endl;
}

void add(int a, float b){
    cout<<"\n\n\n \t\t Calling void add(int,float) "<<endl;
    cout<<"\n\n\n \t\t Addition is :"<<a+b<<endl;
}

void add(float a, int b){
    cout<<"\n\n\n \t\t Calling void add(float, float) "<<endl;
    cout<<"\n\n\n \t\t Addition is :"<<a+b<<endl;
}

