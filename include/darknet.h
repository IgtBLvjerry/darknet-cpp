//
// Created by Lvjerry on 2018/11/1.
//

#ifndef DARKNET_CPP_DARKNET_H
#define DARKNET_CPP_DARKNET_H

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>

#include <pthread.h>
#include <thread>

#ifdef __cplusplus
extern "C" {
#endif
const int SECRET_NUM = -1234;

class metadata{
public:
    int classes;
    std::string * name;

    virtual metadata get_metadate(std::string file);
};


#ifdef __cplusplus
}
#endif // __cplusplus

#endif //DARKNET_CPP_DARKNET_H
