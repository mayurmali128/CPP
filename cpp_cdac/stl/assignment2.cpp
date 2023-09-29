#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    string name;
    vector<string> city;

    for(int i=0; i<10;i++){
        cout<<"Enter city name"<<i+1<<" :";
        getline(cin>>ws,name);
        city.push_back(name);
    }
    
    cout<<"Cites:"<<endl;
    for(auto s:city){
        cout<<s<<endl;
    }
    return 0;
}