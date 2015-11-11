//
//  graph.h
//  graphs
//
//  Created by Fizi Yadav on 7/30/15.
//  Copyright (c) 2015 Fizi Yadav. All rights reserved.
//

#ifndef __graphs__graph__
#define __graphs__graph__

#include <stdio.h>
#include <vector>
#include <map>
#include "vertex.h"


class Graph {
    std::map<char, std::shared_ptr<Vertex>> _vertDict;
    int _numVertices;
    
public:
    Graph(){};
    std::vector<char> getVertices();
    void addVertex(char);
    std::shared_ptr<Vertex> getvertex(char);
    void addEdge(char,char,int);
    int getWeight(char,char);
};

#endif /* defined(__graphs__graph__) */
