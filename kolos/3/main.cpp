#include<iostream>
using namespace std;


void fun(string arg)
{

    for(int i = arg.length() - 1; i>=0; i--)
    {
        cout << arg[i];
    }
}
int main()
{
    string str = "asdf";
    fun(str);

    return 0;
}
