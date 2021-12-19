#ifndef kondesator
#define kondesator
#include <iostream>
#include "kondesator.h"

class Kondesator
{
    private:
    double capacity;

    public:
    Kondesator()
    {
        capacity = 0;
    };

    Kondesator(double _capacity):capacity(_capacity)
    {

    };

    void setcapacity(double capacity){ this->capacity = capacity;}

    double getcapacity()const{return capacity;}

    Kondesator operator* (Kondesator& o)
    {
        return kondesator(capacity+o.getcapacity());

    }

    friend Kondesator operator+ (Kondesator& lhs, Kondesator& rhs);

    friend std::ostream& operator<< (std::ostream& o, const Kondesator& op);
};

Kondesator operator+ (Kondesator& lhs, Kondesator& rhs)
    {
        return Kondesator((1.0/lhs.getcapacity())+(1.0/rhs.getcapacity()));
        
    }

std::ostream& operator<< (std::ostream& o, const Kondesator& op)
{
    o<< op.getcapacity();
    return o;
}
#endif