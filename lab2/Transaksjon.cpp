//
// Created by peder on 23.01.2018.
//

#include "Transaksjon.h"

Transaksjon::Transaksjon(int fraId, int tilId, double belop) : fraId(fraId), tilId(tilId), belop(belop) {}

Transaksjon::~Transaksjon() {

}

int Transaksjon::getFraId() const {
    return fraId;
}


int Transaksjon::getTilId() const {
    return tilId;
}


double Transaksjon::getBelop() const {
    return belop;
}

std::ostream &operator<<(std::ostream &os, const Transaksjon &transaksjon) {
    os << "fraId: " << transaksjon.fraId << " tilId: " << transaksjon.tilId << " belop: " << transaksjon.belop;
    return os;
}


