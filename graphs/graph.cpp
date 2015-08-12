//
//  graph.cpp
//  graphs
//
//  Created by Fizi Yadav on 7/30/15.
//  Copyright (c) 2015 Fizi Yadav. All rights reserved.
//

#include "graph.h"
#include "vertex.h"
#include <vector>
#include <map>

class Graph {
    std::map<char, int> vertDict;
    int numVertices;
    
public:
    std::vector<char> getVertices(Graph);
    Vertex addVertex(char);
    Vertex getvertex(char);
    void addEdge(char,char,int);
};