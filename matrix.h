//
// Created by Lvjerry on 2018/10/30.
//

#ifndef DARKNET_CPP_MATRIX_H
#define DARKNET_CPP_MATRIX_H


class matrix {

public:
    int rows, cols;
    float **vals;

    matrix make_matrix(int rows, int cols);

    void free_matrix(matrix m);

    void print_matrix(matrix m);

    matrix csv_to_matrix(char *filename);

    void matrix_to_csv(matrix m);

    matrix hold_out_matrix(matrix *m, int n);

    float matrix_topk_acurracy(matrix truth, matrix guess, int k);

    void matrix_add_matrix(matrix from, matrix to);

    void scale_matrix(matrix m, float scale);

    matrix resize_matrix(matrix m, int size);

    float *pop_column(matrix *m, int c);


};


#endif //DARKNET_CPP_MATRIX_H
