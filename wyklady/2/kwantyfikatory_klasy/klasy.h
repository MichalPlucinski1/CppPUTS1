// definicje klas

class Rectangle
{
 private:
    float wysokosc;
    float szerokosc;
 protected:
    float x;
    float y;
 public:
    Rectangle();
    float zmienna_deklarowana_w_public_klasy_rectangle;
    float Pole() const;
    float Obwod() const;
 };

Rectangle obiekt1;

class Square :public Rectangle // :protected i private spowoduja zmiane specyfikatorow
// dziedziczonych zmiennych na odpowiednio protected lub private.
// Public nic nie zmienia i nie mozna go pominac - domyslnie jest private !!
{
 private:
    float dlugosc_boku;
 public:
    Square();
    float Pole() const;
    float Obwod() const;
};

Square obiekt2;

//  --- metody klasy Rectangle ---//

float Rectangle::Pole() const
{
 return wysokosc*szerokosc;
}

float Rectangle::Obwod() const
{
 return 2*wysokosc + 2*szerokosc;
}

Rectangle::Rectangle()
{
zmienna_deklarowana_w_public_klasy_rectangle=3000;
wysokosc = 10.0;
szerokosc = 20.0;
x = 0;
y = 0;
};

//  --- metody klasy Square ---//

float Square::Pole() const
{
 return dlugosc_boku*dlugosc_boku;
}

float Square::Obwod() const
{
 return 4*dlugosc_boku;
}

Square::Square()
{
zmienna_deklarowana_w_public_klasy_rectangle=1000;
dlugosc_boku = 5.0;
x=1; // sekcje chroniona dziedzicze
//wysokosc=1; sekcja prywatna nie jest dziedziczona !
};


