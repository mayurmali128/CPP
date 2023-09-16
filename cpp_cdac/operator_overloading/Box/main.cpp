#include "box.cpp"

int main(){

        Box b1(10,20,30);
        Box b2(11,20,30);

        if(b1>b2){
            cout<<"Box b1 is geater than b2"<<endl;
        }
        else if(b1<b2){
            cout<<"Box b2 is greater than b1"<<endl;
        }
        else if(b1==b2){
            cout<<"Both box are equal."<<endl;
        }
        else{
            cout<<"Some error has occured"<<endl;
        }
    return 0;
}