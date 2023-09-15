#include<iostream>

using namespace std;

class Date{
    private:
        int day,mn,year;
        Date();
    public:
        static Date setDate();
        void Display();
};

Date Date::setDate(){
    return Date();       //here calling private consstructor using static function
}

Date::Date(){
    day=mn=1;
    year = 2023;
}

void Date::Display(){
    cout<<"Date: "<<day<<"/"<<mn<<"/"<<year<<endl;
}

int main(){
    Date obj = Date::setDate();
    obj.Display();
    return 0;
}