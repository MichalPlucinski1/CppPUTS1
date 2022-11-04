#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;
//-------------------------------------------------------------------------

string tablica[3];
string bufor;

int main()
{
cout << "-----ZAPIS DO PLIKU Z DOPISYWANIEM-----"<<endl;
ofstream strumien("NazwaPliku.txt",ios::trunc);
for (int i=0; i<3; i++)
{
strumien << "Dopisujemy wartosc = "<< i <<  endl;
};

cout << "-----ODCZYT Z PLIKU-----" << endl;

ifstream plik("NazwaPliku.txt");
/*
for (int i=0; i<3; i++)
{
getline(plik,tablica[i]);
cout  << tablica[i] << endl;
}
*/

while (getline(plik,bufor))
  cout << bufor << endl;

return 0;
}
