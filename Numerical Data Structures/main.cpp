//   Created by Damyn Chipman on 9/22/18
//   github: @camperD
//   Copyright © 2018 Damyn Chipman. All rights reserved.
//      FILE:   main.cpp
//   PROJECT:   Numerical Data Structures

#include <iostream>
#include "Matrix.h"

int main(int argc, const char * argv[]) {
    
    int rows = 3;
    int cols = 3;
    
    Matrix<int> values(rows, cols);
    std::cout << values.get(1, 1) << std::endl;
    
    return 0;
}
