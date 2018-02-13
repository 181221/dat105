//
// Created by peder on 23.01.2018.
//

#include "Transaksjon.h"

Transaksjon::Transaksjon(int fraId, int tilId, double belop, string filnavn) : fraId(fraId), tilId(tilId), belop(belop), filnavn(filnavn) {
    ofstream writer(filnavn, ios::app);
    if (! writer)
    {
        cout << "Error opening file" << endl;
    }
    writer << *this << endl;
    writer.close();
}

Transaksjon::~Transaksjon() = default;

int Transaksjon::getFraId() const {
    return fraId;
}


int Transaksjon::getTilId() const {
    return tilId;
}


double Transaksjon::getBelop() const {
    return belop;
}

const string &Transaksjon::getFilnavn() const {
    return filnavn;
}

void Transaksjon::setFilnavn(const string &filnavn) {
    Transaksjon::filnavn = filnavn;
}

std::ostream &operator<<(std::ostream &os, const Transaksjon &transaksjon) {
    os << "fraId: " << transaksjon.fraId << " tilId: " << transaksjon.tilId << " belop: " << transaksjon.belop;
    return os;
}


