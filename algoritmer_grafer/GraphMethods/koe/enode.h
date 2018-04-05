//
// Created by pederyo on 05.04.18.
//

#ifndef FR0316_ENODE_H
#define FR0316_ENODE_H


#include "../edge.h"

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


#endif //FR0316_ENODE_H
