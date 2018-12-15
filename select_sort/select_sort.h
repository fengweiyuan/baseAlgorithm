#ifndef BASEALGORITHM_SELECT_SORT_H
#define BASEALGORITHM_SELECT_SORT_H

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
/**
 * 选择排序
 * 时间复杂度O(n^2)
 */
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
