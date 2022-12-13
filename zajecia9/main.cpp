#include<iostream>
using namespace std;

class Wyjatek
{
    int numer;
    string opis;
    public:
    Wyjatek(int _numer, string _opis){numer = _numer;opis = _opis;}
    ~Wyjatek(){cout << "destruktor Wyjatku";}
    int getNum(){return this->numer;};
    string getOpis(){return this->opis;}
};

class Stos{
    int * tablica;
    public:
    Stos(){tablica = new int[10]; cout << "Konstruktor stosu\n";}
    ~Stos(){delete[] tablica; cout << "Destruktor stosu";}

    void push(int arg, int i){
        if(i > 9)
        {
            Wyjatek* wyjatek = new Wyjatek(1, "blad metody push");
            cout << "catch pusha" << endl;
            throw wyjatek;
        }
        tablica[i] = arg;
    }

    int pop(int i){
        if(i > 9)
        {
            Wyjatek* wyjatek = new Wyjatek(2, "blad metody pop");
            cout << "catch pop" << endl;
            throw wyjatek;

        }
        return tablica[i];
    }

};


class Symulacja{
    Stos *stos;
    public:
    Symulacja(){
        cout << "Konstruktor symulacja" << endl;
        stos = new Stos();
    }
    ~Symulacja(){
        cout << "destruktor Symulacja" << endl;
        delete stos;
    }

    void symulacja();
};

void Symulacja::symulacja(){
    for(int i = 0; i <=10; i++)
    {
        try{
            stos->push(i, i);
        }
        catch(Wyjatek *w)
        {
            if(w != NULL)
            {
                cout << "Blad numer" << w->getNum() << " opis: " << w->getOpis() << endl;
                delete w;
            }
            else{cout << "wskaz pusty" << endl;}
        }
        catch(...){cout << "inny blad" << endl;}

        
    }

    for(int i = 0; i <=10; i++)
    {
        try{
            cout << stos->pop(i);
        }
        catch(Wyjatek *w)
        {
            if(w != NULL)
            {
                cout << "Blad numer" << w->getNum() << " opis: " << w->getOpis() << endl;
                delete w;
            }
            else{cout << "wskaz pusty" << endl;}
        }
        catch(...){cout << "inny blad" << endl;}
    }
}

 int main()
 {

    Symulacja symulacja;    
    symulacja.symulacja();


    return 0;
 }