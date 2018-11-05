//
// Created by Lvjerry on 2018/10/30.
//

#include <cstdio>
#include <cstdlib>
#include <string>
#include <cmath>
#include <cassert>
#include <unistd.h>
#include <cfloat>
#include <climits>
#include <ctime>
#include <sys/time.h>

#include "utils.h"

double what_time_is_it_now() {
    struct timeval time;
    if (gettimeofday(&time, NULL)) {
        return 0;
    }
    return (double) time.tv_sec + (double) time.tv_usec * .000001;
}

int *read_intlist(char *gpu_list, int *ngpus, int d) {
    int *gpus = 0;
    if (gpu_list) {
        int len = strlen(gpu_list);
        *ngpus = 1;
        for (int i = 0; i < len; ++i) {
            if (gpu_list[i] == ',') ++*ngpus;
        }
        gpus = (int *) calloc(*ngpus, sizeof(int));

        for (int i = 0; i < *ngpus; ++i) {
            gpus[i] = atoi(gpu_list);
            gpu_list = strchr(gpu_list, ',') + 1;
        }
    } else {
        gpus = (int *) calloc(1, sizeof(float));
        *gpus = d;
        *ngpus = 1;
    }
    return gpus;
}





