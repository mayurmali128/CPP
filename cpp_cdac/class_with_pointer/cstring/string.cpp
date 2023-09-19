#include"string.h"
#include<string.h>

//default constructer
cString::cString(){
    len = 0;
    str = new char[1];
    str[0] = '\0';
}

//para constructer
cString::cString(const char* str){
    this->len = strlen(str);
    this->str = new char[len+1];
    strcpy(this->str,str);
}

//copy constructer
cString::cString(cString& s2){
    this->len = s2.len;
    this->str = new char[len+1];
    strcpy(this->str,s2.str);
}
//0 equal
//1 fist is greater
//-1 is greater
bool cString::operator <(cString& s2){

    if(strcmp(this->str,s2.str)==-1) return true;
    //else
    return false;
}

bool cString::operator >(cString& s2){
    if(strcmp(this->str,s2.str)==1) return true;
    //else
    return false;
}


cString cString::operator =(cString& s2){
    this->len = s2.len;
    this->str = new char[len+1];
    strcpy(this->str,s2.str);
    return *this;
}

bool cString::operator ==(cString& s2){
    if(strcmp(this->str,s2.str)==0) return true;
    //else
    return false;
}
char& cString::operator [](int i){
    return str[i];
}

void cString::getStr(){
    cout<<"String: "<<str<<endl;
}

cString:: ~cString(){
    delete []str;
}
