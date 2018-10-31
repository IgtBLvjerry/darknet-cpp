//
// Created by Lvjerry on 2018/10/30.
//

#ifndef DARKNET_CPP_LIST_H
#define DARKNET_CPP_LIST_H


class node {
public:
//    下一个节点
    node *next;
//    上一个节点
    node *prev;
    //    节点的值
    void *val;


};

class list {
public:
//    列表的节点数
    int size;
//    头节点
    node *front;
//    尾节点
    node *back;

    list *make_list();

    int list_find(list *l, void *val);

    void list_insert(list *, void *);

    void **list_to_array(list *l);

    void free_list(list *l);

    void free_list_contents(list *l);

    void free_list_contents_kvp(list *l);

    void *list_pop(list *l);
};


#endif //DARKNET_CPP_LIST_H
