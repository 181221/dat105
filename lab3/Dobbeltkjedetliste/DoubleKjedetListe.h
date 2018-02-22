//
// Created by pederyo on 21.02.18.
//

#ifndef DOBBELTKJEDETLISTE_DOUBLEKJEDETLISTE_H
#define DOBBELTKJEDETLISTE_DOUBLEKJEDETLISTE_H

#include "ListeADT.h";
#include "Node.h";
template<class T>
class DoubleKjedetListe : public ListeADT<T> {


public:

    DoubleKjedetListe(Node<T> *first, Node<T> *last) : first(first), last(last), count(0) {}

    DoubleKjedetListe() {
        first = nullptr;
        last = nullptr;
        count = 0;
    }


    virtual ~DoublyLinkedList() = default;

    T *removeFirst() override {
        return first->getNext()->setPrevious(nullptr), first;
    }

    T *removeLast() override {
        return last->getPrevious()->setNext(nullptr), last;
    }

    Node<T> *getFirst() override {
        return first;
    }

    Node<T> *getLast() override  {
        return last;
    }


    T *find() override {
        return nullptr;
    }

    T *remove() override {
        return nullptr;
    }


private:

    Node<T> *first;
    Node<T> *last;
    int count;

};


#endif //DOBBELTKJEDETLISTE_DOUBLEKJEDETLISTE_H
