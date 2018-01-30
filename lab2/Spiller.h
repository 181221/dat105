
#ifndef LAB2_SPILLER_H
#define LAB2_SPILLER_H

#include <ostream>
#include "Konto.h"
#include ".././resources/std_lib_facilities.h"
#include "Transaksjon.h"


class Spiller {
public:

    const string &getNavn() const;

    void setNavn(const string &navn);

    double getBeholdning() const;

    Konto::Type getType() const;

    bool innskudd(double n);

    bool uttak(double n);

    int getId() const;

    bool betal(Spiller &spiller, double belop);

    const Vector<Transaksjon> &getTransaksjoner() const;

    Spiller(int id, const string &navn, const Konto &konto, const Vector<Transaksjon> &transaksjoner);

    friend ostream &operator<<(ostream &os, const Spiller &spiller);

private:

    int id;

    string navn;

    Konto konto;

    vector<Transaksjon> transaksjoner;


    bool sjekkDesimal(double n);

};


#endif //LAB2_SPILLER_H
