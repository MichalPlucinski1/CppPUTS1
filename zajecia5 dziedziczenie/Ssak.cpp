#pragma once
#include "Ssak.h"
Ssak::Ssak(){
    cout << "Konstruktor ssaka" << endl;
}





Lew::Lew(){
    cout << "Konstruktor Lwa" << endl;
}


Pies::Pies() {
    cout << "Konstruktor Psa" << endl;
    this->Mass = 500;
    this-> Wiek = 0;
    cout << "Podaj imie dla psiura: ";
    cin >> this->Imie;
    this-> Energia = 30;
    this->Morale = 30;
    cout << "Podaj plec: ";
    cin >> this->Plec;
    cout << endl;
    this->Zyj();
    this->Oddychaj();
    this->Patrz();
    this->ShowStats();
}

void Ssak::Biegaj() { cout << "BIEEEGAAAM" << endl; };