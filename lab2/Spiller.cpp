
#include "Spiller.h"
#include "Konto.h"

const string &Spiller::getNavn() const {
    return navn;
}

void Spiller::setNavn(const string &navn) {
    Spiller::navn = navn;
}

double Spiller::getBeholdning() const {
    return konto.getBeholdning();
}

Konto::Type Spiller::getType() const {
    return konto.getType();
}


/**
 * Returnerer true hvis antall desimalerer er under 8
 */
bool Spiller::sjekkDesimal(double i) {
    int a = 0;
    if (i < 0)
        i *= -1;
    else if (i == 0)
        i = 1;

    while (i > 0) {
        i /= 10;
        a++;
    }
    return a < 8;
}



bool Spiller::innskudd(double n) {
    if (konto.getType() == Konto::bitcoin) {
        return sjekkDesimal(n) ? konto.innskudd(n) : false;
    }
    return konto.innskudd(n);
}

bool Spiller::uttak(double n) {
    if (konto.getType() == Konto::bitcoin) {
        return sjekkDesimal(n) ? konto.uttak(n) : false;
    }
    return konto.uttak(n);
}

bool Spiller::betal(Spiller &spiller, double belop) {
    if (konto.getType() == spiller.getType()) {
        return uttak(belop) &&
               (transaksjoner.push_back(Transaksjon(id, spiller.getId(), belop)), spiller.innskudd(belop));
    }
    return false;
}

ostream &operator<<(ostream &os, const Spiller &spiller) {
    os << "id: " << spiller.id << " navn: " << spiller.navn << " konto: " << spiller.konto;
    return os;
}

int Spiller::getId() const {
    return id;
}

Spiller::Spiller(int id, string navn, Konto konto, vector<Transaksjon> &transaksjoner) : id(id), navn(navn), konto(konto) , transaksjoner(transaksjoner) {}



