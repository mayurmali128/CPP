#include<iostream>

using namespace std;

class Shape{

    public:
        virtual void calArea() = 0;
        virtual void calPerimeter() = 0;
};

class Square:public Shape{
    double side;

    public:
        Square(){}
        Square(double);
        void calArea();
        void calPerimeter();
};


Square ::Square(double side){
    this->side= side;
}

void Square::calArea(){
    cout<<"Area of Square: "<<side*side<<endl;
}

void Square::calPerimeter(){
    cout<<"Perimeter of Square: "<<4*side<<endl;
}


class Triangle:public Shape{
    double b, h, s1, s2;

    public:
        Triangle();
        Triangle(double,double,double,double);
        void calArea();
        void calPerimeter();
};

Triangle::Triangle(double b,double h,double s1,double s2){
    this->b = b;
    this->h = h;
    this->s1 = s1;
    this->s2 = s2;
}

void Triangle::calArea(){
    cout<<"Area of Traigle: "<<(b*h/2)<<endl;
}

void Triangle::calPerimeter(){
    cout<<"Perimeter of triangle:"<<b+s1+s2<<endl;
}
int main(){
    Square s(10);
    s.calArea();
    s.calPerimeter();
    Triangle t(12,10,15,16);
    t.calArea();
    t.calPerimeter();
    return 0;
}