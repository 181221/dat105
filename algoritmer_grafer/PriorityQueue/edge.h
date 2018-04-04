#ifndef EDGE_H
#define EDGE_H


#include "node.h"

class Edge {

public:

    Edge(int weight) : weight(weight) {}

    virtual ~Edge() = default;

    Edge(Node* v, Node* w, int wt = 0, bool d = false);
    bool isDirected;
    int weight;
    Node* endpoint[2];

};


#endif // EDGE_H
