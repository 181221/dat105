//
// Created by pederyo on 03.04.18.
//

#ifndef PRIORITYQUEUE_PRIORITYQUEUE_H
#define PRIORITYQUEUE_PRIORITYQUEUE_H


#include "edge.h"
#include "../../resources/std_lib_facilities.h"
#include "Enode.h"

class PriorityQueue
{

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


#endif //PRIORITYQUEUE_PRIORITYQUEUE_H
