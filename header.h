#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <cstdlib>

using std::rand;
using std::swap;
using std::string;
using std::cout;
using std::endl;

void my_qsort(int * arr, int n);
int * partition(int * left, int *  right, int pivot);

/* HEADER_H */
#endif
