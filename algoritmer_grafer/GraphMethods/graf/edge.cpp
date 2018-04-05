//
// Created by pederyo on 05.04.18.
//
#include "edge.h"
Edge::Edge(Node* v, Node* w, int wt, bool d){
    endpoint[0] = v;
    endpoint[1] = w;
    weight = wt;
    isDirected = d;
};