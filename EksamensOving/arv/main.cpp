#include <iostream>
#include "Figur.h"
#include "Firkant.h"
#include "Person.h"
int main() {
    Figur *f1 = new Firkant(10,10);
    std::cout << f1->areal() << std::endl;
    std::cout << f1->getNavn() << std::endl;
    Person *p1 = new Person("peder", "wiig");
    std::cout << p1->getNavn() << std::endl;

    delete(p1);

    delete(f1);
    return 0;
}