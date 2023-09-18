#include "string.cpp"

int main(){
    cString s1("Mayur");
    cString s2("Shubham");

    if(s1==s2){
        cout<<"== overloading works and both strings are equal."<<endl;
    }
    else{
        cout<<"== overloading works and both strings are not-equal."<<endl;
    }

    if(s1>s2){
        cout<<" > overloading works s1 is greater than s2"<<endl;
    }
    else{
        cout<<" > overloading works s2 is greater than s1"<<endl;
    }

     if(s1<s2){
        cout<<" < overloading works s1 is smaller than s2"<<endl;
    }
    else{
        cout<<" < overloading works s2 is smaller than than s1"<<endl;
    }


    cString s3;
    s3 = s1;
    cout<<"= operator overloading works "<<endl;
    s3.getStr();

    s1[2] = 'a';
    s2[1] = 'm';

    cout<<"Successfully overload [] operator and change value."<<endl;
    s1.getStr();
    s2.getStr();

    return 0;
}