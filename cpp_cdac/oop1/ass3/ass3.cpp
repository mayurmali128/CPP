#include<iostream>

using namespace std;

class Date{
    private:
        int day,mn,year;

    public:

        void setDate(int , int , int );
        void getDate();
        void setDay(int);
        void setMonth(int);
        void setYear(int);
        void getDay();
        void getMonth();
        void getYear();
        bool isValid();
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

void Date::setDay(int a){
    
    day = a;
}

void Date::setMonth(int a){
    mn = a;
}

void Date::setYear(int a){
    year = a;
}

void Date::getDay(){
    cout<<endl<<endl<<endl<<"Day:"<<day;
    cout<<endl<<endl<<endl;
}

void Date::getMonth(){
    cout<<endl<<endl<<endl<<"Month:"<<mn;
    cout<<endl<<endl<<endl;
}

void Date::getYear(){
    cout<<endl<<endl<<endl<<"Year:"<<year;
    cout<<endl<<endl<<endl;
}

bool Date::isValid(){
    if(mn<=12 && mn>=1){
        if((mn==1 || mn == 3 || mn == 5 || mn==7 || mn==8 || mn==10 || mn==12) && day<=31&& day>=1){
            return true;
        } 
        else if(day<=30 && day>=1){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}

int main(){

    int a,b,c;
    cout<<"\n\n\n Please enter the date in dd mm yyyy formate:";
    cin>>a>>b>>c;

    Date d;
    d.setDate(a,b,c);
    d.getDate();
    cout<<"\n\n\n Please enter day";
    cin>>a;
    d.setDay(a);
    cout<<"\n\n\n Please enter Month";
    cin>>b;
    d.setMonth(b);
    cout<<"\n\n\n Please enter year";
    cin>>c;
    d.setYear(c);
    d.getDate();

    if(d.isValid()) cout<<"\n \n Given date is valid."<<endl;
    else cout<<"\n\n Given date is not valid."<<endl;
    return 0;
}