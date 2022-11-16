#include<iostream>
#include "Ryba.h"
#include "Ssak.h"
#include "Ssak.cpp"
#include "Ptak.h"
#include "zwierze.h"
#include "zwierze.cpp"
using namespace std;


void Zwierzak::Zyj(){
    cout << "Zyje i mam sie dobrze;" << endl;
}


int main()
{
    Lew ssak1;
    ssak1.Zyj();


    return 0;
}
