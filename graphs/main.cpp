//
//  main.cpp
//  graphs
//
//  Created by Fizi Yadav on 7/25/15.
//  Copyright (c) 2015 Fizi Yadav. All rights reserved.
//

#include <iostream>
#include "vertex.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Vertex v1('a');
    Vertex v2('b');
    v1.addNeighbor('b', 9);
    for (auto i: v1.getConnections())
        std::cout << i << ' ';
    
    
    
    return 0;
}
