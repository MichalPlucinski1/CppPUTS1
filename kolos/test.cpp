#include<iostream>
#include<fstream>
using namespace std;



class Punkt{
    public:
    float x;
    float y;
 
    void setPunkt(){cout << "podaj x: "; cin >> x; cout << "podaj y: "; cin >> y;}

    void zapis(){
        ofstream z("plik.csv");
        z << "Kwadrat " << x << " " << y << endl;
        z.close();
    }
};

int main(){

    Punkt a;
    a.setPunkt();

    a.zapis();
    
    return 0;
}