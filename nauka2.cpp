#include<iostream>
using namespace std;

int fun(int arg)
{
    arg++;
    return arg;
}


class klasa1{
    
    int numer;
    public:
    klasa1(int _numer)
    {
        numer = _numer;
    }
    int getNumer(){return this->numer;}
    int setNumer(int _numer){numer = _numer;}
};

klasa1* fun3()
{
    
}


int main()
{
   klasa1 a1(5);
   a1.getNumer();

   klasa1* a2 = new klasa1(5);
    a2->getNumer();




    return 0;
}
