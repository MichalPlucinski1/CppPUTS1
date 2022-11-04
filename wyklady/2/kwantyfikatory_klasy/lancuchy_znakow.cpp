#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

// --- Operacje na lancuchach znakow --- //
int main()
{
string zmienna = "Wartosc poczatkowa zmiennej !!";
string zmienna2("TESTOWA",4);
string zmienna4(zmienna,8,10);
cout << zmienna << endl;
cout << zmienna2 << endl;
cout << zmienna4 << endl;
cout << "Rozmiar zmiennej typu string: " << sizeof(string) << endl;

string napis = zmienna + zmienna2;
cout << "Konkatenacja zmiennej i zmiennej2 = " << napis << endl;

 string a = "abcdef";
 a+=  "ghijkl" ;
 cout << a << endl;
 a = a + " " + " doklejone zdanie !! ";
 cout << a << endl;
 cout << "Na piatej pozycji (liczac od 0 !!) w zmiennej a jest znak : ";
 cout << a[4] << endl;
 cout << "Dlugosc zmiennej a wynosi: " << a.length();
 cout << " znakow !! (Tez liczac od zera !!)" << endl;
 string b = "abcdef";
 b[4] = '@';
 cout << b << endl;
 getch();
}
