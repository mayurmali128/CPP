#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
    int a;
    char ch;
    float f;
    char str[10];

    cout<<"Type of a :"<<typeid(a).name()<<endl;
    cout<<"Type of ch : "<<typeid(ch).name()<<endl;
    cout<<"Type of f : "<<typeid(f).name()<<endl;
    cout<<"Type of str : "<<typeid(str).name()<<endl;
    
    return 0;
}