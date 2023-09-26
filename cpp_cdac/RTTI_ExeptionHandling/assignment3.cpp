// 3. Write program to demostrate use of Static cast


#include<iostream>

using namespace std;

int main(){
    double b = 10.5556;
    int a = 7;

    char c = 'c';

    //tstaic cast
    // char to int
    int d = static_cast<int>(c);

    cout<<d<<endl;

    //int to double
    double k = static_cast<double>(a);
    cout<<k<<endl;

    //char to int

    char v = static_cast<char>(a);

    cout<<v<<endl;

    return 0;
}
