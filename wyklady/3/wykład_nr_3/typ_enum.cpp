#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;

// --- Wlasne Typ wyliczeniowy integera --- //
enum MojTyp {samochod=6, samolot, kolej=120};
// przy takiej deklaracji flaga samolot niejawnie przyjmuje wartosc 7
int zmienna;
MojTyp nazwa;
// def zmienenj typu wyliczeniowego z wartoscia poczatkowa
MojTyp srodek_lokomocji = kolej;
// lub
//MojTyp srodek_lokomocji = 8;

void Wybor(MojTyp zmienna_MojTyp)
{
 switch (zmienna_MojTyp)
 {
 case samochod:
        {
        cout << "Samochod" << endl;  break;
        }
 case 7:
        {
         cout << "Samolot" << endl;  break;
        }
 case kolej:
        {
         cout << "Kolej" << endl;    break;
        }
 default:
        {
         cout << "Pieszo" << endl;   break;
        }
 }
}

int main()
{
cout << "Podaj srodek lokomocji: ";
cin >> zmienna;
srodek_lokomocji = static_cast <MojTyp> (zmienna);
Wybor(srodek_lokomocji);
getch();
}
