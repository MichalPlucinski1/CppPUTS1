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
    static int osoba_z_kolei;
    int id; // 1
    int wiek; // 2
    string imie; // 3
    string nazwisko; // 4
    static void info();
    void przedstaw(); 
    void zapis();
};

int osoba::aktualnie_w_systemie;

osoba::osoba()
{
    id = aktualnie_w_systemie + 1;
    aktualnie_w_systemie++;
    
    cout << endl << "Podaj imie: ";
    cin >> imie;
    getchar();

    cout << endl << "Podaj nazwisko: ";
    cin >> nazwisko;
    getchar();

    cout << endl << "Podaj wiek: ";
    cin >> wiek;
    getchar();
}

osoba::~osoba()
{
    cout << "Jestem w destruktorze !" << endl;
    aktualnie_w_systemie--;
}

void osoba::info()
{
    cout<<"Dotychczas utworzono: "<<osoba::aktualnie_w_systemie <<  " obiektow"<<endl;
    cout<<"Obecnie w systemie mamy: "<<osoba::aktualnie_w_systemie<< " obiektow" <<endl;
}
void osoba::zapis()
 {
   fstream zapis("plik.txt", ios::app);

   zapis << id << " "<< imie << " "  << nazwisko << " " << wiek << endl;
   zapis.close();
 };



void iloscosob()
{
   
    ifstream wejscie("plik.txt");
    string temp;
    osoba::aktualnie_w_systemie = 0;

    while(getline(wejscie, temp))
    {
       osoba::aktualnie_w_systemie++;
    }
    wejscie.close();
    int ile = osoba::aktualnie_w_systemie;
    cout << "ilosc osob w systemie: " << ile << endl;
    
}

int main()
{
    iloscosob();
    osoba osoba1;
    osoba1.zapis();

    osoba osoba2;
    osoba2.zapis();
    iloscosob();
    
    // tworzymy osoby





    /*
    ofstream wyjscie("plik.txt",ios::trunc);
    wyjscie << osoba::aktualnie_w_systemie;
    wyjscie.close();
    return 0;
    */
}
