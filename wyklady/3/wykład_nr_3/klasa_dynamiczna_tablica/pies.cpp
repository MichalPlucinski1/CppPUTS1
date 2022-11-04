#include "pies.h"
#include <iostream>

CPies::CPies()
{
	glod = 0;
	energia = 100;
	imie = "piesek";
}

CPies::CPies(string argImie)
{
	glod = 0;
	energia = 100;
	imie = argImie;
}
CPies::~CPies()
{
	cout<<"Zegnaj "<< imie << endl;
}
void CPies::BawSie(int czas)
{
	CPies::glod += 6*czas;     //opcjonalnie mo¿na wskazaæ klase CPies::
	CPies::energia -= 7*czas;
}
void CPies::Nakarm(int iloscJedzenia)
{
	glod -= 5*iloscJedzenia;
}
void CPies::Spij(int czas)
{
	glod += 2*czas;
	energia += 10*czas;
}
void CPies::Stan()
{
	cout<<"------------ stan --------------"<<endl;
	cout<<"Imie: "<< imie <<endl;
	cout<<"Glod: "<< glod <<endl;
	cout<<"Energia "<< energia <<endl;
	cout<<"--------------------------------"<<endl;
}
