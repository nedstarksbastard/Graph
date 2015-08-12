//
//  vertex.h
//  graphs
//
//  Created by Fizi Yadav on 7/25/15.
//  Copyright (c) 2015 Fizi Yadav. All rights reserved.
//

#ifndef __graphs__vertex__
#define __graphs__vertex__

#include <stdio.h>
#include <map>
#include <vector>

class Vertex {
    char _id;
    std::map<char, int> _adjList;
    
public:
    void addNeighbor(char neighbor, int weight);
    std::vector<char> getConnections();
    char getId();
    int getWeight(Vertex, char neighbor);
    Vertex(char);
};

#endif /* defined(__graphs__vertex__) */
