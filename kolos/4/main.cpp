#include<iostream>
using namespace std;

class Y{
    public:
    int y;
};

class X{
    public:
    int x;

    X operator-(Y arg){x = x - arg.y; return *this;}
};



int main()
{
    X x1;
    x1.x = 5;

    cout << x1.x << endl;

    Y y1;

    y1.y=1;
    x1 - y1;

    cout << x1.x;
    return 0;
}