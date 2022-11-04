#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

struct wizytowka
{
 string imie;
 string nazwisko;
 int wiek;
 float wzrost;
};

const int liczba_wizytowek = 3;

wizytowka zmienna;

wizytowka tablica[liczba_wizytowek];


void Search (string arg_imie)
{
int licznik=0;

 for (int i=0;i<liczba_wizytowek;i++)
 {
 if (tablica[i].imie == arg_imie)
   {
     cout << " ************* " << endl;
     cout << "Imie : " << tablica[i].imie << endl;
     cout << "Nazwisko : " << tablica[i].nazwisko << endl;
     cout << "Lat  : " << tablica[i].wiek << endl;
     cout << " ************* " << endl;
     licznik=licznik+1;
     continue;
     //break; //- znajdzie jeden wpis i wyjdzie z petli
   }
 }
if (licznik==0)
{
cout << "Nie znalazlem osoby o imieniu : "  << arg_imie;
}
}

main()
{
 zmienna.imie = "Jan";
 zmienna.nazwisko = "Kowalski";
 zmienna.wzrost = 1.84;
 zmienna.wiek = 50;

  cout << "Imie : " << zmienna.imie << endl;
  cout << "Nazwisko : " << zmienna.nazwisko << endl;
  cout << "Wzrost : " << zmienna.wzrost << endl;
  cout << "Wiek : " << zmienna.wiek << endl;
  cout << "####################### " << endl;
  cout << "Wcisnij ENTER aby przejsc do wyszukiwania. " << endl;

 getch();


// wypelnienie tablicy przykladowymi danymi

 tablica[0].imie = "Jarek";
 tablica[0].nazwisko = "Kowalski";
 tablica[0].wzrost = 1.84;
 tablica[0].wiek = 50;

 tablica[1].imie = "Pawel";
 tablica[1].nazwisko = "Nowak";
 tablica[1].wzrost = 1.54;
 tablica[1].wiek = 35;

 tablica[2].imie = "Jarek";
 tablica[2].nazwisko = "Kowal";
 tablica[2].wzrost = 1.99;
 tablica[2].wiek = 25;

 string imie;
 cout << "Podaj imie szukanej osoby : ";
 cin >> imie;
 Search(imie);

 getch();
}
