#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream file1;
    file1.open("assignment1.cpp");
    int no_cnt = 0;
    int c_cnt = 0;
    int s_cnt = 0;
    int new_cnt = 0;

    while(file1){
        int ch = file1.get();

        if(ch>='0' && ch<='9'){
            no_cnt++;
        }
        else if(ch==' '){
            s_cnt++;
        }
        else if(ch =='\n'){
            new_cnt++;
        }
        else{
            c_cnt++;
        }
    }

    file1.close();

    cout<<"Number Count: "<<no_cnt<<endl;
    cout<<"Character Count: "<<c_cnt<<endl;
    cout<<"Spaces  Count: "<<s_cnt<<endl;
    cout<<"Lines Count: "<<new_cnt+1<<endl;
    return 0;
}