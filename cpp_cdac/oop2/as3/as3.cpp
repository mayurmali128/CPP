#include<iostream>
#include<string.h> //for strcpy()
#include<string>

using namespace std;

class Player{
    int id,runs,wik,inn;
    string name;

    public:
        Player();
        void setData(int , int , int , int , string );
        void getData();
        int getRuns();
        int getWic();
};

void Player::setData(int a, int b, int c, int d, string nm){
    id = a;
    runs = b;
    wik = c;
    inn = d;
    name = nm;
}

Player::Player(){
    id = 0;
    runs = 0;
    wik = 0;
    inn = 0;
    name = "Default";
}

int Player::getRuns(){
    return runs;
}

int Player::getWic(){
    return wik;
}

void Player::getData(){
    cout<<"Palyer id: "<<id<<endl;
    cout<<"Palyer name: "<<name<<endl;
    cout<<"Palyer runs: "<<runs<<endl;
    cout<<"Palyer wik: "<<wik<<endl;
    cout<<"Palyer number of innigs: "<<inn<<endl;
}


Player getMaxRun(Player p[], int n){

    int maxi = p[0].getRuns();
    Player Temp = p[0];

    for(int i=1; i<n; i++){
        if(maxi<p[i].getRuns()){
            maxi = p[i].getRuns();
            Temp = p[i];
        }
    }

    return Temp;
}

Player getMaxWickets(Player p[], int n){
    int maxi = p[0].getWic();
    Player Temp = p[0];

    for(int i=1; i<n; i++){
        if(maxi<p[i].getWic()){
            maxi = p[i].getWic();
            Temp = p[i];
        }
    }

    return Temp;
}

int main(){

    Player players[10];

    for(int i=0; i<10; i++){
        cout<<"Please enter Player id, runs scored, total wikets, No of innings and name: ";
        int a,b,c,d;
        string name;
        cin>>a>>b>>c>>d;
        getline(cin>>ws,name);
        players[i].setData(a,b,c,d,name);
    }

    cout<<"Given data of players:"<<endl;
    for(int i=0; i<10; i++){
        cout<<"---------------------------------------------------------------------------------"<<endl;
        players[i].getData();
        cout<<"---------------------------------------------------------------------------------"<<endl;
    }

    cout<<"\n\nPalyer having maximum Runs:";
    getMaxRun(players,10).getData();
    cout<<"\n\n\n Palyer having maximum Wickets:"<<endl;
    getMaxWickets(players,10).getData();

    return 0;
}