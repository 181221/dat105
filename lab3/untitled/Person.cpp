//
// Created by pederyo on 22.02.18.
//

#include "Person.h"


Person::Person(string name, string ename) : name(name), ename(ename){}

Person::Person() {
    name = nullptr;
    ename = nullptr;
}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

const string &Person::getEname() const {
    return ename;
}

void Person::setEname(const string &ename) {
    cout << &ename << endl;
    cout << ename << endl;
    Person::ename = ename;
};

Person::~Person() = default;


