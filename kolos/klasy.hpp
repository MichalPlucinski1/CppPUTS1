#include<iostream>
#include<fstream>
using namespace std;
class Wektor{

    public:
    float x;
    float y;
    
    Wektor(float _x, float _y){x = _x; y = _x;}
    
};

class Punkt{
    public:
    float x;
    float y;
 
    void setPunkt(){cout << "podaj x: "; cin >> x; cout << "podaj y: "; cin >> y;}

    void zapis(){
        ofstream z("plik.csv");
        z << "Kwadrat " << x << " " << y;
        z.close();
    }
};

class Figury{
    virtual void abstrakcjaxd() = 0;
};

class Wielokat : public Figury{
};

class Prostokat : public Wielokat{

    Punkt* wierzcholek1 = new Punkt;
    Punkt* wierzcholek2 = new Punkt;
    Punkt* wierzcholek3 = new Punkt;
    Punkt* wierzcholek4 = new Punkt;
    public:
    float dlugosc;
    float wysokosc;
    Prostokat(float d, float w){dlugosc = d; wysokosc = w; wierzcholek1->setPunkt();}
    void wyswietl(){cout <<"d:" << dlugosc <<" w:" <<
     wysokosc << endl;}
};

class Trojkat : public Wielokat{
    public:
    float dlugosc;
    float wysokosc;
    Trojkat(float d, float w){dlugosc = d; wysokosc = w;}
    void wyswietl(){cout <<"d:" << dlugosc <<" w:" <<
     wysokosc << endl;}
};
// przypadku możliwości definiowania figury na dwa sposoby (np. dla kwadratu wierzchołek w formie punktu i
// długość boku, albo wierzchołek w formie 2 współrzędnych i długość boku) zrealizuj dwa konstruktory.
class Kwadrat{
    
    public:
    float dlugosc;
    Kwadrat(Punkt* pkt, float dl){
    };
    Kwadrat(float x, float y, float dl);
    void wyswietl(){cout <<"d:" << dlugosc << endl;}
};

//4. Przeciąż operator dodawania dla klasy do obsługi punktu tak, aby realizował translacje punktu o wektor. Dla klasy figury zdefiniuj metodę translacji o wektor podany na dwa sposoby jako obiekt klasy punkt, jako dwa argumenty zmiennoprzecinkowe odpowiadające współrzędnym wektora translacji. Przetestuj operatory w kodzie.

//5. Zrealizuj metodę zapisu danych do pliku dla obiektów figur w postaci - jedna figura - jedna linia dokumentu csv. Weź pod uwagę konieczność rozróżniania figur. Przetestuj zapis w kodzie. Dla klasy wielokąta zrealizuj metodę dodawania kolejnych wierzchołków do wielokąta.

