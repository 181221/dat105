//
// Created by pederyo on 21.02.18.
//

#ifndef DOBBELTKJEDETLISTE_LISTEADT_H
#define DOBBELTKJEDETLISTE_LISTEADT_H

#include "Node.h"
#include "DoubleKjedetListe.h"



template<class T>
class ListeADT {
public:

    /**
    * Remove the first element in the list
    * and return a pointer to the element.
    */
    virtual T *removeFirst() = 0;

    /**
    * Remove the last element in the list
    * and return a pointer to the element.
    */
    virtual T *removeLast() = 0;

    /**
    * Return a pointer to the first occurrence of the given
    * value in the list.
    */
    virtual T *find(T element) = 0;

    /**
    * Remove the first occurrence of the given value in the list
    * and return a pointer to the element.
    */
    virtual T *remove(T element) = 0;

    /**
    * return a pointer to the first node in the list.
    */
    virtual Node<T> * getFirst() = 0;

    /**
    * Return a pointer to the last node in the list.
    */
    virtual Node<T> *getLast() = 0;

    /**
    * Return true if the given value is found in the list,
    * false otherwise.
    */
    virtual bool contains(T element) = 0;

    /**
    * Return true if the list is empty, false otherwise.
    */
    virtual bool isEmpty() = 0;

    /**
    * Return the number of elements in the list.
    */
    virtual int size() = 0;

    virtual void leggTil(Node<T> *node) = 0;

    virtual void skrivUt() = 0;

    // TODO Sort og iterator

};


#endif //DOBBELTKJEDETLISTE_LISTEADT_H
