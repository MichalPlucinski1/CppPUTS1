#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include "klasy.h"
using namespace std;

Rectangle zmienna1;
Square zmienna2;

int main()
{
// co widac na zewnatrz ??
zmienna1.zmienna_deklarowana_w_public_klasy_rectangle;
zmienna2.zmienna_deklarowana_w_public_klasy_rectangle;


cout << zmienna1.zmienna_deklarowana_w_public_klasy_rectangle << endl;
cout << zmienna1.Pole() << endl;
cout << zmienna1.Obwod() << endl;
cout << zmienna2.zmienna_deklarowana_w_public_klasy_rectangle << endl;
cout << zmienna2.Pole() << endl;
cout << zmienna2.Obwod() << endl;
getch();
}

