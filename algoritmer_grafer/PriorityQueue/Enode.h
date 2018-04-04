//
// Created by pederyo on 04.04.18.
//

#ifndef PRIORITYQUEUE_ENODE_H
#define PRIORITYQUEUE_ENODE_H


#include "edge.h"

class Enode {

public:
    Enode(Edge *edge);

    virtual ~Enode();

    Edge *getEdge() const;

    void setEdge(Edge *edge);

    Enode *getNext() const;

    void setNext(Enode *next);

private:
    Edge *edge;
    Enode *next;
};


#endif //PRIORITYQUEUE_ENODE_H
