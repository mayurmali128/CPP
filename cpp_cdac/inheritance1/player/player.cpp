#include<iostream>
#include<string.h>

using namespace std;

class Player{
    int Player_id;
    char name[20];

    public:
        Player();
        Player(int, const char*);
        void Display();
        // void setData(int, const char*);
};

Player::Player(){
    Player_id = 0;
    strcpy(name,"NA");
}

Player::Player(int id, const char *name){
    Player_id = id;
    strcpy(this->name,name);
}

void Player::Display(){
    cout<<"Player id: "<<Player_id<<endl;
    cout<<"Player name: "<<name<<endl;
}

// void Player::setData(int id, const char* name){
//     Player_id = id;
//     strcpy(this->name,name);
// }

class Batsman : public Player{
    int innings,notouts,runs;

    public:
        Batsman();
        Batsman(const char* , int, int, int, int);
        double calAvg();
        // void setData(const char* , int, int, int, int);
        void Display();
};

Batsman::Batsman(){
    innings = notouts = runs = 0;
}

Batsman::Batsman(const char *name , int id, int in, int no, int ru ):Player(id,name){
    innings = in;
    notouts = no;
    runs = ru; 
}

double Batsman::calAvg(){
    return (double)runs/double(innings-notouts);
}

// void Batsman::setData(const char *name , int id, int in, int no, int ru){
//     Player::setData(id,name);
//     innings = in;
//     notouts = no;
//     runs = ru; 
// }

void Batsman::Display(){
    Player::Display();
    cout<<"Innings: "<<innings<<endl;
    cout<<"Not outs: "<<notouts<<endl;
    cout<<"Runs: "<<runs<<endl;
}


int main(){
    char nm[20];
    int i, in, no, runs;
    cout<<"Please enter player name, id, innings, not outs and runs:";
    cin>>nm>>i>>in>>no>>runs;

    Batsman b1(nm,i,in,no,runs);
    // b1.setData(nm,i,in,no,runs);
    b1.Display();
    cout<<"Average of player:"<<b1.calAvg();
    return 0;
}