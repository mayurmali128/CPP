#include<iostream>

using namespace std;

class Box{
    private:
        int len,br,hi;
    public:
        Box(int, int, int);
        void getData();
        int calculateVolume();
        bool  operator >( Box&);
        bool operator <( Box&);
        bool operator ==(Box&);
};