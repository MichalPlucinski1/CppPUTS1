#include <iostream>
#include<fstream>
void NazwaKlasy::MetodaDane()
   {
    cout << endl << "Podaj imie: ";
    cin >> imie;
    getchar();

    cout << endl << "Podaj nazwisko: ";
    cin >> nazwisko;
    getchar();

    cout << endl << "Podaj Nr telefonu: ";
    cin >> nr_telefonu;
    getchar();

    cout << endl << "Podaj Wiek: ";
    cin >> wiek;
    getchar();

    cout << endl << "Podaj wzrost: ";
    cin >> wzrost;
    getchar();

    cout << endl << "Podaj plec: ";
    cin >> plec;
    getchar();
   };

void NazwaKlasy::MetodaPrzedstaw()
 {
   cout << endl;
   cout << "Witaj" << endl;
   cout << "Nazywam sie " << imie << " " << nazwisko << endl;
   cout << "Nr telefonu: ";
   cout << nr_telefonu;
   cout << endl << "Wiek: ";
   cout << wiek;
   cout << endl << "wzrost: ";
   cout << wzrost;
   cout << endl << "plec: ";
   cout <<  plec;
 };


 void NazwaKlasy::MetodaZapis()
 {
   fstream zapis("dane.txt");

   zapis << imie << endl  << nazwisko << endl;
   zapis << nr_telefonu  << endl;
   zapis << wiek << endl;
   zapis << wzrost << endl;
   zapis <<  plec << endl;
   zapis.close();

 };

  void Search(string szukanyTeleof)
{
   for(int i = 0; i < rozmiar; i++)
   {
      if(osoby[i].nr_telefonu == szukanyTeleof)
      {
         ofstream wypisz("dane.txt");
         osoby[i].MetodaZapis();
         osoby[i].MetodaPrzedstaw();
      }
   }
}
