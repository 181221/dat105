#include <iostream>
#include "edge.h"
#include "PriorityQueue.h"

int main() {
    auto *e1 = new Edge(10);
    auto *e2 = new Edge(1);
    auto *e3 = new Edge(9);
    auto *e4 = new Edge(7);
    auto *e5 = new Edge(3);
    auto *e6 = new Edge(20);

    auto *pq = new PriorityQueue();

    pq->add(e1);
    pq->add(e2);
    pq->add(e3);
    pq->add(e4);
    pq->add(e5);
    pq->operator+=(e6);

    cout << pq->remove()-> weight << endl;
    cout << pq->remove()-> weight << endl;
    cout << pq->remove()-> weight << endl;
    cout << pq->remove()-> weight << endl;
    cout << pq->remove()-> weight << endl;
    cout << pq->remove()-> weight << endl;

    delete(pq);







    return 0;
}