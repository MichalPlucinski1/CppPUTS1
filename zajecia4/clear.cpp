#include<iostream>
#include<fstream>

using namespace std;

void cleardata()
{
    ofstream odczyt("plik.txt");
    odczyt.close();
}

int main()
{
    cleardata();
    return 0;
}