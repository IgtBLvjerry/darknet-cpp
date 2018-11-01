//
// Created by Lvjerry on 2018/10/30.
//
#include <iostream>
#include <cstdlib>
#include <string>
#include <cassert>
#include <cmath>
#include "matrix.h"
#include "utils.h"

using namespace std;


float matrix::matrix_topk_accuracy(matrix truth, matrix guess, int k) {

}

matrix matrix::hold_out_matrix(matrix *m, int n) {}
float* matrix::pop_column(matrix *m, int c) {}
matrix matrix::csv_to_matrix(char *filename) {}
void matrix::matrix_to_csv(matrix m) {}

void matrix::scale_matrix(matrix m, float scale) {

    int i;
    int j;
    for (i = 0; i < m.rows; ++i) {
        for (j = 0; j < m.cols; ++j) {
            m.vals[i][j] *= scale;

            m.v_vals[i][j] *= scale;
        }
    }

}

matrix matrix::make_matrix(int rows, int cols) {
    matrix m;

    int i;
    m.cols = cols;
    m.rows = rows;
//    init vector
    for (i = 0; i < m.rows; ++i) {
        for (int j = 0; j < m.cols; ++j) {
            m.v_vals[i][j] = 0;
        }
    }

//      init float**
    m.vals = new float *[m.rows];
    for (i = 0; i < m.rows; ++i) {
        m.vals[i] = new float[m.cols];
    }

    return m;
}


void matrix::matrix_add_matrix(matrix from, matrix to) {
    try {
        if (from.cols != to.cols && from.rows != to.rows) {
            throw "matrix1 != matrix2 ...";
        }
        for (int i = 0; i < from.rows; ++i) {
            for (int j = 0; j < from.cols; ++j) {
                to.vals[i][j] += from.vals[i][j];

                to.v_vals[i][j] += from.v_vals[i][j];
            }
        }


    } catch (const string str) {
        cout << str << endl;
    }

}

matrix matrix::resize_matrix(matrix m, int size) {
    int i;
    if (m.rows == size) {
        return m;
    } else if (m.rows < size) {
        realloc(m.vals, size);
        for (int i = m.rows; i < size; ++i) {
            m.vals[i] = new float[m.cols];
        }
    } else if (m.rows > size) {
        for (i = size; i < m.rows; ++i) {
            delete m.vals[i];
        }
        realloc(m.vals, size);
    }
    m.rows = size;
    return m;
}

void matrix::free_matrix(matrix m) {
    int i;
    for (i = 0; i < m.rows; ++i) {
        delete m.vals[i];
    }
    delete m.vals;

}

void matrix::print_matrix(matrix m) {

    int i, j;
    cout << m.rows << "X" << m.cols << "Matrix:" << endl;
    cout << " __";
    for (j = 0; j < 16 * m.cols - 1; ++j) cout << " ";
    cout << "__" << endl;
    cout << "|  ";
    for (j = 0; j < 16 * m.cols - 1; ++j) cout << " ";
    cout << "  |" << endl;

    for (i = 0; i < m.rows; ++i) {
        cout << "|  ";
        for (j = 0; j < m.cols; ++j) {
            cout << m.vals[i][j] << " ";

        }
        cout << " |" << endl;
    }
    cout << "|__";
    for (j = 0; j < 16 * m.cols - 1; ++j) cout << " ";
    cout << "__|" << endl;

}