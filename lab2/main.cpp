#include <iostream>
#include "Konto.h"
#include ".././resources/std_lib_facilities.h"
#include "Spiller.h"

vector<Spiller> spillere;

void leggTil(){

    spillere.push_back(Spiller(0, "peder", Konto(0, Konto::bitcoin)));
    spillere.push_back(Spiller(1, "Kristoffer", Konto(1, Konto::bitcoin)));
    spillere.push_back(Spiller(2, "Arild", Konto(2, Konto::bitcoin)));
}

int main() {

    leggTil();

    for(Spiller &s: spillere){
        cout << s.innskudd(1000);
    }

    cout << endl;

    for(int i = 0; i < spillere.size()-1; i++){
        spillere[i].betal(spillere[i+1], i);
    }


    for(Spiller &s: spillere){
        for(Transaksjon trsk : s.getTransaksjoner()){
            cout << trsk << endl;
        }
    }

    cout << spillere[0].innskudd(1.12345678) << endl;

    cout << spillere[0].innskudd(-100) << endl;

    cout << "beholdning: " << spillere[0].getBeholdning() << endl;

    cout << "Overforer... "<< spillere[0] + spillere[1] << endl;

    cout << "beholdning: " << spillere[0].getBeholdning() <<endl;

    return 0;
}