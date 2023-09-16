#include"string.cpp"

int main(){
    String s1("Mayur Mali");
    s1.getString();

    //calling copy constructer
    cout<<"Copying string using copy constructer.."<<endl;
    cout<<"Copied string: ";
    String s2(s1);
    s2.getString();

    return 0;
}