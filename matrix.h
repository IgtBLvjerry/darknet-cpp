//
// Created by Lvjerry on 2018/10/30.
//

#ifndef DARKNET_CPP_MATRIX_H
#define DARKNET_CPP_MATRIX_H

#include <vector>

class matrix {

public:
//    行数、列数
    int rows, cols;
//    指向矩阵的指针
    float **vals;
    std::vector<std::vector<float >> v_vals;

    matrix make_matrix(int rows, int cols);

    void free_matrix(matrix m);

    void print_matrix(matrix m);

    matrix csv_to_matrix(char *filename);

    void matrix_to_csv(matrix m);

    matrix hold_out_matrix(matrix *m, int n);

    float matrix_topk_accuracy(matrix truth, matrix guess, int k);

    void matrix_add_matrix(matrix from, matrix to);

    void scale_matrix(matrix m, float scale);

    matrix resize_matrix(matrix m, int size);

    float *pop_column(matrix *m, int c);


};


#endif //DARKNET_CPP_MATRIX_H
