#include<iostream>
#include<string.h>

using namespace std; 

class CString{
    int size;
    char *str;

    public:
        CString();
        CString(const char* );
        CString operator =(CString&);
        friend ostream& operator <<(ostream&, CString& );
        friend istream& operator >>(istream&, CString& );
        // CString operator =(CString&);
        ~CString(){
            delete []str;
        }
};

CString::CString(){
    size = 0;
    str = new char[1];
    str[0] = '\0';
}

CString::CString(const char* str){
    size = strlen(str);
    this->str = new char[size+1];
    strcpy(this->str,str);
}

ostream& operator <<(ostream& os, CString& str){
    os<<str.str<<endl;
    return os;
}

CString CString :: operator =(CString& s1){
    this->size = s1.size;
    strcpy(this->str,s1.str);
    return *this;
}

istream& operator >>(istream& in, CString& str){
    char str1[20];
    cout<<"Enter String: ";
    in>>str1;
    CString s2(str1);
    str = s2;
    return in;
}

int main(){
    CString s1("Mayur");
    CString s2("Mali");
    CString s3;
    cout<<s1<<s2;
    cin>>s3;
    cout<<s3;
    return 0;
}