//
//  main.cpp
//  graphs
//
//  Created by Fizi Yadav on 7/25/15.
//  Copyright (c) 2015 Fizi Yadav. All rights reserved.
//

#include <iostream>
#include "vertex.h"
#include "graph.h"

int main(int argc, const char * argv[]) {
    // insert code here...
//    Vertex v1('a');
//    v1.addNeighbor(9, std::make_shared<Vertex>('b'));
//    v1.addNeighbor(6, std::make_shared<Vertex>('c'));
//    for (auto i: v1.getConnections())
//        std::cout << i.second << ':'<< i.first <<'\n';
    
    Graph g;
    g.addVertex('a');
    g.addVertex('b');
    g.addVertex('c');
    g.addEdge('a', 'b', 9);
    g.addEdge('a', 'c', 5);
    for (auto i: g.getVertices())
        std::cout << i <<'\n';
    
    std::shared_ptr<Vertex> v1;
    v1 = g.getvertex('a');
    for (auto i: v1->getConnections())
        std::cout << i.second << ':'<< i.first <<'\n';
    std::cout<< g.getWeight('a', 'b')<<std::endl;
    std::cout<< g.getWeight('a', 'c')<<std::endl;
    std::cout<< g.getWeight('a', 'd')<<std::endl; //doesn't exist, returns -1
    return 0;
}
