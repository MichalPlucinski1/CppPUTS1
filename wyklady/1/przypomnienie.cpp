#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

float dodawanie(float liczba1, float liczba2)
{
float suma = liczba1 + liczba2;
return suma;
}

int main()
{
 float a=10.5, b=3.0;
 cout << "Licza pierwsza: " << a << endl;
 cout << "Liczba druga: " << b << endl;
 cout << "Suma: " << dodawanie(a,b);

 cout << endl;

 cout << "Aby Zakonczy program wcisnij \"q\"" << endl;
 char znak=getch();

// ****** if ... else ******
 if (znak == 'q')
  {
  return 0;
  }
 else
 {
   cout << "Aby wybrac kolejny program wcisnij 1 lub 2 "<< endl;
   cout << "1 - to suma " << endl;
   cout << "2 - to roznica "<< endl;
   znak = getch();

// ****** switch ... case ******
   switch(znak)
   {
   case '1': {
        cout << "Wybrano sume \n";
        break;
      }
   case '2': {
        cout << "Wybrano roznice \n";
        break;
      }
   default: {
        cout << "Wybrano inny znak \n";
      }
  }
 }

// ****** do ... while ******
 do cout << "Prosze wcisnac klawisz \"T\" " << endl;
 while ((znak = getch()) != 'T');

// ****** for ******
 for (int i=1;i<10;i++)
 {
  int los;
  los=rand()%101;

  if (los < 10)
   {
   cout << "Los = " << los << " Ide do kolejnej iteracji petli FOR !! " << endl;
   continue;
   }
  if (los > 50)
   {
   cout << "Los = " << los << " Koncze petle FOR !! " << endl;
   break;
   }
 }

int liczba;
cout << "Podaj liczbe calkowita i nacisnij enter !!" << endl;
cin >> liczba;
if ((liczba > 100) && (liczba <1000))
{
cout << "Podales liczbe z zakresu <100;1000> " << endl;
}
if ((liczba < 100) || (liczba >1000))
{
cout << "Podales liczbe nie mieszczaca sie w <100;1000> " << endl;
}

// ******  while ******
 while ((znak = getche()) != 'q')
 {
  cout << "Prosze wcisnac klawisz \"q\" aby zakonczyc program \n";
 }
 return 0;
}
//---------------------------------------------------------------------------
