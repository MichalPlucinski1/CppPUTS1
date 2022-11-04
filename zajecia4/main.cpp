/*
Zadanie do realizacji:
1. Utwórz klasę osoba, która będzie przechowywała elementarne dane osobowe (imię,
nazwisko, data urodzenia, płeć, miasto) oraz pole identyfikatora typu int o nazwie id.
2. Identyfikator danej osoby powinien być unikalny dla każdego obiektu i automatycznie
nadawany w momencie tworzenia obiektu klasy osoba. Ponadto identyfikator powinien być
unikalny bez względu na ilość uruchomień programu. W jaki sposób to zrealizujesz?
3. Utwórz funkcje składowa klasy, która zwróci numer ostatnio nadanego identyfikatora w
klasie osoba. Funkcja powinna być możliwa do wywołania nawet gdy nie istnieje żaden
obiekt klasy osoba.
4. Zdefiniuj wewnątrz klasy osoba konstruktory które umożliwią tworzenie obiektów tej
klasy na okoliczność podania różnych danych nowo tworzonej osoby.
5. Zdefiniuj w klasie osoba funkcję pozwalającą na przedstawienie obiektów z danej klasy..
6. Dodaj do klasy osoba pole które zwróci ilość aktualnie istniejących obiektów klasy osoba.
*/



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
    static int ostatnio_nadany_id();
    void przedstaw();
    static int ile_aktualnie_w_systemie();
};

int osoba::aktualnie_w_systemie;
int osoba::id_ostatniego;

osoba::osoba()
{
    aktualnie_w_systemie++;
    id_ostatniego++;
    id=id_ostatniego;
    imie = "Jacek";
    nazwisko = "Sasin";
    cout << "wprowadz wiek:";
    cin >> wiek;
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

void osoba::przedstaw()
{
	cout << "id: " << id << endl;
	cout << imie << " " << nazwisko << endl;
	cout << wiek;
}

int osoba::ostatnio_nadany_id()
{
	return id_ostatniego;
}

int osoba::ile_aktualnie_w_systemie(){return aktualnie_w_systemie;}

int main()
{
    string temp;
    ifstream wejscie("plik.txt");
    getline(wejscie,temp);
    wejscie.close();
    osoba::id_ostatniego=atoi(temp.c_str());
    osoba::aktualnie_w_systemie=0;

    osoba::info();
    osoba os1;
    osoba::info();


    ofstream wyjscie("plik.txt",ios::trunc);
    wyjscie << osoba::id_ostatniego;
    wyjscie.close();
    return 0;
}
