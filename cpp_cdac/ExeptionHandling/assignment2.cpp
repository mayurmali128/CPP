// Implement exception handling for cStack class.
// for Push and Pop.

#include<iostream>
using namespace std;

template<class t>
class Stack{
    int top,size;
    t *arr;

    public:
        Stack(){
            size =0;
            top= -1;
        }

        Stack(int size){
            this->size = size;
            top = -1;
            arr = new t[size];
        }

        void push(t num){
            
            if(top>=size-1) throw 400;
            top++;
            arr[top] = num;
        }

        t pop(){
            
            if(top==-1) throw 100;
            t na = arr[top];
            top--;
            return na;
        }

        void Display(){
            cout<<"Stack: "<<endl;
            for(int i=top; i>=0; i--){
                cout<<arr[i]<<endl;
            }
        }

        ~Stack(){
            delete []arr;
        }

};

int main(){

    Stack<int> st(5);

    while(1){
        int ch;
        cout<<"\n\t\t Please enter yout choise:"<<endl
              << "\n\t\t 1. Push()"<<endl
              << "\n\t\t 2. Pop()"<<endl
              << "\n\t\t 3. Display."<<endl
              << "\n\t\t 0. Exit "<<endl;
        
        cin>>ch;

        if(ch==1){
            int n ;
            cout<<"Please enter element to push  : ";
            cin>>n;
            try{
                st.push(n);
            }
            catch(int n){
                cout<<"Stack is full"<<endl;
            }
            
        }
        else if(ch==2){
            try{
                cout<<"Pop element is "<<st.pop()<<endl;
            }
            catch(int n){
                cout<<"Satck is empty."<<endl;
            }
        }
        else if(ch==3){
            st.Display();
        }
        else if(ch==0){
            break;
        }
        else{
            cout<<"Please enter valid key."<<endl;
        }
    }
    return 0;
}