#ifndef SUANFA_MERGESORT_H
#define SUANFA_MERGESORT_H

#include <iostream>
#include <algorithm>
#include "SortTestHelper.h"
#include "InsertionSort.h"

using namespace std;

// 归并的算法，传入左下标，中下标，右下标作为参数，把数组进行二路归并
template<typename T>
void __merge(T arr[], int l, int mid, int r) {

    // 定义一个辅助数组，长度是r-l+1，例如传入的是[3,5,2,1,8,6]，以及三个下标3,4,6，那么aux数组会被初始化成[2,1,8,6]
    T aux[r - l + 1];
    for (int i = l; i <= r; i++)
        aux[i - l] = arr[i];

    // i,j分别保存两个有序子数组的头元素下标
    int i = l, j = mid + 1;

    // k是母数组中待插入的位置
    for (int k = l; k <= r; k++) {

        // 一开始更可能走下面两个分支，直到i与j不断增加，到i突破了mid，或者j突破了r，那么就不用再比较了，只需要把另外的元素依次放进去即可。
        if (i > mid) {
            arr[k] = aux[j - l];
            j++;
        } else if (j > r) {
            arr[k] = aux[i - l];
            i++;
        } else if (aux[i - l] < aux[j - l]) {
            arr[k] = aux[i - l];
            i++;
        } else {
            arr[k] = aux[j - l];
            j++;
        }
    }
}


// 传入数组，左下标，右下标作为参数，进行归并排序，会不断递归
template<typename T>
void __mergeSort(T arr[], int l, int r) {

    if (l >= r) {
        return;
    }

    int mid = (l + r) / 2;
    __mergeSort(arr, l, mid);
    __mergeSort(arr, mid + 1, r);
    if (arr[mid] > arr[mid + 1])        // 优化，如果已经有序，就不用进行二路归并了，如果数组本来就倾向于比较有序，则最好加这个优化
        __merge(arr, l, mid, r);

}

// 归并排序，用户可直接使用
template<typename T>
void mergeSort(T arr[], int n) {
    __mergeSort(arr, 0, n - 1);
}

#endif
