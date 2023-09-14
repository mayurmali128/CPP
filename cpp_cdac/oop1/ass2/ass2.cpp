#include<iostream>

using namespace std;

class Date{
    private:
        int day,mn,year;

    public:

        void setDate(int , int , int );
        void getDate();
};

void Date::setDate(int a, int b, int c){
    day = a;
    mn = b;
    year = c;
}

void Date::getDate(){
    cout<<endl<<endl<<endl<<"Date:"<<day<<"/"<<mn<<"/"<<year<<endl;
    cout<<endl<<endl<<endl;
}


int main(){
    Date d;
    d.setDate(14,9,2023);
    d.getDate();
    return 0;
}