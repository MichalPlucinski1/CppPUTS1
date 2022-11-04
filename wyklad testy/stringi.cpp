#include<iostream>
#include<string>

using namespace std;
int main()
{
/*
string zmienna = "WArtosc zmiennej poczatkowej = !!";
string zmienna2("TESTOWA",4); // 4 znaki od pcozatku
string zmienna4(zmienna, 10);  // (jaka zmienna, od jakeigo miejsca, ile znakow)
cout << zmienna << endl << zmienna2 << endl << zmienna4; //sprawdzic statica
*/

/*
string zmienna1 = "chce to od tylu";
string zmienna3[zmienna1.length()];
int dlugosc = zmienna1.length();
for(int i = 0; i < dlugosc; i++)
{
    zmienna3[i] = zmienna1[dlugosc-i -1];
    cout << i <<" z1=" << zmienna1[i] << " z3=" << zmienna3[i] << endl;
}
cout << zmienna3;
*/
// & pobiera adres     adres = &a
//zmienna = *adres


int a = 100;
int* adres;
int zmienna;

adres = &a;
zmienna=*adres;

cout << "a:" <<a <<endl<<adres <<"adres :"<<endl << *adres <<"*adres: "<< endl <<"zmienna "<< zmienna << endl;

/*
private:
nie ma dostepu z zewnatrz klasy
protected:
taki privat, jest dziedziczona.
public:
w pelni widoczna
*/


return 0;
}
