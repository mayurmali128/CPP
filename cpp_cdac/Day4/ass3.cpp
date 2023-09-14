
#include<iostream>

using namespace std;

int multiply(int=1,int=1,int=1);

int main(){
    cout<<"\n\n\t Calling function using 3 arguments: "<<multiply(3,4,5)<<endl;
    cout<<"\n\n\t Calling function using 2 arguments: "<<multiply(3,4)<<endl;
    cout<<"\n\n\t Calling function using 1 arguments: "<<multiply(3)<<endl;
    cout<<"\n\n\t Calling function using No arguments: "<<multiply()<<endl;
    return 0;
}

int multiply(int a, int b, int c){
    return a*b*c;
}