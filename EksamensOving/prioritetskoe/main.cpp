#include <iostream>
#include "../../resources/std_lib_facilities.h"
#include "priorityqueue.h"
#include "Objekt.h"


int main() {
    PriorityQueue<Objekt> q2;
    Objekt o1(1,"peder");
    Objekt o2(5,"pedr");
    Objekt o3(2,"per");
    Objekt o4(8,"pr");
    Objekt o5(4,"peeer");

    q2.push(o1);
    q2.push(o2);
    q2.push(o3);
    q2.push(o4);
    q2.push(o5);
    q2.printQueue();
    q2.pop();
    q2.pop();
    q2.pop();
    q2.pop();
    q2.pop();
    cout << q2.top()<< endl;
    return 0;
}