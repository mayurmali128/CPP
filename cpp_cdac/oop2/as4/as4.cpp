#include<iostream>

using namespace std;

class Point{
    int x,y;
    static int cnt;
    public:
        Point();
        Point(int, int);
        void Display();
        int getCount();
};

Point::Point(){
    cnt++;
    x = y = 0;
}

Point::Point(int a, int b){
    x = a;
    y = b;
    cnt++;
}

void Point::Display(){
    cout<<"Coordinates of points are : ["<<x<<","<<y<<"]"<<endl;
}

int Point::getCount(){
    return cnt;
}

int Point::cnt = 0;

int main(){
    Point p1;
    p1.Display();
    Point p2(12,13);
    p2.Display();
    Point p3(-19,20);
    p3.Display();

    cout<<"No of points till now is: "<<p1.getCount();
    return 0;
}