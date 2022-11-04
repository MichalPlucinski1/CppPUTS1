#include <conio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
// modyfikator static

void Licznik()
{
 static int licznik =0;    // raz zadeklarowana zmienne jest pamietana mimo charakteru lokalnego
 licznik ++;
 cout << "Jestem tu po raz : " << licznik << endl;
}

// prezentacja zasiegu zmiennych

int liczba = 5;      // zmienna globalna o zasiegu modulowym

void funkcja1()
{
int liczba = 1;
cout << "Zmienna \"liczba\" z funkcji1() wynosi: " << liczba << "\n";
}

void funkcja2()
{
int liczba = 2;
cout << "Zmienna \"liczba\" z funkcji2() wynosi: " << liczba << "\n";
}



int main()
{

int liczba = 3;         // zmienna lokalna o zasiegu bloku {} w ktorym zostala zdefiniowana
int x;
cout << "Podaj jakas liczbe : ";
cin >> x;
if (x > 0)
{
 cout << "Zmienna x: " << x << endl;
 int y = 10;
 int liczba = 4;

 /* - blok if zdeklarowal wlasna zmienna liczba o tej samej nazwie
      co funkcja main - jednak nie nadpisuje ona zmiennej z main'a !! */

 cout << "LICZBA: " << liczba << endl;
}
//cout << "Zmienna y: " << y;          // - blad kompilatora niezdefiniowana zmienna y !!

funkcja1();
funkcja2();
cout << "Zmienna \"liczba\" z main() wynosi: " << liczba << "\n";

// Aby celowo odwolac sie do zmiennej globalnej nalezy poprzedzic ja operatorem ::
// Nalezy unikac przeslaniania nazw zmiennych, wowczas operator :: nie jest konieczny

cout << "Globalna zmienna \"liczba\" wywolana z main() wynosi: " << ::liczba << "\n";

getch();

char znak;

do {Licznik();}

 while ((znak=getch()) != 'q');
getch();

}



//-------------------------------------------------------------------------
