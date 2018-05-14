//
// Created by pederyo on 14.05.18.
//

#ifndef PRIORITETSKOE_OBJEKT_H
#define PRIORITETSKOE_OBJEKT_H

#include <string>
#include <iostream>

class Objekt{
public:

    Objekt() : prioritering(0), navn(""){}
    Objekt(int p, std::string n) : prioritering(p),navn(n){}


    bool operator>(Objekt &lhs)  {
        return lhs.prioritering > prioritering;
    }

    friend std::ostream& operator<<(std::ostream& os,  const Objekt& obj){
        os << obj.prioritering << " ";
        return os;
    }

private:
    int prioritering;
    std::string navn;

};

#endif //PRIORITETSKOE_OBJEKT_H
