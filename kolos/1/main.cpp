#include<iostream>

using namespace std;

class klasa{
    public:
    static int licznik;
    klasa(){licznik++;}

};

int klasa:: licznik;

int main()
{
cout << "licznik: " << klasa::licznik;
}
