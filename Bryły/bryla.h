#ifndef MY_CLASS
#define MY_CLASS


#include <iostream>
#include <cmath>
/*
kula
V = 4/3 πr³
P=4πr2

prostopadłościan
d=a2+b2+h2−−−−−−−−−−√
V=a*b*c
Pc=2ab+2ac+2bc=2(ab+ac+bc)

ostrosłup
Pc=Pp+Pb
V=13⋅Pp⋅H
*/
class Bryla
{
    private:

    public:
    
    virtual float pole()=0; //czystowirtualna

    virtual float obj()=0;

    virtual float prze()=0;
};

class Kula : public Bryla
{
    private:
    float r;

    public:
    Kula(float r_):r(r_)
    {
    } 

    virtual float pole()
    {
        return 4.0*M_PI*(r*r);
    }

    virtual float obj()
    {
        return (3.0/4.0)*M_PI*(r*r*r);
    }

    virtual float prze()
    {
        return r*2.0;
    }
};

class Prost : public Bryla
{
    private:
    float a;
    float b;
    float c;
    float h;

    public:
    Prost(float a_, float b_, float c_, float h_):a(a_), b(b_), c(c_), h(h_)
    {
    }

    virtual float pole()
    {
        return 2.0*(a*b+a*c+b*c);
    }

    virtual float obj()
    {
        return a*b*c;
    }

    virtual float prze()
    {
        return sqrt(a*a+b*b+h*h);
    }
};

class Ostr : public Bryla
{
    private:
    float Pb;
    float Pp;
    float h;

    public:
    Ostr(float Pb_, float Pp_, float h_):Pb(Pb_), Pp(Pp_), h(h_)
    {
    }

    virtual float pole()
    {
        return Pp+Pb;
    }

    virtual float obj()
    {
        return (1.0/3.0)*Pb*h;
    }

    virtual float prze()
    {
        return 0;
    }
};

#endif