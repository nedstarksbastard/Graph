//
//  graph.cpp
//  graphs
//
//  Created by Fizi Yadav on 7/30/15.
//  Copyright (c) 2015 Fizi Yadav. All rights reserved.
//

#include "graph.h"

void Graph::addVertex(char id){
    std::shared_ptr<Vertex> pv = std::make_shared<Vertex>(id);
    _vertDict.insert(std::map<char, std::shared_ptr<Vertex>>::value_type(id, pv));
    _numVertices++;
}

void Graph::addEdge(char id1, char id2, int weight){
    std::map<char, std::shared_ptr<Vertex>>::iterator it1 = _vertDict.find(id1);
    std::map<char, std::shared_ptr<Vertex>>::iterator it2 = _vertDict.find(id2);
    if (it1 == _vertDict.end() || it2 == _vertDict.end()) {
        return;
    }else{
        it1->second->addNeighbor(weight, it2->second);
    }
}

std::shared_ptr<Vertex> Graph::getvertex(char id){
    std::map<char, std::shared_ptr<Vertex>>::iterator it = _vertDict.find(id);
    if (it != _vertDict.end()) {
        return  it->second;
    }else{
        return nullptr;
    }
}

std::vector<char> Graph::getVertices(){
    std::vector<char> ids;
    for (std::map<char, std::shared_ptr<Vertex>>::iterator iter = _vertDict.begin(); iter != _vertDict.end(); ++iter){
        ids.push_back(iter->first);
    }
    return ids;
}

int Graph::getWeight(char id1, char id2){
    std::map<char, std::shared_ptr<Vertex>>::iterator it1 = _vertDict.find(id1);
    std::map<char, std::shared_ptr<Vertex>>::iterator it2 = _vertDict.find(id2);
    if (it1 != _vertDict.end() && it2 != _vertDict.end()) {
        return it1->second->getWeight(*it2->second);
    }else{
        return -1;
    }
}







