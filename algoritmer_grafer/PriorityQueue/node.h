#ifndef NODE_H
#define NODE_H
#include <vector>
#include<climits>
#include<cstdlib>
#include "edge.h"

class Node {
public:
    Node() {}

    Node(int d) : data(d), visited(false), distance(INT_MAX), previous(NULL){}
    char data;
    bool visited;
    int distance;
    Node* previous;
};

#endif // NODE_H
