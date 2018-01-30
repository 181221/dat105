#include <iostream>
#include "Konto.h"
#include ".././resources/std_lib_facilities.h"
#include "Spiller.h"

vector<Spiller> spillere;
vector<Transaksjon> trans;
void leggTil(){
    spillere.push_back(Spiller(0, "peder", Konto(0, Konto::bitcoin), trans));
    spillere.push_back(Spiller(1, "Kristoffer", Konto(1, Konto::bitcoin), trans));
    spillere.push_back(Spiller(2, "Arild", Konto(2, Konto::bitcoin), trans));
}

int main() {

    leggTil();

    for(Spiller s: spillere){
        cout << s.innskudd(1000);
    }

    for(int i = 0; i < spillere.size()-1; i++){
        spillere[i].betal(spillere[i+1], i*23+12/2+6);
    }
    int i = 0;
    for(Spiller s: spillere){
        for(Transaksjon trsk : spillere[i].getTransaksjoner()){
            cout << trsk;
            i++;
        }
    }


    return 0;
}