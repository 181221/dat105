//
// Created by pederyo on 14.05.18.
//

#ifndef ARV_FIRKANT_H
#define ARV_FIRKANT_H

#include "Figur.h"

class Firkant : public Figur {
public:
    Firkant(void) : Figur("firkant"), lengde(0), hoyde(0){}
    Firkant(double i, double h) : Figur("firkant"), lengde(i), hoyde(h){}
    Firkant(const Firkant& f) : Figur(f), lengde(f.lengde), hoyde(f.hoyde){}

    virtual ~Firkant(){}
    virtual double areal() const;
private:
    double lengde;
    double hoyde;
};

double Firkant::areal() const {
    return lengde*hoyde;
}

#endif //ARV_FIRKANT_H
