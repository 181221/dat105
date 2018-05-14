//
// Created by pederyo on 14.05.18.
//

#ifndef PRIORITETSKOE_PRIORITYQUEUE_H
#define PRIORITETSKOE_PRIORITYQUEUE_H

#include "../../resources/std_lib_facilities.h"

template <class T>
class PriorityQueue {
public:
    void push(T const& t);

    void pop();

    T top() const;

    bool compare(T t, T t1);


    bool empty() const {
        return elems.empty();
    }
    void printQueue();

private:
    deque<T> elems;
};

template<class T>
void PriorityQueue<T>::push(const T& t) {
    int i = 0;
    for(T el : elems) {
        if(compare(t,el))
            i++;
    }
    elems.insert(elems.begin()+i, t);
}

template<class T>
void PriorityQueue<T>::pop() {
    if(!empty())
        elems.pop_front();
}

template<class T>
T PriorityQueue<T>::top() const {
    if(empty())
        throw "Que is empty exception";
    return elems.front();
}

template<class T>
bool PriorityQueue<T>::compare(T t, T t1) {
    return t > t1;
}

template<class T>
void PriorityQueue<T>::printQueue() {
    for(T t: elems){
        cout << t << " ";
    }
    cout << endl;
}


#endif //PRIORITETSKOE_PRIORITYQUEUE_H
