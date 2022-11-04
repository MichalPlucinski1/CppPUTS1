#include <iostream>
#include <typeinfo>
using namespace std;

class CSamolot {
	private:
		string Kolor;
	protected:
		float Masa;
	public:
		int Paliwo;
		CSamolot() {
			Paliwo = 100;
			Masa = 1250;
			Kolor = "zloty";
		}
		void Lec() {cout << "Lece";}
        void zmien_kolor (string arg) {Kolor=arg;}
        void wyswietl_parametry()
        {
         cout << Kolor << " " << Masa << " " <<Paliwo << endl;
        }
};
// klasa pochodna
class CPasazerski :public CSamolot {
	private:
	   int ilosc_pasazerow;
	public:
		void Obsluga()
		{
        cout << "Zapraszam na poklad pasazerow" << endl;
        zmien_kolor("Bialy");
		Lec();
		}
		//void jakas_metoda(){Masa=100;}  // do masy moge sie dostac (sekcja protected)
		//void jakas_metoda(){Kolor="jakis";} // do Koloru nie mam dostêpu (moge zmieniac tylko przez metody z klasy bazowej CSamolot)
};

class CKonkord : public CPasazerski {
	public:
		void Metoda()
		{
         Paliwo=Paliwo*2;
         Masa=Masa-250;
		}
        void Lec()
         {
             cout << "bardzo szybko lece" << endl;
         }
};




int main() {
	CKonkord Konkord;
	CPasazerski Pasazerski;
	CSamolot Samolot;


    string NazwaKlasyObiektu = typeid(Samolot).name();
    cout << "********* " << NazwaKlasyObiektu << " *************" << endl;
    if (NazwaKlasyObiektu=="8CSamolot")
    {
    cout << "Obiekt jest klasy CSamolot !" << endl;
    }



    Samolot.wyswietl_parametry();
    Samolot.Lec();
    cout << endl << "**************" << endl;
    Pasazerski.Obsluga();
    Pasazerski.wyswietl_parametry();
    Pasazerski.Lec();
    cout << endl << "**************" << endl;
    Konkord.Metoda();
    Konkord.wyswietl_parametry();
	Konkord.Lec();
	return 0;
}
