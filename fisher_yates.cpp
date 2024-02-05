#include <iostream>
#include "fisher_yates.h"

void print_array(int ary[], int len) {
    for (int i=0; i<len; i++) {
        std::cout << ary[i] << " ";
    }
    std::cout << std::endl;
}

void swap(int *first, int *second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}