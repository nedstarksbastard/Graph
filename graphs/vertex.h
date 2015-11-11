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
    std::multimap<int, std::shared_ptr<Vertex>> _adjList;
    
public:
    void addNeighbor(int weight,std::shared_ptr<Vertex> neighbor);
    std::vector<std::pair<int,char>> getConnections();
    char getId();
    int getWeight(Vertex);
    Vertex(char);
    friend bool operator== (Vertex & lhs, Vertex & rhs );
    
};

#endif /* defined(__graphs__vertex__) */
