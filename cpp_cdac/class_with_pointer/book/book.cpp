#include "book.h"
#include<string.h>

Book::Book(){
    cnt++;
    boo_id = cnt;
    price = 0;
    len = 0;
    name = new char[1];
    name[0] = '\0';
}


Book::Book(const char* s1, float price){
    cnt++;
    boo_id = cnt;
    this->price = price;
    len = strlen(s1);
    name = new char[len+1];
    strcpy(name,s1);
}

Book::Book(Book& b1){
    cnt++;
    boo_id = cnt;
    this ->price = b1.price;
    this->len = b1.len;
    this->name = new char[len+1];
    strcpy(this->name,b1.name);
}

void Book::Display(){
    cout<<"Book id: "<<boo_id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Price: "<<price<<endl;
}

Book::~Book(){
    delete [] name;
}