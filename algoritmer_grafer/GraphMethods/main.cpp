#include <iostream>
#include "graph.h"

using namespace std;

std::ostream& operator<<(std::ostream& os, const Edge* e){
    os << "(" << e->endpoint[0]->data << ", " <<  e->endpoint[1]->data << ")";
    return os;
}

template <class T>
void printVector(vector<T> v){
    for(typename vector<T>::iterator i = v.begin(); i != v.end(); i++){
        cout << *i << endl;
    }
}

int main()
{
    Graph graf;
    Node* e = new Node('e');
    Node* f = new Node('f');
    Node* g = new Node('g');
    Node* h = new Node('h');
    Node* c = new Node('c');
    Node* k = new Node('k');

    graf.insertVertex(e);
    graf.insertVertex(f);
    graf.insertVertex(g);
    graf.insertVertex(h);
    graf.insertVertex(c);
    graf.insertVertex(k);


    graf.insertEdge(g,h,2);
    graf.insertEdge(e,f,1);
    graf.insertEdge(f,g,2);
    graf.insertEdge(c,f,10);
    graf.insertEdge(e,g,3);
    graf.insertEdge(k,f,3);


    int antall = graf.vertices().size();
    for(int i = 0; i < antall; i++ ) {
        Node *h = graf.vertices().at(i);
        cout << h->data << " " << h->edgeList.size() << endl;
    }

    cout << ""  << endl;

    graf.removeVertex(f);




    //graf.depthFirstTraversal(f);
    //graf.breadthFirstTraversal(f);
    //vector<Edge*> v = graf.primsAlgorithm();
    //printVector(v);
    //graf.dijkstrasAlgorithm(e);

    return 0;
}

