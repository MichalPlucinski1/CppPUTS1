#include <conio.h>
#include <iostream>
#include <typeinfo>
#include <stdlib.h>

using namespace std;


enum typ {wsk_na_zwierze, wsk_na_ssak};

class zwierze
{
 public:
  virtual const int Typ()  {return wsk_na_zwierze;}
 void Oddychaj() {};

};

class ssak : public zwierze
{
 public:
 const int Typ()  {return wsk_na_ssak;}
};


zwierze* LosujTyp()
{
 int los=rand()%3;
 switch (los)
 {
 case(1) :  {return new zwierze; break; }
 case(2) :  {return new ssak; break; }
 default :  {return NULL;}
 }
}



string s = "lancuch";
char c;
float x;
int a = 100;
zwierze* wskaz = new ssak;


int main()
{
 cout << "Typ zmiennej \"c\" to : " << typeid(c).name()  << endl;
 cout << "Typ zmiennej \"a\" to : " <<  typeid(a).name() << endl;
 cout << "Typ zmiennej \"x\" to : " <<  typeid(x).name() << endl;
 cout << "Typ zmiennej \"s\" to : " <<  typeid(s).name() << endl;


 cout << "Typ obiektu \"zwierze\" to : " <<  typeid(zwierze).name() << endl;
 cout << "Typ obiektu \"ssak\" to : " <<  typeid(ssak).name() << endl;

 cout << "Typ zmiennej \"wskaz\" to : " <<  typeid(wskaz).name() << endl;
 cout << "Typ zmiennej \"*wskaz\" to : " <<  typeid(*wskaz).name() << endl;

ssak *wskaznik = new ssak;
zwierze *wsk = LosujTyp();

if(wsk!=NULL)
{
switch (wsk->Typ())
{
case (wsk_na_zwierze) :
 { cout << "Typ zmiennej \"wsk\" to wskaznik na zwierze "<< endl;
   wsk->Oddychaj();
   break;
 }
case (wsk_na_ssak) :
 { cout << "Typ zmiennej \"wsk\" to wskaznik na ssak "<< endl;
   wsk->Oddychaj();
   break;
 }
}
}
else
{
cout << "PUSTY LOS - OBIEKT NIE STWORZONY!"<<endl;
}


if(wsk!=NULL)
{
cout << "Typ zmiennej \"wsk\" to : " <<  typeid(wsk).name() << endl;
cout << "Typ zmiennej \"* wsk\" to : " <<  typeid(*wsk).name() << endl;
cout << "Typ zmiennej \"* wskaznik\" to : " <<  typeid(* wskaznik).name()<< endl;
}

// lub zamiast switch'a mozna sprawdzic typid
if(wsk!=NULL)
{
 if (typeid(*wsk)==typeid(zwierze))
  {
   cout << "Stworzono zwierze" <<endl;
  }
 if (typeid(*wsk)==typeid(ssak))
  {
   cout << "Stworzono ssaka" <<endl;
  }
}
else
{
  cout << "Pusty los" <<endl;
}

getch();
}
