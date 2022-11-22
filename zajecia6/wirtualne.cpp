#include <iostream>
using namespace std;
class a
{
    public:
        a() {cout << "Jestem w konstruktorze klasy a" << endl;};
        virtual ~a(){cout <<"Jestem w denstruktorze klasy a" << endl;};
        virtual void opis(void) {cout << "Metoda opis klasy a" << endl;};
};
class b : public a
{
    public:
        b() {cout << "Jestem w konstruktorze klasy b" << endl;};;
        ~b(){cout <<"Jestem w denstruktorze klasy b" << endl;};;
        void opis(void) {cout << "Metoda opis klasy b" << endl;};;
};


class c
{
    public:
        c() {cout << "Jestem w konstruktorze klasy c" << endl;};
         ~c(){cout <<"Jestem w denstruktorze klasy c" << endl;};
         void opis(void) {cout << "Metoda opis klasy c" << endl;};
};

class d : public c
{
    public:
        d() {cout << "Jestem w konstruktorze klasy d" << endl;};;
        ~d(){cout <<"Jestem w denstruktorze klasy d" << endl;};;
        void opis(void) {cout << "Metoda opis klasy d" << endl;};;
};
int main()
{
    a *wsk_a;
    wsk_a = new a;
    wsk_a->opis();
    delete wsk_a;
    cout << "Koniec A" << endl;
    wsk_a = new b;
    wsk_a->opis();
    delete wsk_a;
   
    cout << "koniec B" << endl;


    c *wsk_c;
    wsk_c = new c;
    wsk_c->opis();
    delete wsk_c;

    cout << "Koniec C" << endl;
    wsk_c = new d;
    wsk_c->opis();
    delete wsk_c;
    return 0;

}