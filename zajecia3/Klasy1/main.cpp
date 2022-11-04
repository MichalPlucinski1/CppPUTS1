#include <stdio.h>
#include <iostream>
#include "klasa.h"
#include "klasa.cpp"
#include<fstream>

const int rozmiar = 2;
NazwaKlasy osoby[rozmiar];




int main()
{
/*
  NazwaKlasy osoba1;
  NazwaKlasy osoba2;
  NazwaKlasy osoba3;
*/
  for(int i = 0; i < rozmiar; i++)
  {
      osoby[i].MetodaDane();
  }
   /*
  cout << "Klasa osoba1" << endl;
  osoba1.MetodaDane();
  cout << "Klasa osoba2" << endl;
  osoba2.MetodaDane();

  osoba1.MetodaPrzedstaw();
  osoba2.MetodaPrzedstaw();
  */
   string telefon;
   cout << "podaj telefon osoby, ktorej szukasz:";
   cin >> telefon;
   Search(telefon);

 getchar();
 return 0;
};


