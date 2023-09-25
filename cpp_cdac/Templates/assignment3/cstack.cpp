#include<iostream>
using namespace std;

template<class t>
class cStack{
    int top;
    int size;
    t *arr;

    public:
        cStack();
        cStack(int);
        void Push(t);
        t pop();
        void Display();
};

template<class t>
cStack<t>::cStack(){
    top = -1;
    size = 0;
}

template<class t>
cStack<t>::cStack(int n){
    top = -1;
    size = n;
    arr = new t[n];
}

template<class t>
void cStack<t>::Push(t num){
    if(top>=size){
        cout<<"Stack is full."<<endl;
    }
    else{
        top++;
        arr[top] = num;
    }
}

template<class t>
t cStack<t>::pop(){
    if(top==-1){
        return -1;
    }
    
    t num = arr[top];
    top--;

    return num;
    
}

template<class t>
void cStack<t>::Display(){
    if(top==-1){
        cout<<"Stack is empty."<<endl;
    }
    else{
        cout<<"Satck:"<<endl;
        for(int i = top; i>=0; i--){
            cout<<arr[i]<<endl;
        }
    }
}

int main(){

    cStack<int> st(5);

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
            st.Push(n);
            cout<<"Push successful."<<endl;
        }
        else if(ch==2){
            if(st.pop()==-1){
                cout<<"Stack is empty."<<endl;
            }
            else{
                cout<<"Deleted element is "<<st.pop()<<endl;
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