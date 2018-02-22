//
// Created by pederyo on 21.02.18.
//

#ifndef DOBBELTKJEDETLISTE_DOUBLEKJEDETLISTE_H
#define DOBBELTKJEDETLISTE_DOUBLEKJEDETLISTE_H

#include "ListeADT.h"
#include "Node.h"
template<class T>
class DoubleKjedetListe : public ListeADT<T> {


public:

    DoubleKjedetListe(Node<T> *first, Node<T> *last) : first(first), last(last), count(2) {}

    DoubleKjedetListe() {
        first = nullptr;
        last = nullptr;
        count = 0;
    }


    virtual ~DoubleKjedetListe() {

    }

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


    T *find(T element) override {
        Node<T> *el = first;
        while(el != nullptr){
            if(el->getElement() == element) {
                return el;
            }
            el = el->getNext();
        }
        return nullptr;
    }


    T *remove(T element) override {
        if(!contains(element))
            return nullptr;
        Node<T> *el = find(element);
        el->getPrevious()->setNext(el->getNext());
        el->getNext()->setPrevious(el->getPrevious());
        return el->setPrevious(nullptr), el->setNext(nullptr), el;
    }

    bool contains(T element) override {
        return element == find(element);
    }

    /**
     * Legger til et element så sorterer listen. For enkeltheten skyld.
     * @param element
     * @return
     */
    void leggTil(Node<T> *element) override {
        if(first == nullptr){
            first = element;
        }
        first->setPrevious(element);
        element->setNext(first), element->setPrevious(nullptr);
        first = element;
    }

    int size() override {
        return count;
    }

    void skrivUt() override {
        Node<T> *el = first;
        while (el->getNext()->getElement() != nullptr){
            std::cout << el->getElement()<< endl;
        }
    };



private:

    Node<T> *first;
    Node<T> *last;
    int count;
};


#endif //DOBBELTKJEDETLISTE_DOUBLEKJEDETLISTE_H
