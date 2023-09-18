#include<iostream>

using namespace std;

class cString{
    int len;
    char *str;

    public:
    
        cString();
        cString(const char*);
        cString(cString& );
        bool operator <(cString&);
        bool operator >(cString&);
        cString operator =(cString&);
        bool operator ==(cString&);
        char& operator [](int i);
        void getStr();
        ~cString();
};