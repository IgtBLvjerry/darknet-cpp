//
// Created by Lvjerry on 2018/10/30.
//

#ifndef DARKNET_CPP_LIST_H
#define DARKNET_CPP_LIST_H


class node {
    void *val;
    node *next;
    node *prev;
};

class list {
public:
    int size;
    node *front;
    node *back;

    list *make_list();

    int list_find(list *l, void *val);

    void list_insert(list *, void *);

    void **list_to_array(list *l);

    void free_list(list *l);

    void free_list_contents(list *l);

    void free_list_contents_kvp(list *l);
};


#endif //DARKNET_CPP_LIST_H
