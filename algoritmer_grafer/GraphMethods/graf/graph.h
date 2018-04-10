#ifndef FR0316_GRAPH_H
#define FR0316_GRAPH_H

#include "graphadt.h"
#include "../koe/PriorityQueue.h"
#include <stack>
#include <queue>
#include <algorithm>
#include <functional>
#include <set>

class Graph : public GraphADT {

public:
    // General graph methods
    Node* aVertex();
    void insertVertex(Node* n);
    void insertEdge(Node* v, Node* w, int i = 0);
    void removeVertex(Node* n);
    void removeEdge(Edge* e);
    std::vector<Edge*>& incidentEdges(Node* n);
    Node** endVertices(Edge* e);
    Node* opposite(Node* n, Edge* e);
    bool areAdjacent(Node* v, Node* w);

    // Methods for directed edges
    bool isDirected(Edge* e);
    void insertDirectedEdge(Node* v, Node* w, int i = 0);
    Node* origin(Edge* e);
    Node* destination(Edge* e);

    // Generic methods
    int numVertices();
    int numEdges();
    std::vector<Node*>& vertices();
    std::vector<Edge*>& edges();

    // Algorithms
    void depthFirstTraversal(Node* n);
    void breadthFirstTraversal(Node* n);
    std::vector<Edge*> primsAlgorithm();
    void dijkstrasAlgorithm(Node* n);

private:
    void setAllUnvisited();
    std::vector<Node*> verticeList;
    std::vector<Edge*> edgeList;

    Node *selectRandom();
};


Node* Graph::aVertex()
{
    if(verticeList.size() > 0)
        return verticeList.at(0);
    else
        return NULL;
}

void Graph::insertVertex(Node* n)
{
    verticeList.push_back(n);
}

void Graph::insertEdge(Node *v, Node *w, int i)
{
    Edge* e = new Edge(v, w, i);
    edgeList.push_back(e);
    v->edgeList.push_back(e);
    w->edgeList.push_back(e);
}

/**
 * Går gjennom verticeList, finner noden - sletter kanten og noden.
 * @param n
 */
void Graph::removeVertex(Node *n)
{
    bool funnet = false;

    for(int i = 0; i < vertices().size() && !funnet; i++) {

        Node *soek = verticeList.at(i);

        if (soek == n) {

            funnet = true;

            // finner noder som peker på n og sletter kant.
            for (Edge *edge : soek->edgeList) {
                removeEdge(edge);
            }

            verticeList.erase(verticeList.begin() + i); // slett Node fra verticeList
        }
    }

}
/**
 * Går gjennom edgelisten, finner edge og sletter den.
 * Finn node i kanten, hent edgelisten og slett kanten.
 * @param e
 */
void Graph::removeEdge(Edge *e)
{
    bool funnet = false;

    for(int i = 0; i < edgeList.size() && !funnet; i++) {

        Edge *edge = edgeList.at(i);

        if(edge == e) {

            funnet = true;

            // Noder til kanten
            Node *k1 = edge->endpoint[0];

            // fjern kant fra noden edgeList
            for(int j = 0; j <  k1->edgeList.size(); j++) {
                if(k1->edgeList.at(i)->endpoint[1] == k1){
                    k1->edgeList.erase(k1->edgeList.begin() +j);
                }
            }

            // fjern kant fra EdgeList
            edgeList.erase(edgeList.begin()+i);
        }
    }
}

std::vector<Edge*>& Graph::incidentEdges(Node *n)
{
    return n->edgeList;
}

Node** Graph::endVertices(Edge *e)
{
    return e->endpoint;
}

Node* Graph::opposite(Node *n, Edge *e)
{
    if(e->endpoint[0] == n)
        return e->endpoint[1];
    else
        return e->endpoint[0];
}

bool Graph::areAdjacent(Node *v, Node *w)
{
    std::vector<Edge*>::iterator i = v->edgeList.begin();
    while(i != v->edgeList.end()){
        if((*i)->endpoint[0] == w || (*i)->endpoint[1] == w){
            return true;
        }
    }
    return false;
}

bool Graph::isDirected(Edge *e)
{
    return e->isDirected;
}

void Graph::insertDirectedEdge(Node *v, Node *w, int i)
{
    Edge* e = new Edge(v, w, i, true);
    edgeList.push_back(e);
    v->edgeList.push_back(e);
    w->edgeList.push_back(e);
}

Node *Graph::origin(Edge *e)
{
    if(e->isDirected)
        return e->endpoint[0];
    else
        return NULL;
}

Node *Graph::destination(Edge *e)
{
    if(e->isDirected)
        return e->endpoint[1];
    else
        return NULL;
}

int Graph::numVertices()
{
    return verticeList.size();
}

