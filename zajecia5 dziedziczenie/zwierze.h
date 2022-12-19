#pragma once
#include<iostream>
using namespace std;



class Zwierzak{
    public:
        static const float maxenergia;
        static const float maxmorale;
    void Patrz();
    void Oddychaj();  
    void Zyj();
    void ShowStats();
    int get_Wiek(){return Wiek;}
    void set_Wiek(int _wiek){Wiek = _wiek;}

    Zwierzak();
    Zwierzak(string,int,float);
    protected:

    float Mass;
    int Wiek;
    string Imie;
    float Energia;
    float Morale;
    char Plec;

};


