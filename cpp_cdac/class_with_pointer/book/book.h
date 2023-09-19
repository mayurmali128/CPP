#include<iostream>

using namespace std;

class Book{
    static int cnt;
    int boo_id;
    char *name;
    int len;
    float price;

    public:
        Book();
        Book(const char*, float);
        Book(Book&);
        void Display();
        ~Book();
};