int Graph::numEdges()
{
    return edgeList.size();
}

std::vector<Node*>& Graph::vertices()
{
    return verticeList;
}

std::vector<Edge*>& Graph::edges()
{
    return edgeList;
}

void Graph::depthFirstTraversal(Node* n){
    std::stack<Node*> verticeStack;
    verticeStack.push(n);
    while(!verticeStack.empty()){
        Node* v = verticeStack.top();
        verticeStack.pop();
        if(!v->visited){
            for(std::vector<Edge*>::iterator i = v->edgeList.begin(); i != v->edgeList.end(); i++){
                verticeStack.push(opposite(v, *i));
            }
            std::cout << v->data << " ";
            v->visited = true;
        }
    }
    std::cout << std::endl;
    setAllUnvisited();
}
/**
 * breidde-fyrst(t)
    1) lagKø(q)
    2) q.leggTil(t)
    3) så lenge q ikkje-tom
    4) v = q.taUt()
    5) viss v ikkje er besøkt
    6) legg alle v sine umerka naboar til q
    7) merk v som besøkt
    8) behandle v
    9) gjenta
 * @param n
 */
void Graph::breadthFirstTraversal(Node* n){
    std::queue<Node*> *q = new std::queue<Node*>;
    q->push(n);
    Node *v;
    while (!q->empty()){
        v = q->front();
        if(!v->visited){
            for(std::vector<Edge*>::iterator i = v->edgeList.begin(); i != v->edgeList.end(); i++){
                Node *nabo = opposite(v,*i);
                if(!nabo->visited){
                    q->push(nabo);
                }
            }
            std::cout << v->data << " ";
            v->visited = true;
        }
        q->pop();
    }
    delete(q);
    setAllUnvisited();
}

void Graph::setAllUnvisited()
{
    for(std::vector<Node*>::iterator i = verticeList.begin(); i != verticeList.end(); i++){
        (*i)->visited = false;
    }
}

/*
 *  Here we create a functor class that we can use to create a priority queue for Edges
 */
class CompareEdges
{
public:
    bool operator()(const Edge* e, const Edge* f)
    {
        /* Returns true if edge e has less weight than edge f */
        return e->weight > f->weight;
    }
};

Node* Graph::selectRandom() {
    srand(time(NULL));
    return verticeList.at(rand() % (verticeList.size()-1));

}
class GraphUtil {
public:
    bool EriMST() {
    }
    bool static finnes(std::set<Node*> visited, Edge *e) {
        bool found = (std::find(visited.begin(), visited.end(), e->endpoint[0]) != visited.end());
        bool found1 = (std::find(visited.begin(), visited.end(), e->endpoint[1]) != visited.end());
        return !(found && found1);
    }
};
/**
 * Bruker prioritetskø og ikke heap
 * @return
 */
std::vector<Edge*> Graph::primsAlgorithm()
{
    Node *f = selectRandom();

    PriorityQueue *pq = new PriorityQueue();

    std::vector<Edge*> mst;

    std::set<Node*> visited;

    for(Edge *k : f->edgeList) {
        pq->operator+=(k);
    }

    Edge *e;
    while (!pq->isEmpty()) {
        e = pq->remove();

        if(GraphUtil::finnes(visited, e)){
            if(!(std::find(mst.begin(), mst.end(), e) != mst.end())){
                mst.push_back(e);
            }
            for(Edge *k : e->endpoint[0]->edgeList){
                pq->operator+=(k);
            }
            for(Edge *k : e->endpoint[1]->edgeList){
                pq->operator+=(k);
            }
            visited.insert(e->endpoint[0]);
            visited.insert(e->endpoint[1]);

        }
    }
    return mst;
  }

  /*
   *  Here we create a functor class that we can use to create a priority queue for Nodes
   */
class CompareNodeDistance
{
public:
    bool operator()(const Node* v, const Node* w)
    {
        /* Returns true if node v has shorter path than node w */
        return v->distance < w->distance;
    }
};
void Graph::dijkstrasAlgorithm(Node *n)
{
    std::priority_queue<Node*, std::vector<Node*>, CompareNodeDistance> unvisitedNodes(verticeList.begin(), verticeList.end());

    while(!unvisitedNodes.empty()){
        // find min distance node
        Node* v = unvisitedNodes.top();
        unvisitedNodes.pop();
        v->visited = true;
        for(std::vector<Edge*>::iterator i = v->edgeList.begin(); i != v->edgeList.end(); i++){
            Node* w = opposite(v,*i);
            if(!w->visited){
                int dist = w->distance + (*i)->weight;
                if( dist < w->distance ){
                    w->distance = dist;
                    w->previous = v;
                }
            }
        }
    }
}

#endif // FR0316_GRAPH_H
