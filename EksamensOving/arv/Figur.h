//
// Created by pederyo on 14.05.18.
//

#ifndef ARV_FIGUR_H
#define ARV_FIGUR_H

#include "string"
class Figur {
public:
    Figur(){
        navn = "\0";
    }
    Figur(const std::string& nvn){
        navn = nvn;
    }
    Figur(const Figur& f){
        navn = f.navn;
    }

    const std::string &getNavn() const {
        return navn;
    }

    virtual double areal() const = 0;

private:
    std::string navn;
};

#endif //ARV_FIGUR_H
