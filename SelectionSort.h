#ifndef SUANFA_SELECTIONSORT_H
#define SUANFA_SELECTIONSORT_H

#include <iostream>
#include <algorithm>
#include <string>
#include "SortTestHelper.h"

using namespace std;

template <typename T>
void selectionSort(T arr[], int n) {
    for (int i=0; i<n; i++) {
        int minIndex = i;
        for (int j=i+1; j<n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

#endif
