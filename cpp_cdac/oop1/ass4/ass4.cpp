#include<iostream>

using namespace std;

class Box{
    private:
        int len,br,hi;
    public:
        void setData(int, int,int);
        void getData();
        int calculateVolume();
};

void Box::setData(int a, int b, int c){
    len = a;
    br = b;
    hi = c;
}

void Box::getData(){
    cout<<"Lenght:"<<len<<endl;
    cout<<"Breadth:"<<br<<endl;
    cout<<"Height:"<<hi<<endl;
}

int Box::calculateVolume(){
    return len*br*hi;
}

int main(){
    Box b;
    int x,y,z;
    cout<<"Please enter lenght, breadth and height of the Box: ";
    cin>>x>>y>>z;
    b.setData(x,y,z);
    cout<<"Given Data:"<<endl;
    b.getData();
    cout<<"Volume of the Box is: "<<b.calculateVolume()<<endl;
    return 0;
}