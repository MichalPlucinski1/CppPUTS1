#include <conio.h>
#include <iostream>
#include <stdio.h>
using namespace std;
// --- metody abstrakcyjne --- //

class zwierze
 {
  public :
  int dlugosc;
  int wiek;
  virtual void oddychaj()=0;
  // metoda abstrakcyjna nie ma implementacji ciala !!
 };

class ssak :public zwierze
 {
  public:
  void oddychaj() {cout << "ODDYCHAM PLUCAMI - SSAK";};
 };

class ryba :public zwierze
 {
  public:
  void oddychaj() {cout << "ODDYCHAM SKRZELAMI - RYBA";};
 };


int main()
{

 ryba obiekt;

 zwierze *wsk;
// wsk = new zwierze; - nie mozna utworzyc obiektu abstrakcyjnego !!
 wsk = new ssak;
 wsk->oddychaj();

 cout << "\n-------------------------- \n";

 zwierze* wskaznik= new ryba;
 wskaznik->oddychaj();

 getch();

}



