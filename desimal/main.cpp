#include <iostream>
#include "../resources/std_lib_facilities.h"

bool sjekkDesimal(double n) {
    return fmod((n*100000000),1) == 0;
}

int main() {
    double pi = 31212.12349;
    string k = sjekkDesimal(pi) ?  "Ok" : "For mange desimaler";
    cout << k;

    return 0;
}

