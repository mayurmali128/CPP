#include<iostream>

using namespace std;

class String{
    int len;
    char *str;

    public:
    
    String();
    String(const char*);
    String(String& );
    int getLenght();
    char* getStr();

    void getString();
    ~String();
};