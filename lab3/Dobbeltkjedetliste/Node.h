//
// Created by pederyo on 21.02.18.
//

#ifndef DOBBELTKJEDETLISTE_NODE_H
#define DOBBELTKJEDETLISTE_NODE_H

template<class T>
class Node {
public:
    Node() {
        next = nullptr;
        previous = nullptr;
        element = nullptr;

    }

    Node(T element, Node<T> *next, Node<T> *previous) : element(element), next(next),
    previous(previous) {}

    T *getElement() const {
        return element;
    }

    void setElement(T *element) {
        Node::element = element;
    }

    Node<T> *getNext() const {
        return next;
    }

    void setNext(Node<T> *next) {
        Node::next = next;
    }

    Node<T> *getPrevious() const {
        return previous;
    }

    void setPrevious(Node<T> *previous) {
        Node::previous = previous;
    }

private:
    T *element;
    Node<T> *next;
    Node<T> *previous;

};


#endif //DOBBELTKJEDETLISTE_NODE_H
