#include<iostream>
#include<string>

using namespace std;

int stringlength(string& s){
    int i = 0;
    int cnt = 0;
   while(s[i] != '\0'){
        cnt++;
        i++;
   }
   return cnt;
}

int main(){
    string s1;
    cout<<"Please enter thr string: ";
    getline(cin,s1);
    cout<<"Lenght of the string is "<<stringlength(s1);
    return 0;
}