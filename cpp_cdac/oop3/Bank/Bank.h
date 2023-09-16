#include<iostream>

using namespace std;

class Bank{
    int acNo,bal;
    static int rate,cnt;
    char name[20];

    public:
        Bank();
        Bank(const char* , int);
        void gatData();
        static void setInterest(int);
        static int getInterest();
};
