//   Created by Damyn Chipman on 9/22/18
//   github: @camperD
//   Copyright © 2018 Damyn Chipman. All rights reserved.
//      FILE:   Matrix.h
//   PROJECT:   Numerical Data Structures

#ifndef Matrix_h
#define Matrix_h

template <class T>
class Matrix {
public:
    
    /*
     *
     */
    Matrix(int rows, int cols) {
        NROWS = rows;
        NCOLS = cols;
        T** data = new T*[NROWS];
        for (int i = 0; i < NROWS; i++) {
            data[i] = new T[NCOLS];
        }
        
    }
    
    T get(int i, int j) {
        return data[i][j];
    }
    
    ~Matrix() {
        for (int i = 0; i < NROWS; i++) {
            delete[] data[i];
        }
        delete[] data;
    }
    
private:
    T** data;
    int NROWS;
    int NCOLS;
};


#endif /* Matrix_h */
