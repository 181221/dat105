
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
 * Returnerer true hvis antall desimalerer er mindre eller lik 8
 */
bool Spiller::sjekkDesimal(double n) {
    return fmod((n * 100000000), 1) == 0;
}

bool Spiller::innskudd(double n) {
    if (konto.getType() == Konto::bitcoin) {
        return sjekkDesimal(n) && konto.innskudd(n);
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
               (transaksjoner.push_back(Transaksjon(id, spiller.getId(), belop, "transaksjoner.txt")), spiller.innskudd(
                       belop));
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

const vector<Transaksjon> &Spiller::getTransaksjoner() const {
    return transaksjoner;
}

Spiller::Spiller(int id, string navn, const Konto &konto) : id(id),
                                                                   navn(navn),
                                                                   konto(konto) {}

bool Spiller::operator+(const Spiller &s) {
    return betal(*this, this->getBeholdning());
}





