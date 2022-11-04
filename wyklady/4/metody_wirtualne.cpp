#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;


class serce
{
 public:
 int rozmiar_serca;
 int waga_serca;
 serce()
 {
 rozmiar_serca=10;
 waga_serca=1000;
 cout << "Serce utworzone." << endl;
 };
};

class pluca
{
 public:
 int wielkosc_pluc_x;
 int wielkosc_pluc_y;
 pluca()
 {
 wielkosc_pluc_x=100;
 wielkosc_pluc_y=200;
 cout << "Pluca utworzone." << endl;
 };
};



class zwierze
{
 protected:
  serce *wskaznik;
 public:


   virtual void oddychaj()  {cout << "Oddycham ..." << endl;};
   zwierze() {
      cout << "konstruktor ZWIERZE" <<endl;
      wskaznik = new serce ;
      };
     ~zwierze() {delete wskaznik; cout <<"DESTRUKTOR_ZWIERZE" << endl;};
  // destruktor klasy bazowej zawsze virtualny !!
  // usun wirtualnosc destruktora i zobacz czy wykona sie destruktor ssak'a ?
};

class ssak : public zwierze
{
 protected:
 pluca *wskaznik2;

 public:
  void oddychaj()         {cout << "plucami_ssak " << endl;}
  void ssanie();
  ssak() {wskaznik2 = new pluca;};
  ~ssak() {delete wskaznik2; cout <<"DESTRUKTOR_SSAK" << endl;}
};

class ptak : public zwierze
{
 public:
  void oddychaj()     {cout << "plucami_ptak " << endl;}
  void latanie();
};
class ryba : public zwierze
{
 public:
  void oddychaj()     {cout << "skrzelami_ryba " << endl;}
  void plywanie();
  ryba(){cout <<"konstruktor RYBA"<<endl;}
  ~ryba() {cout <<"DESTRUKTOR_RYBA" << endl;}
};


zwierze zw;
ssak ss;  // najpierw wywolywany jest konstruktor klasy bazowej zwierze potem konstruktor ssaka !
ptak pt;
ryba ry;


int main()
{
cout << "zw.oddychaj() : ", zw.oddychaj();
cout << "ss.oddychaj() : ", ss.oddychaj();
cout << "pt.oddychaj() : ", pt.oddychaj();
cout << "ry.oddychaj() : ", ry.oddychaj();

// metoda oddychaj w klasie nadrzednej zwierze jest virtualna, zatem
// wywolana zostanie metoda oddychaj z klasy obiektu tworzonego operatorem "new"
// usun operator "virtual" dla metody oddychaj i sprawdz !

cout << "################" << endl;
zwierze *wsk_zw;// = new ssak;
wsk_zw = new ssak;
wsk_zw->oddychaj();
delete wsk_zw;   // najpierw wywoluje sie destruktor klasy potomka (od dolu do gory)
cout << "################" << endl;

zwierze *wsk_zwie = new ryba;
wsk_zwie->oddychaj();
delete wsk_zwie;
cout << "################" << endl;


// tutaj zawsze bedzie wywolana metoda z klasy zwierze - takze dla metody wirtualnej
zwierze *wsk_zwi = new zwierze;
wsk_zwi->oddychaj();
delete wsk_zwi;
cout << "################" << endl;

getch();

cout << "+++++++++++++++++++++++++++++++++++"<< endl;
 //Metody wirtualne pozwalają doskonale korzystać z POLIMORFIZMU !
  zwierze* zwierzeta[4];
  zwierzeta[0] = new zwierze;
  zwierzeta[1] = new ssak;
  zwierzeta[2] = new ptak;
  zwierzeta[3] = new ryba;

  for (int i = 0; i < 4; ++i)
  {
   zwierzeta[i]->oddychaj();
  }
  delete zwierzeta;

cout << "Teraz system zwalnia pamiec - zobacz kolejnosc destruktorow:" << endl;
getch();

}







