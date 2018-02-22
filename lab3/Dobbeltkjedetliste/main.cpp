#include <iostream>
#include "../../resources/std_lib_facilities.h"
#include "Node.h"
#include "DoubleKjedetListe.h"

int main() {
    string el = "hei paa deg";
    string el3 = "du";
    string el4 = "paa";
    auto *node2 = new Node<string>(el3, nullptr, nullptr);
    auto *node1 = new Node<string>(el, nullptr, nullptr);
    node1->setNext(node2), node2->setPrevious(node1);

    auto *k = new DoubleKjedetListe::DoubleKjedetListe();
    auto *kjedetList = new DoubleKjedetListe::DoubleKjedetListe(node1, node2);
    kjedetList->skrivUt();

    return 0;
}