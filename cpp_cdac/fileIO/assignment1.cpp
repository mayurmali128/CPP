#include<iostream>
#include <fstream>
using namespace std;

int main(){

    ofstream f1;

    f1.open("abc.txt");

    for(int i='A'; i<='Z'; i++){
        f1.put((char)i);
        f1.put(' ');
    }

    f1.close();

    ifstream f2;

    f2.open("abc.txt");
    // cout<<f2.get();
    while(f2){
        char ch = f2.get();
        cout<<ch;
    }

    f2.close();

    return 0;
}