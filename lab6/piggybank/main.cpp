#include <iostream>
#include <thread>
#include <mutex>
#include <atomic>
#include "../../resources/std_lib_facilities.h"
#include "time.h"


int bank = 0;

mutex mlock;
void leggTil(int n) {
    if((bank + n) > 0)
        bank += n;
}

int main() {

    vector<std::thread> threads;
    std::srand(time(nullptr));
    for(int i = 0; i < 50; i ++) {
        threads.emplace_back(([i] {
            mlock.lock();
            int v2 = rand() % 100 - 50;
            cout << "Thread id " << this_thread::get_id() << " Balance before: " << bank << endl;
            leggTil(v2);
            cout << "Thread id " << this_thread::get_id() << " Balance after: " << bank << endl;
            mlock.unlock();
        }));
    }

    std::for_each(threads.begin(), threads.end(), [] (std::thread &t ){t.join();});
    
    int v2 = rand() % 100 - 50;
    cout << v2;
    return 0;
}