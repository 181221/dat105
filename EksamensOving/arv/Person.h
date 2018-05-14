//
// Created by pederyo on 14.05.18.
//

#ifndef ARV_PERSON_H
#define ARV_PERSON_H

#include <string>
class Person{
public:
    Person() : navn(""), etternavn(""){}
    Person(std::string navn, std::string etternavn) : navn(navn), etternavn(etternavn){}

    const std::string& getNavn() const{
        return navn;
    }

    const std::string &getEtternavn() const {
        return etternavn;
    }


private:
    std::string navn;
    std::string etternavn;

};

#endif //ARV_PERSON_H
