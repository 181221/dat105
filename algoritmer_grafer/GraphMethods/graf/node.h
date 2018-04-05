#ifndef FR0316_NODE_H
#define FR0316_NODE_H
#include <vector>
#include<climits>
#include<cstdlib>
#include "edge.h"
class Edge;
class Node {
public:
    Node(int d) : data(d), visited(false), distance(INT_MAX), previous(NULL){}
    char data;
    bool visited;
    int distance;
    Node* previous;
    std::vector<Edge*> edgeList;
};

#endif // FR0316_NODE_H
