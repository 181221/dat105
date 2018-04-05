//
// Created by pederyo on 05.04.18.
//

#ifndef FR0316_PRIORITYQUEUE_H
#define FR0316_PRIORITYQUEUE_H


#include "../edge.h"
#include "enode.h"

class PriorityQueue {
public:

    PriorityQueue();

    virtual ~PriorityQueue();

    void add(Edge *el);

    Edge *remove();

    bool isEmpty();

    int getSize() const;

    Enode *getFirst() const;

    void setFirst(Enode *first);

    Enode *getLast() const;

    void setLast(Enode *last);

    void operator+=(Edge *edge);


private:
    Enode *first;
    Enode *last;
    int size;

};



#endif //FR0316_PRIORITYQUEUE_H
