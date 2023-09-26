// 4. Write program to demostrate use of const cast.

#include<iostream>

using namespace std;

int main(){
    int a = 10;
    const int *ptr = &a;

    // int *k = ptr;  error

    int *k = const_cast<int*> (ptr);

    *k = 20;

    cout<<*k<<endl;
    cout<<a<<endl;

    


    return 0;
}