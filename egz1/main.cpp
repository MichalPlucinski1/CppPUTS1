/*W pętli głównej programu utwórz obiekty wszystkich czterech, utworzonych wcześniej klas
(polecenia 3-6). Na każdym obiekcie wywołaj metodę dzialaj() aby zaprezentować
wirtualność..*/


#include<iostream>

using namespace std;



class laptop{
    public:
    float przekatna_ekranu;
    float waga;

    laptop(){
        this->przekatna_ekranu = 15.6;
        this->waga = 2.4;
        cout << "Laptop zostal utworzony.";
    }

};


class stacjonarny{
    public:
    float przekatna_ekranu;
    float moc_zasialcza;

    stacjonarny(){
        this->przekatna_ekranu = 24.0;
        this->moc_zasialcza = 800.0;
        cout << "Komputer stacjonarny utworzony.";
    }

};

class biurowy{
    protected:
    laptop* wskaznik;
    public:
    virtual void dzialaj(){cout << "Dzialam w biurze";}

    biurowy(){wskaznik = new laptop;}
    ~biurowy(){delete wskaznik; cout <<"Destruktor klasy biurowy"; }
};


class do_gier:public biurowy{
    protected:
    stacjonarny* wskaznik2;

    public:
    void dzialaj(){
        cout << "dzialam, by grac";
        }
    do_gier(){wskaznik2 = new stacjonarny;}
    ~do_gier(){delete wskaznik2; cout <<"Destruktor klasy komputer do gier";}

    void granie(){cout << "Witaj,chcesz zagrać w grę?";}

};



class telewizor:public biurowy{

    public:
    void dzialaj(){
        cout << "Dzialam i oglądam TV";
        }
    void ogladaj(){cout << "Ogladanie telewizji to marnowanie czasu";}

};

class radio:public biurowy{

    public:
    void dzialaj(){
        cout << "Dzialam i slucham radia";
        }
    void sluchaj(){cout << "Najczesciej radia słuchamy w samochodzie";}

};




int main()
{
    biurowy* tab[4];

    tab[0] = new biurowy;
    tab[1] = new do_gier;
    tab[2] = new telewizor;
    tab[3] = new radio;

    for(int i = 0; i < 4; i++)
    {
        tab[i]->dzialaj();
    }


    return 0;
}