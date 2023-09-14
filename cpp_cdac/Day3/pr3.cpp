#include<iostream>
#include<string>

using namespace std;

int isVowel(char c){
    int flag = 0;
    switch (c)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            flag = 1;
            break;
        default:
            flag = 0;
    }

    return flag;
}

int count_vowels(string& str){
    int n = str.length();
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(isVowel(str[i]))
            cnt++;
    }
    return cnt;
}

int main(){
    string str;

    cout<<"Enter the string:";
    getline(cin,str);

    cout<<"No of vowels is: "<<count_vowels(str)<<endl;
    
    return 0;
}
