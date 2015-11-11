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

void Vertex::addNeighbor(int weight,std::shared_ptr<Vertex> neighbor){
    _adjList.insert(std::multimap<int, std::shared_ptr<Vertex>>::value_type(weight, neighbor));
}

std::vector<std::pair<int,char>> Vertex::getConnections(){
    std::vector<std::pair<int,char>> ids;
    for(std::multimap<int, std::shared_ptr<Vertex>>::iterator it = _adjList.begin(); it != _adjList.end(); ++it) {
        ids.push_back(std::make_pair(it->first, it->second->_id));
    };
    return ids;
}

char Vertex::getId(){
    return _id;
}


int Vertex::getWeight(Vertex v){
    for(std::multimap<int, std::shared_ptr<Vertex>>::iterator it = _adjList.begin(); it != _adjList.end(); ++it) {
        if (*it->second==v) {
            return it->first;
        };
    };
    return -1;
}

bool operator== (Vertex & lhs, Vertex & rhs ){
    return (lhs.getId() == rhs.getId()) ;

}
