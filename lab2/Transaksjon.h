//
// Created by peder on 23.01.2018.
//

#ifndef LAB2_TRANSAKSJON_H
#define LAB2_TRANSAKSJON_H


#include <ostream>

class Transaksjon {

public:

    int getFraId() const;

    int getTilId() const;

    double getBelop() const;

    Transaksjon(int fraId, int tilId, double belop);

    ~Transaksjon();

    friend std::ostream &operator<<(std::ostream &os, const Transaksjon &transaksjon);

private:

    int fraId;

    int tilId;

    double belop;

};


#endif //LAB2_TRANSAKSJON_H
