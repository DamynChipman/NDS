//   Created by Damyn Chipman on 9/22/18
//   github: @camperD
//   Copyright © 2018 Damyn Chipman. All rights reserved.
//      FILE:   Matrix.h
//   PROJECT:   Numerical Data Structures

#ifndef Matrix_h
#define Matrix_h

/**
 * @class Matrix<T>
 *
 * @brief Homemade Matrix class for NDS
 * @discussion Employing a 2D dynamic array as the main container, class Matrix
 * is a homemade data structure for matrix operations. More functionality to be
 * added.
 *
 * PUBLIC INTERFACE:
 *
 *  - Matrix(const int rows, const int cols, const T initValue = 0) : CONSTRUCTOR.
 * Builds a dynamic array of size rows X cols. initValue (default to 0) is the default
 * value for all entries to be initialized to.
 *
 *  - T at(const int i, const int j) : Returns data at index i,j.
 *
 *  - void set(const int i, const int j, T value) : Sets index i,j to value.
 *
 *  - ~Matrix() : DESTRUCTOR. Deletes memory of dynamic array.
 *
 * PRIVATE INTERFACE:
 *
 *  - int NROWS_ : Number of rows.
 *
 *  - int NCOLS_ : Number of columns.
 *
 *  - T** data_ : 2D dynamic array container of data.
 *
 */
template <class T>
class Matrix {
public:
    
    /**
     * @function Matrix
     * @brief CONSTRUCTOR.
     * @discussion Builds a dynamic array of size rows X cols. initValue (default to 0) is the default
     * value for all entries to be initialized to.
     * @param rows : const int : Number of rows.
     * @param cols : const int : Number of columns.
     * @param initValue : const T = 0 : Initial value of all entries. Defaults to 0.
     */
    Matrix(const int rows, const int cols, const T initValue = 0) : NROWS_(rows), NCOLS_(cols) {
        // Create dynamic array
        data_ = new T*[NROWS_];
        for (size_t i = 0; i < NROWS_; i++) {
            data_[i] = new T[NCOLS_];
        }
        
        // Set all to initValue
        for (size_t i = 0; i < NROWS_; i++) {
            for (size_t j = 0; j < NCOLS_; j++) {
                data_[i][j] = initValue;
            }
        }
    }
    
    /**
     * @function at
     * @brief Gets data at index i,j
     * @param i : const int : Row index.
     * @param j : const int : Col index.
     * @returns T data_[i][j] : Data at index i,j
     * @warning Does not currently handle out of bounds.
     */
    T at(const int i, const int j) { return data_[i][j]; }
    
    /**
     * @function set
     * @brief Sets entry at i,j to value
     * @param i : const int : Row index.
     * @param j : const int : Col index.
     * @param value : T : Value to set.
     */
    void set(const int i, const int j, T value) { data_[i][j] = value; }
    
    /**
     * @function ~Matrix
     * @brief DESTRUCTOR.
     * @discussion Deletes memory of dynamic array.
     */
    ~Matrix() {
        for (size_t i = 0; i < NROWS_; i++) {
            delete [] data_[i];
        }
        delete [] data_;
    }
    
private:
    
    const int NROWS_; // Number of rows.
    const int NCOLS_; // Number of columns.
    T** data_; // 2D dynamic array container.
};


#endif /* Matrix_h */
