//
// Created by pederyo on 04.04.18.
//

#include "Enode.h"


Enode::Enode(Edge *edge) : edge(edge), next(nullptr) {}

Enode::~Enode() {

}

Edge *Enode::getEdge() const {
    return edge;
}

void Enode::setEdge(Edge *edge) {
    Enode::edge = edge;
}

Enode *Enode::getNext() const {
    return next;
}

void Enode::setNext(Enode *next) {
    Enode::next = next;
}
