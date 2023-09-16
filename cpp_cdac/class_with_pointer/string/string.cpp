#include"string.h"
#include<string.h>

String :: String(){
    len = 0;
    str = new char[1];
    str[0] = '\0';
}

//parametarise constructer

String :: String(const char* str){
    this->len = strlen(str);
    this->str = new char[len+1];
    strcpy(this->str,str);
}

//destructer
String :: ~String(){
    delete []str;
}

void String::getString(){
    for(int i=0; i<this->len; i++){
        cout<<str[i];
    }
    cout<<endl;
}

int String::getLenght(){
    return this->len;
}
char* String::getStr(){
    return this->str;
}

//copy constructer
String::String(String& str){
    this->len = str.getLenght();
    this->str = new char[len+1];
    strcpy(this->str,str.getStr());
}
