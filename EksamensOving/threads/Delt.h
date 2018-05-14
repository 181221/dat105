//
// Created by pederyo on 14.05.18.
//

#ifndef THREADS_DELT_H
#define THREADS_DELT_H
#include <iostream>
#include <thread>
#include <mutex>
#include "../../resources/std_lib_facilities.h"

class Delt {
private:
    mutex tikk;
public:
    Delt(){
        tikk.lock();
    }
    void minuttTikk(){
        tikk.unlock();
    }
    void ventPaaTikk(){
        tikk.lock();
    }

};




#endif //THREADS_DELT_H
