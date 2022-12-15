#include<iostream>
using namespace std;


void funkcja(int a, int c = 0)
{
cout <<"a";
}

void funkcja(double b)
{
cout <<"b";
}


int main()
{
    int a = 0;
    double b = 10;

    funkcja(a);
    funkcja(b, b);

}