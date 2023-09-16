#include"Bank.cpp"

int Bank::cnt = 0;
int Bank::rate = 0;
int main(){
    int n;
    cout<<"Enter inerest rate:";
    cin>>n;
    Bank ::setInterest(n);

    cout<<"Interest rate: "<<Bank::getInterest()<<endl;

    cout<<"----------------------------------------------------------------------"<<endl;
    Bank b1;
    b1.gatData();
    cout<<"----------------------------------------------------------------------"<<endl;

    Bank b2("Mayur",1000);
    b2.gatData();
    cout<<"Interest rate: "<<b2.getInterest()<<endl;
    b2.setInterest(10);
    cout<<"Interest rate after changing:"<<b1.getInterest()<<endl;
    return 0;
}