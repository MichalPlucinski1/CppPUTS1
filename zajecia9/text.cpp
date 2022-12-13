#include<iostream>
using namespace std;

void funkcja(void)
{
    int* tab;
    int except;
    tab = new int[1024];
    if (tab==NULL)
    {
    except = 40;
    throw except;
    }
    cout << "dziala";
}

    int main(void)
    {
    try
    {
        funkcja();
    }
    catch (int a)
    {
        cout << "Błąd " << a << endl;
    }
    catch (...)
    {
        cout << "Błąd niezdefiniowany !" << endl;
    }
        cout << "koniec pliku";

    return 0;
}