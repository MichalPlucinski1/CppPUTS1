#include <iostream>
using namespace std;
class a
{
    public:
        a() {cout << "Jestem w konstruktorze klasy a" << endl;};
        virtual ~a(){cout <<"Jestem w denstruktorze klasy a" << endl;};
         void opis() {cout << "Metoda opis klasy a" << endl;};
};
class b : public a
{
    public:
        b() {cout << "Jestem w konstruktorze klasy b" << endl;};;
        ~b(){cout <<"Jestem w denstruktorze klasy b" << endl;};;
        void opis() {cout << "Metoda opis klasy b" << endl;};;
};
int main()
{
    a* wsk_a;

    wsk_a = new a;
    wsk_a->opis();
    delete wsk_a;
    cout << endl << "##############" << endl << endl;
    wsk_a = new b;
    wsk_a->opis();
    delete wsk_a;
    return 0;
}






/*)
  #include <conio.h>
  int los = rand()%5;

if (wsk!=NULL)   wsk->opis();

*/




