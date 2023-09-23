#include<iostream>

using namespace std;

template <class T>
void Swap1(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){

    int a, b;
    cout<<"Enter value of a and b: ";
    cin>>a>>b;
    cout<<"Before swapping: "<<endl<<"a ="<<a<<endl<<"b ="<<b<<endl;
    Swap1(a,b);
    cout<<"After swapping: "<<endl<<"a ="<<a<<endl<<"b ="<<b<<endl;
    
    cout<<"----------------------------------------------------------------------------------"<<endl;
    double c,d;
    cout<<"Enter value of a and b(double): ";
    cin>>c>>d;
    cout<<"Before swapping: "<<endl<<"c ="<<c<<endl<<"d ="<<d<<endl;
    Swap1(a,b);
    cout<<"After swapping: "<<endl<<"c ="<<c<<endl<<"d ="<<d<<endl;

    return 0;
}
