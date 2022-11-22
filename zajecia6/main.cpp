#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class zwierze{
    public:
    zwierze(){cout << "k zwierze" << endl;}
    virtual ~zwierze(){cout << "d zwierze" << endl;}
    virtual void opis(){cout << "nazwa: zwierze" << endl;};
};
class ssak: public zwierze{
    public:
    ssak(){cout << "k ssak" << endl;}
    virtual ~ssak(){cout << "d ssak" << endl;}
    virtual void opis(){cout << "nazwa: ssak" << endl;};
};

class czlowiek: public ssak{
    public:
    czlowiek(){cout << "k czlowiek" << endl;}
    ~czlowiek(){cout << "d czlowiek" << endl;}
    void opis(){cout << "nazwa: czlowiek" << endl;};
};

class ptak: public zwierze{
public:
    ptak(){cout << "k ptak" << endl;}
    ~ptak(){cout << "d ptak" << endl;}
    void opis(){cout << "nazwa: ptak" << endl;};
};

zwierze* tworzeniePrzezLos(int i)
{
    zwierze * wsk_z;
    switch (i)
    {
    case 0:
        wsk_z = new zwierze;
        break;
    case 1:
        wsk_z = new ssak;
        break;
    case 2:
        wsk_z = new czlowiek;
        break;    
    case 3:
        wsk_z = new ptak;
        break;
    case 4:
        wsk_z = NULL;
    }
    return wsk_z;
}

int main()
{
    zwierze * wsk_z;
    srand(time(NULL));
    int liczba;
    
    int i = 0;
    cout << "podaj ilosc iteracji:";
    cin >> i;

    while(i > 0)
    {
        liczba = rand() % 5 + 0;
        wsk_z = tworzeniePrzezLos(liczba);
        if(wsk_z != NULL)
        {
            cout << "nie pusty" << endl;
            wsk_z -> opis();
        }
        i--;
    }



    return 0;
}