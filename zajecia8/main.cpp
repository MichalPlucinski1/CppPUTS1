#include<iostream>
using namespace std;


class Wektor{
    public:
    float x;
    float y;
    float z;
    Wektor(float _x = 0, float _y = 0, float _z = 0)
    {
        x = _x;
        y = _y;
        z = _z;
    };
    Wektor operator*(int arg)
    {
        x = x * arg;
        y = y * arg;
        z = z * arg;
        return *this;
    }
};

class Punkt3D{
    public:
    float x;
    float y;
    float z;
    Punkt3D(float _x = 0, float _y = 0, float _z = 0)
    {
        x = _x;
        y = _y;
        z = _z;
    };
    Punkt3D operator+(int arg)
    {
        x = x + arg;
        y = y + arg;
        z = z + arg;
        return *this;
    }

    Punkt3D operator+(Wektor);

};


ostream & operator<< (ostream &wyjscie, Punkt3D &s)        
{
    wyjscie<<"["<<s.x<<", "<<s.y<<", "<<s.z<<"]"<<endl;
    return wyjscie;
}


   Punkt3D Punkt3D::operator+(Wektor arg)
    {
        x = x + arg.x;
        y = y + arg.y;
        z = z + arg.z;
        return *this;
    }
int main()
{
    Punkt3D A(0,0,0);
    Punkt3D B(3,6,9);
    cout <<"A:" <<  A;
    cout <<"B:" << B;

    Wektor C(1,2,3);
    Wektor D(-1,-2,-3);

    A + C;

    C * 2;
    D * (-1);

    B + C + D;
    cout <<"A:" <<  A;
    cout <<"B:" << B;







    return 0;
}