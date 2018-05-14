#include <iostream>
#include "Delt.h"
#include "../../resources/std_lib_facilities.h"

void sekundFunksjon(Delt* d){
    int sekunder = 0;
    while(true) {
        this_thread::sleep_for(chrono::seconds(1));
        sekunder++;
        if (sekunder % 6 == 0) {
            d->minuttTikk();
        } else
            cout << sekunder << "s" << endl;
    }

}
void minuttFunksjon(Delt* d){
    int minutter = 0;
    while(true){
        d->ventPaaTikk();
        minutter++;
        cout << minutter <<"m" << endl;
    }

}
int main() {


    Delt* delt = new Delt();

    thread sekundTraad([delt](){
        int sekunder = 0;
        while(true) {
            this_thread::sleep_for(chrono::seconds(1));
            sekunder++;
            if (sekunder % 6 == 0) {
                delt->minuttTikk();
            } else
                cout << sekunder << "s" << endl;
        }
    });

    thread minuttTraad([delt](){
        int minutter = 0;
        while(true){
            delt->ventPaaTikk();
            minutter++;
            cout << minutter <<"m" << endl;
        }
    });

    //thread sekundTraad(sekundFunksjon, delt);
    //thread minuttTraad(minuttFunksjon, delt);
    sekundTraad.join();
    minuttTraad.join();
    return 0;

}