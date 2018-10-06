//   Created by Damyn Chipman on 9/22/18
//   github: @camperD
//   Copyright © 2018 Damyn Chipman. All rights reserved.
//      FILE:   main.cpp
//   PROJECT:   Numerical Data Structures

#include <iostream>
#include "Matrix.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    int rows = 3;
    int cols = 3;
    Matrix<float> mat(rows, cols);
    
    mat.set(1,2,2.5);
    cout << mat.at(1,2) << endl;
    
    return 0;
}
