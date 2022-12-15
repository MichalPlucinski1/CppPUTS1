#pragma once
#include "zwierze.h"
Zwierzak :: Zwierzak()
{
    this->Imie = "";
    this->Wiek = 0;
    this->Mass = 0;
    cout << "Konstruktor zwierzaka!" << endl;
    this->Zyj();
    this->Oddychaj();
    this->Patrz();
}
Zwierzak::Zwierzak(string imie, int wiek, float mass)
{
    this->Imie = imie;
    this->Wiek = wiek;
    this->Mass = mass;
    cout << "Konstruktor zwierzaka!" << endl;
    this->Zyj();
    this->Oddychaj();
    this->Patrz();
}



void Zwierzak::ShowStats()
{
    cout << "Zwierze " << this->Imie << endl;
    cout << "Wiek: " << this->Wiek << endl;
    cout << "Energia: " << this->Energia << endl;
    cout << "Morale: " << this->Morale << endl;
    cout << "Plec: " << this->Plec << endl;
    cout << "Masa: " << this->Mass << endl;
}

void Zwierzak::Patrz()
{
    cout << "PACZAM!!!" << endl;
}

void Zwierzak::Oddychaj()
{
    cout << "WDECH_______WYDECH" << endl;
}