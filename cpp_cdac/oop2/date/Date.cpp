#include<iostream>

using namespace std;
//Constructor practice

class Date{
    int day,mn,year;

    public:

        Date();              //default constructor
        Date(int ,int ,int ); //parameterised constructor

        void Display(){
            cout<<"Date: "<<day<<"/"<<mn<<"/"<<year<<endl;
        }
};

Date::Date(){
    day = mn=1;
    year = 2023;
}

Date::Date(int a, int b, int c){
    day =a;
    mn = b;
    year = c;
}

int main(){
    Date d1;
    d1.Display();

    Date d2(12,12,2023);
    d2.Display();
    return 0;
}