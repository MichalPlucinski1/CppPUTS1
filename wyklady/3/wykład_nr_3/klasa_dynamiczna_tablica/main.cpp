#include <conio.h>
#include "pies.cpp"

int main()
{
    CPies pies1("Azor");
	CPies *pies2 = new CPies("Burek");
	CPies* pies3;
	pies3 = new CPies("Fido");

	pies1.BawSie(5);
	pies2->BawSie(7);
	pies3->BawSie(15);

	pies1.Stan();
	pies2->Stan();
	pies3->Stan();

	delete pies3;

	pies1.Nakarm(4);
	pies2->Nakarm(4);

  pies3->Nakarm(4);  //praca niestabilna

    pies1.Stan();
	pies2->Stan();


	pies1.Spij(3);
    pies2->Spij(3);

    pies1.Stan();
    pies2->Stan();


CPies *tablica;

int rozmiar =3;
tablica=new CPies[rozmiar];


tablica[0].Stan();
//tablica[2].Nakarm();
//pies3->~CPies();
//delete pies2;

//delete [] tablica;


//    getch();
}
