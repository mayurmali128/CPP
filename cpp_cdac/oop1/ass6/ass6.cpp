#include<iostream>

using namespace std;

class Calculator{
    int n1,n2;

    public:
        void setData(int, int);
        void getData();
        int add();
        int subs();
        int div();
        int mul();
};

void Calculator::setData(int a, int b){
    n1 = a;
    n2 = b;
}

void Calculator:: getData(){
    cout<<"Given numbers are: "<<endl<<"a = "<<n1<<"b= "<<n2;
}

int Calculator::add(){
    return n1+n2;
}

int Calculator::subs(){
    return n1 - n2;
}

int Calculator::mul(){
    return n1*n2;
}

int Calculator::div(){
    return n1/n2;
}


int main(){
    int a,b,ch;
    cout<<"Please enter 2 numbers: ";
    cin>>a>>b;

    Calculator cal;
    cal.setData(a,b);

    do{
        cout<<"-----------------------------------------------------------------------"<<endl;
        cout<<"\nEnter your choice:"<<endl
            <<"1.Addition"<<endl
            <<"2.Substraction"<<endl
            <<"3.Multiplicaton"<<endl
            <<"4.Division"<<endl
            <<"0.Exit"<<endl;
        cout<<"-----------------------------------------------------------------------"<<endl;
        cin>>ch;

        switch(ch){
            case 1:
                cout<<"Addition is :"<<cal.add()<<endl;
                break;
            case 2:
                cout<<"Substraction is is :"<<cal.subs()<<endl;
                break;
            case 3:
                cout<<"Multiplication is :"<<cal.mul()<<endl;
                break;
            case 4:
                cout<<"Division is :"<<cal.div()<<endl;
                break;
        }

    }while(ch !=0);

    return 0;
}