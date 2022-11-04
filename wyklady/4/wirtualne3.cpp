#include <conio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
class zwierze
{
 public:
    virtual void opis() {cout << "Wylosowano zwierze !!" << endl;}
};
class ssak : public zwierze
{
 public:
 void opis() {cout << "Wylosowano ssaka !!" << endl;};
};
class czlowiek : public ssak
{
 public:
 void opis() {cout << "Wylosowano czlowieka !!" << endl;};
};
class ptak : public zwierze
{
 public:
 void opis() {cout << "Wylosowano ptaka !!" << endl;};
};


zwierze* funkcja()
{
 int los = rand()%5;
 switch(los)
 {
  case (0): {return new zwierze; break;}
  case (1): {return new ssak; break;}
  case (2): {return new czlowiek; break;}
  case (3): {return new ptak; break;}
  case (4): {return NULL;}
 }
};


int main()
{
char znak;
czlowiek* wsk_czlowiek;
do
{
zwierze* wsk = funkcja();

if (wsk!=NULL)
{
//wsk_czlowiek = wsk;
wsk_czlowiek = dynamic_cast<czlowiek*>(wsk);       // wsk ,musi byc wskaznikiem na klase z metoda wirtualna
if (wsk_czlowiek!=NULL)

{
 cout << "jestem w wsk_czlowiek->opis" << endl;
 wsk_czlowiek->opis();      // CZYLI ZWIERZE MUSI MIEC METODE VIRTUAL !!
}

else
{
     cout << "jestem w wsk->opis" << endl;
     wsk->opis();
}


}
else
{
cout << "PUSTY LOS - OBIEKT NIE STWORZONY!"<<endl;
}
znak=getch();
}
while (znak!='q');
getch();
}
