// 1. Create vector for storing 10 prime numbsers.
#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(7);
    arr.push_back(11);
    arr.push_back(13);
    arr.push_back(17);
    arr.push_back(23);
    arr.push_back(29);
    arr.push_back(31);

    for(auto i:arr){
        cout<<i<<endl;
    }
    return 0;
}