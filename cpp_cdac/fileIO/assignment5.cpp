#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream in;
    ofstream out;
    in.open("file1.txt");
    out.open("Copied.txt");
    while(in){
        char ch = in.get();
        out.put(ch);
    }

    in.close();
    out.close();

    cout<<"Printitng copied file content: "<<endl;

    ifstream in1;
    in1.open("Copied.txt");

    while(in1){
        char ch = in1.get();
        cout<<ch;
    }
    in1.close();

    return 0;
}