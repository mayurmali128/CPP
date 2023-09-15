#include<iostream>

using namespace std;

class Time{

    private:
        int hr,mi,sec;
        Time();        //private 
    
    public:
        Time(int) ;    //public
        void Display();
};

void Time::Display()
{
    cout<<"Time="<<hr<<":"<<mi<<":"<<sec<<endl;
}

Time::Time(){
    hr =0;
    mi = 0; 
    sec = 0;
}

Time::Time(int h){
    Time();
    hr = h;
}

int main(){
    Time t1(10);
    t1.Display();
    return 0;
}