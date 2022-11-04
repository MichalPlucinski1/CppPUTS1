#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
int  a = 100;
int* adres;       /* wskaznik na zmienna typu int */
int zmienna;

adres = &a;       /* wskaznik 'adres' wskazuje na zmiennz typu int 'a' */
zmienna=*adres;

cout << adres <<endl;
cout << *adres << endl;
cout << zmienna <<endl;
cout << &zmienna <<endl;

a=333;

cout << adres <<endl;
cout << *adres << endl;
cout << zmienna <<endl;
cout << &zmienna <<endl;

getch();
}
