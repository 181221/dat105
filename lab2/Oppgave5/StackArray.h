//
// Created by pederyo on 19.02.18.
//

#ifndef OPPGAVE5_STACKARRAY_H
#define OPPGAVE5_STACKARRAY_H


#include "StackADT.h"

template<class T>
class StackArray : public StackADT<T> {
public:

    StackArray();

    explicit StackArray(int size);

    ~StackArray() = default;

    void push(T element) override;

    T pop() override;

    T peek() override;

    bool isEmpty() override;

    int size() override;

private:

    const int STDK = 100;
    int top;
    T stack;
    int stacksize;

    void extend();
};


#endif //OPPGAVE5_STACKARRAY_H
