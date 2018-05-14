#include <iostream>

#include "../../resources/std_lib_facilities.h"
#include <thread>
#include "mutex"
class Delt {
private:
    mutex tikk;
public:
    Delt(){
        tikk.lock();
    }
    void minuttTikk(){
        tikk.unlock();
// Todo
    }
    void ventPaaTikk(){
        while(!tikk.try_lock()){
            cout << "trylock ok" << endl;
        }
// Todo
    }
    void lock(){
        tikk.lock();
    }
    void unlock(){
        tikk.unlock();
    }
};

void hei(Delt* d){
    d->unlock();
    d->lock();
    for(int i = 0; i < 10000; i++) {
        cout << "hei fra tråd " << 0 << endl;
        if(i == 5) {
           d->unlock();
        }
    }
}
void heiEn(Delt* d) {
    d->lock();
    for(int i = 0; i < 10000; i++) {
        cout << "hei fra tråd " << 1 << endl;

    }
    d->unlock();
}

int main() {
    Delt* delt = new Delt();
    thread sekundTraad(hei, delt);
    thread sekundMin(heiEn, delt);
    sekundTraad.join();
    sekundMin.join();
    return 0;
}