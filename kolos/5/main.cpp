#include<iostream>
using namespace std;



class A{
    public:
    int a1;
    int get_a2(){return a2;}
    void set_a2(int arg){a2 = arg;}
    private:
    int a2;
};

class B : private A{
    public:
    B(){set_a2(5); a1 = 5;}
    void print(){cout << "a1: " << a1<< " a2: " << get_a2();}
};

int main(){
    B b1;
    b1.print();
    return 0;
}