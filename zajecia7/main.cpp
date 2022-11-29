#include<iostream>
using namespace std;

class element{
    public:
    string nazwa;
    protected:
    int prad;
    int napiecie;
    public:
    virtual void wymuszenie(int, int) = 0;
    friend int obwod(element* arg1, element* arg2)
    {
        if(arg1->prad == arg2->prad)
        {
            if(arg1->napiecie == arg2->napiecie)
            {
                return 3;
            }
            else
            return 2;
        }
        else return 1;
    }

};

class rezystor: public element{
    int rezystancja;
    public:
    rezystor();
    void wymuszenie(int arg_prad=0, int arg_napiecie=0){
        prad=arg_prad;
        napiecie= arg_napiecie;
        cout << "Jestem elementem klasy REZYSTOR" << endl;
        cout << "Mam U =" << napiecie << "oraz I =" << prad << endl;
        }


};
 rezystor::rezystor(){
    cout << "Podaj nazwe rezystora:";
    cin >>this->nazwa;
    cout <<"Podaj  rezystancje:";
    cin >> this->rezystancja;
}




class cewka: public element{
    int indukcyjnosc;
    public:
    cewka();
    void wymuszenie(int arg_prad=0, int arg_napiecie=0){
        prad=arg_prad;
        napiecie= arg_napiecie;
        cout << "Jestem elementem klasy Cewka" << endl;
        cout << "Mam U =" << napiecie << "oraz I =" << prad << endl;
        }
};
cewka::cewka()
{
    cout << "Podaj nazwe cewki:";
    cin >>this->nazwa;
    cout <<"Podaj  indukcyjnosc:";
    cin >> this->indukcyjnosc;
}

class kondensator : public element{
    int pojemnosc;
    public:
    kondensator();
    void wymuszenie(int arg_prad=0, int arg_napiecie=0){
        prad=arg_prad;
        napiecie= arg_napiecie;
        cout << "Jestem elementem klasy Kondensator" << endl;
        cout << "Mam U =" << napiecie << "oraz I =" << prad << endl;
        }
};

kondensator::kondensator(){
    cout << "Podaj nazwe kondensatora:";
    cin >>this->nazwa;
    cout <<"Podaj  pojemnosc:";
    cin >> this->pojemnosc;
}



int main()
{
    const int rozmiar = 3;
    element* tab[3];
    tab[0] = new cewka;
    tab[0]->wymuszenie(1,1);
    tab[1] = new rezystor;
    tab[1]->wymuszenie(2,1);
    tab[2] = new cewka;
    tab[2]->wymuszenie(1,2);

    obwod(tab[0], tab[1]);
    for(int i = 0; i < rozmiar; i++)
    {
        for(int j = 0; j < rozmiar; j++)
        {
            if(i == j)
                continue;
             
            switch (obwod(tab[i], tab[j]))
            {
            case 1:
                cout << "element " << i <<" z elementem " << j <<"jest polaczona szeregowo" << endl;
                break;
            case 2:
                cout << "element " << i <<" z elementem " << j <<"jest polaczona rownolegle" << endl;
                break;
            case 3:
            cout << "element " << i <<" z elementem " << j <<"maja identyczne prady i napiecia" << endl;
            break;
            default:
                break;
            }
        }
    }

    return 0;
}