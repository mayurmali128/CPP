#include"box.h"

Box::Box(int a, int b, int c){
    len = a;
    br = b;
    hi = c;
}

void Box::getData(){
    cout<<"Lenght:"<<len<<endl;
    cout<<"Breadth:"<<br<<endl;
    cout<<"Height:"<<hi<<endl;
}

int Box::calculateVolume(){
    return len*br*hi;
}

bool Box :: operator >( Box& obj){
    return this->calculateVolume() > obj.calculateVolume();
}
bool Box :: operator <( Box& obj){
    return this->calculateVolume() < obj.calculateVolume();
}
bool Box :: operator ==( Box& obj){
    return this->calculateVolume() == obj.calculateVolume(); 
}