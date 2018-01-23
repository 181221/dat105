#include <iostream>
#include "Konto.h"
#include ".././resources/std_lib_facilities.h"
#include "Spiller.h"

vector<Spiller> spillere;
void leggTil(){
    spillere.push_back(Spiller(0, "peder", Konto(0, Konto::bitcoin)));
    spillere.push_back(Spiller(1, "Kristoffer", Konto(1, Konto::gullmynt)));
    spillere.push_back(Spiller(2, "Arild", Konto(2, Konto::hackos)));
}

int main() {
    leggTil();
    for(Spiller s: spillere){
        cout << s.getNavn();
    }
    return 0;
}