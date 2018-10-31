//
// Created by Lvjerry on 2018/10/30.
//

#include "list.h"

//  create list
list *list::make_list() {
    list *l = new list();
    l->size = 0;
    l->back = 0;
    l->front = 0;

    return l;
}
// insert node
template <typename T>
void list::list_insert(list *l, T val) {
    node *newNode = new node();
    newNode->val = val;
    newNode->next = 0;

    if (!l->back) {
        l->front = newNode;
        newNode->prev = 0;
    } else {
        l->back->next = newNode;
        newNode->prev = l->back;
    }
    l->back = newNode;
    ++l->size;
}

// delete back node
void *list::list_pop(list *l) {
    node *b = l->back;
    if (!l->back)return 0;

    void *val = b->val;
    l->back = b->prev;
    if (l->back)l->back->next = 0;
    delete b;
    --l->size;
    return val;
}

// 释放节点
void free_node(node *n) {
    node *next;
    while (n) {
        next = n->next;
        delete n;
        n = next;
    }
}

// 释放列表
void list::free_list(list *l) {
    free_node(l->front);
    delete l;
}

// 清空列表内容
void list::free_list_contents(list *l) {
    node *n = l->front;
    while (n) {
        delete n->val;
        n = n->next;
    }
}

void** list::list_to_array(list *l) {

}