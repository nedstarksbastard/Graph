//
//  vertex.cpp
//  graphs
//
//  Created by Fizi Yadav on 7/25/15.
//  Copyright (c) 2015 Fizi Yadav. All rights reserved.
//

#include "vertex.h"



Vertex::Vertex(char id){
    _id = id;
}

void Vertex::addNeighbor(char neighbor, int weight){
    _adjList.insert(std::map<char, int>::value_type(neighbor, weight));
}

std::vector<char> Vertex::getConnections(){
    std::vector<char> ids;
    for(std::map<char,int>::iterator it = _adjList.begin(); it != _adjList.end(); ++it) {
        ids.push_back(it->first);
    };
    return ids;
}

char Vertex::getId(){
    return _id;
}

int Vertex::getWeight(Vertex v, char neighbor){
    return v._adjList[neighbor];
}
