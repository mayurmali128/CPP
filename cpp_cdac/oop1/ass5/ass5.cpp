#include<iostream>

using namespace std;

class Point{
    private:
        int n1,n2;
    public:
        void setData(int,int);
        void getData();

};

void Point::setData(int a, int b){
    n1 = a;
    n2 = b;
}

void Point::getData(){
    cout<<"Number co-ordinate: ["<<n1<<" , "<<n2<<"]"<<endl;
}

int main(){
    Point p1;
    int a,b;
    cout<<"Enter point co-ordinate: ";
    cin>>a>>b;
    p1.setData(a,b);
    p1.getData();
    return 0;
}