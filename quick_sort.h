#ifndef SUANFA_QUICK_SORT_H
#define SUANFA_QUICK_SORT_H

#include <iostream>


/**
 * 将某个（通常是第一个）元素放置在中间，左边的都小于它，右边的都大于它，然后返回该中间元素的下标
 * 返回p，使得arr[l...p-1]都小于等于arr[p]；使得arr[p+1...r]都大于等于arr[p]
 */
template <typename T>
int __partition(T arr[], int l, int r) {

    // 优化，不要总是选定第一个元素做标定，而是随机选，选出来后，与最左边的元素交换一下，即达到了随机选的效果
    swap( arr[l], arr[ ( rand() % (r-l+1) ) + l ] );

    // 此时v是标定值
    T v = arr[l];

    // 循环过程中一直保持这个性质：arr[l+1...j]<v； arr[j+1...i) > v
    int j = l;
    for (int i = l + 1; i <= r; i ++) {
        // 往后推进的过程中，发现有比标定值小的，就把下标为i的值换到左边去
        if (arr[i] < v) {
            swap(arr[j+1], arr[i]);
            j++;
        }
        // 如果arr[i]等于v的话，也是什么也不用做，继续考察下一个元素即可
        // 如果arr[i]是大于v的话，什么都不用做，继续考察下一个元素即可
    }

    // 把标定元素与下标为j的地方换一下位置，使得标定元素在中间
    swap(arr[l], arr[j]);
    return j;
}

template <typename T>
int __partition2(T arr[], int l, int r) {

    swap( arr[l], arr[ ( rand() % (r-l+1) ) + l ] );

    T v = arr[l];

    // arr[l+1...i] <=v;  arr[j...r] >= v;
    int i = l + 1;
    int j = r;

    while (true) {

        while (arr[i] < v && i <= r) i++;
        while (arr[j] > v && j >= i + 1) j--;

        if (i > j) break;

        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    swap(arr[l], arr[j]);
    return j;
}



/**
 * 对arr[l...r]部分进行快速排序
 */
template <typename T>
void __QuickSort(T arr[], int l, int r) {

    // 递归到底的情况
    if (l >= r) {
        return;
    }

    int p = __partition(arr, l, r);         // 获取中间元素的下标
    __QuickSort(arr, l, p-1);               // 对左子数组进行排序（递归）
    __QuickSort(arr, p+1, r);               // 对右子数组进行排序（递归）
}

/**
 * 对arr[l...r]部分进行快速排序
 */
template <typename T>
void __QuickSort2(T arr[], int l, int r) {

    // 递归到底的情况
    if (l >= r) {
        return;
    }

    int p = __partition2(arr, l, r);         // 获取中间元素的下标
    __QuickSort2(arr, l, p-1);               // 对左子数组进行排序（递归）
    __QuickSort2(arr, p+1, r);               // 对右子数组进行排序（递归）
}



/**
 * 对数组进行快速排序
 */
template <typename T>
void QuickSort(T arr[], int n) {
    __QuickSort(arr, 0, n-1);    //调用私有的递归函数
}

/**
 * 双路快速排序，优化
 */
template <typename T>
void QuickSort2(T arr[], int n) {
    __QuickSort2(arr, 0, n-1);    //调用私有的递归函数
}





#endif
