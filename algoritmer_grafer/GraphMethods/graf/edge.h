#ifndef FR0316_EDGE_H
#define FR0316_EDGE_H


#include "node.h"
class Node;
class Edge {

public:

    Edge(Node* v, Node* w, int wt = 0, bool d = false);

    Edge(bool isDirected, int weight, Node **endpoint);

    bool isDirected;
    int weight;
    Node* endpoint[2];
};




#endif // FR0316_EDGE_H
