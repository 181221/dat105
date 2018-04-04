//
// Created by pederyo on 22.02.18.
//

#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H

#include "../../resources/std_lib_facilities.h"

class Person {
public:

    Person();

    Person(string name, string ename);

    virtual ~Person();

    const string &getName() const;

    void setName(const string &name);

    const string &getEname() const;

    void setEname(const string &ename);

private:
    string name;
    string ename;

};


#endif //UNTITLED_PERSON_H
