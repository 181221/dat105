//
// Created by peder on 23.01.2018.
//

#ifndef LAB2_TRANSAKSJON_H
#define LAB2_TRANSAKSJON_H

#include ".././resources/std_lib_facilities.h"
#include <ostream>

class Transaksjon {

public:

    int getFraId() const;

    int getTilId() const;

    double getBelop() const;

    const string &getFilnavn() const;

    void setFilnavn(const string &filnavn);

    Transaksjon(int fraId, int tilId, double belop, string filnavn);

    ~Transaksjon();

    friend std::ostream &operator<<(std::ostream &os, const Transaksjon &transaksjon);

private:

    int fraId;

    int tilId;

    double belop;

    string filnavn;

};


#endif //LAB2_TRANSAKSJON_H
