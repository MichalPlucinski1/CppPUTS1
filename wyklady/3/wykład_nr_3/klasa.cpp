#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class zwierze
{
protected:
	int liczbaLap;
public:
	string imie;
	zwierze()
	{
		liczbaLap = 4; // domyslna wartosc liczby lap
    }
	// Powyzszy konstruktor mozna równiez zapisac w ten sposób:
	//zwierze() : liczbaLap(4) {};
};

class kot : public zwierze
{
private: //nie trzeba pisac "private" poniewaz domyslnie jest to ustawione
	string kolorSiersci;
public:
	kot(string imie_temp, string kolor_siersci_temp) // konstruktor
	{
		imie = imie_temp;
		kolorSiersci = kolor_siersci_temp;
	}
	void setKolorSiersci(string kolor) {kolorSiersci = kolor;}
	string getKolorSiersci()	{return kolorSiersci;}
	int getLiczbaLap();
	~kot();
};

int kot::getLiczbaLap()
{
	return liczbaLap;
}

kot::~kot()
{
	cout << endl << "Likwidacja obiektu klasy kot." << endl;
}

int main()
{
	kot MojKot("Burek", "szary"); // tworzymy obiekt MojKotek o imieniu Burek i szarej siersci

	cout << "Kot ma " << MojKot.getLiczbaLap() << " lapy." << endl;
	cout << "Kot ma na imie " << MojKot.imie << " i " << MojKot.getKolorSiersci() << " kolor siersci." << endl << endl;

	cout << "Farbujemy kota - podaj nowy kolor siersci: ";
	string inny_kolor;
	cin >> inny_kolor;
	getchar();
	//MojKotek.kolorSiersci = kolor_janka; // brak dostepu do sekcji prywatnej
	MojKot.setKolorSiersci(inny_kolor);

	cout << "I nadajemy mu nowe imie: ";
	string nowe_imie;
	cin >> nowe_imie;
	getchar();
	MojKot.imie = nowe_imie; // zmiana wartosci sekcji publicznej

	cout << endl << "Od teraz kot ma na imie " << MojKot.imie;
	cout << " i " << MojKot.getKolorSiersci() << " kolor siersci." << endl;
	cout << "Kot nadal ma " << MojKot.getLiczbaLap() << " lapy!";


	{
	 kot nowykot("x","y");
	}



	getchar();
	return 0;
}
