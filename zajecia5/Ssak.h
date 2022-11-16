#pragma once
#include "zwierze.h"

class Ssak: public Zwierzak{
    public:
    Ssak();
    void Biegaj();

};

class Lew: public Ssak{
public:
    Lew();
};

class Pies:Ssak{

};
class Slon:Ssak{

};
