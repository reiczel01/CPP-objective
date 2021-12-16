#ifndef OPORNIK
#define OPORNIK
#include <iostream>
#include "opornik.h"

class Opornik
{
    private:
    double rezistance;

    public:
    Opornik()
    {
        rezistance = 0;
    };

    Opornik(double _rezistance):rezistance(_rezistance)
    {

    };

    void setRezistance(double rezistance){ this->rezistance = rezistance;}

    double getRezistance()const{return rezistance;}

    Opornik operator+ (Opornik& o)
    {
        return Opornik(rezistance+o.getRezistance());

    }

    friend Opornik operator* (Opornik& lhs, Opornik& rhs);

    friend std::ostream& operator<< (std::ostream& o, const Opornik& op);
};

Opornik operator* (Opornik& lhs, Opornik& rhs)
    {
        return Opornik((1.0/lhs.getRezistance())+(1.0/rhs.getRezistance()));
        
    }

std::ostream& operator<< (std::ostream& o, const Opornik& op)
{
    o<< op.getRezistance();
    return o;
}
#endif