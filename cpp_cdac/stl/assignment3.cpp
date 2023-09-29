#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> st;
    for(int i=0; i<20; i++){
        if(!(i&1)){
            st.push(i);
        }
    }

    while(!st.empty()){
        int top = st.top();
        st.pop();
        cout<<top<<endl;
    }
    return 0;
}