
#ifndef LAB2_SPILLER_H
#define LAB2_SPILLER_H

#include <ostream>
#include "Konto.h"
#include ".././resources/std_lib_facilities.h"
#include "Transaksjon.h"


class Spiller {
public:

    Spiller(int id, string navn, Konto konto);

    const string &getNavn() const;

    void setNavn(const string &navn);

    double getBeholdning() const;

    Konto::Type getType() const;

    bool innskudd(double n);

    bool uttak(double n);

    int getId() const;

    Spiller::Spiller(int id, string navn, Konto konto, vector<Transaksjon> &transaksjoner) : id(id), navn(navn), konto(konto) , transaksjoner(transaksjoner) {}


    friend ostream &operator<<(ostream &os, const Spiller &spiller);

private:
    int id;
    string navn;
    Konto konto;
    vector<Transaksjon> transaksjoner;


    bool sjekkDesimal(double n);

    bool betal(Spiller &spiller, double belop);
};


#endif //LAB2_SPILLER_H
