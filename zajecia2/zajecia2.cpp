#include<iostream>
#include<fstream>

using namespace std;

class klasa{};

struct Kontakty
{
string imie;
string nazwisko;
int wiek;
string telefon;
klasa k;
};

const int rozmiar = 2;
Kontakty Tablica[rozmiar];



void WprowadzImie(int nr)
{
    cout << "Podaj imie: ";
    cin >> Tablica[nr].imie;
}
void WprowadzNazwisko(int nr)
{
    cout << "Podaj nazwisko: ";
    cin >> Tablica[nr].nazwisko;
}
void WprowadzWiek(int nr)
{
    cout << "Podaj wiek: ";
    cin >> Tablica[nr].wiek;
}
void WprowadzTelefon(int nr)
{
    cout << "Podaj telefon: ";
    cin >> Tablica[nr].telefon;
}




void WprowadzDane(int nr)
{
    WprowadzImie(nr);
    WprowadzNazwisko(nr);
    WprowadzWiek(nr);
    WprowadzTelefon(nr);
}

void WyswietlDane(int i)
{
    cout << "imie: " << Tablica[i].imie << " ";
    cout << "nazwisko: " << Tablica[i].nazwisko << " ";
    cout << "wiek: " << Tablica[i].wiek << " ";
    cout << "telefon: " << Tablica[i].telefon << " ";

}

void Zapis()
{
    ofstream zapis("Kontakty.txt", ios::app);
    for(int i = 0; i < rozmiar; i++)
    {
        zapis << Tablica[i].imie <<endl;
        zapis << Tablica[i].nazwisko <<endl;
        zapis << Tablica[i].wiek <<endl;
        zapis << Tablica[i].telefon <<endl;
    }
    zapis.close();

}



void Odczyt()
{
    ifstream odczyt("Kontakty.txt");
    while(!(odczyt.eof()))
    {

        odczyt >> Tablica[i].imie;
        odczyt >> Tablica[i].nazwisko;
        odczyt >> Tablica[i].wiek;
        odczyt >> Tablica[i].telefon;
    }
    odczyt.close();

}

int main()
{

    Odczyt();
    for(int i = 0; i <
    rozmiar; i++)
        WprowadzDane(i);

    for(int i = 0; i < rozmiar; i++)
        WyswietlDane(i);
    Zapis();

    return 0;
}
