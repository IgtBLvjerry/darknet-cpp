//
// Created by Lvjerry on 2018/10/30.
//

#ifndef DARKNET_CPP_TREE_H
#define DARKNET_CPP_TREE_H


#include <string>

class tree {
public:

    int *leaf;
    int n;
    int *parent;
    int *child;
    int *group;
    std::string *name;

    int groups;
    int *group_size;
    int *group_offset;

    tree *read_tree(std::string filename);

//    层次顶端预测
    int hierarchy_top_prediction(float *predictions, tree *hier, float thresh, int stride);

//    层次预测
    void hierarchy_predictions(float *predictions, int n, tree *hier, int only_leaves);

//    改变叶子
    void change_leaves(tree *t, char *leaf_list);

//    获得层次概率
    float get_hierarchy_probability(float *x, tree *hier, int c);


};


#endif //DARKNET_CPP_TREE_H
