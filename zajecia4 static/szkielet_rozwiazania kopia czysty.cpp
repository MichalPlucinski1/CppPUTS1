#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

class osoba
{
    public:
    osoba();
    ~osoba();
    static int aktualnie_w_systemie;
    static int id_ostatniego;
    int id;
    int wiek;
    string imie;
    string nazwisko;
    static void info();
    void przedstaw();
};

int osoba::aktualnie_w_systemie;
int osoba::id_ostatniego;

osoba::osoba()
{
    aktualnie_w_systemie++;
    id_ostatniego++;
    id=id_ostatniego;
}

osoba::~osoba()
{
    cout << "Jestem w destruktorze !" << endl;
    aktualnie_w_systemie--;
}

void osoba::info()
{
    cout<<"Dotychczas utworzono: "<<osoba::id_ostatniego <<  " obiektow"<<endl;
    cout<<"Obecnie w systemie mamy: "<<osoba::aktualnie_w_systemie<< " obiektow" <<endl;
}

int main()
{
    string temp;
    ifstream wejscie("plik2.txt");
    //getline(wejscie,temp);
    osoba::id_ostatniego=atoi(temp.c_str());
    osoba::aktualnie_w_systemie=0;

    // tworzymy osoby
    osoba::info();

    ofstream wyjscie("plik2.txt",ios::trunc);
    wyjscie << osoba::id_ostatniego;
    return 0;
}
