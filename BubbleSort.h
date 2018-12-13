#ifndef SUANFA_BUBBLESORT_H
#define SUANFA_BUBBLESORT_H



/**
 * 冒泡排序
 */
template <typename T>
void bubbleSort(T arr[], int n) {
    int i, j, flag;                       // 分别是内循环计数，外循环计数，以及是否已经没有交换了的标记
    for (i = 0; i < n - 1; i ++) {        // 外循环需要循环n次
        flag = 0;                         // 一开始假定为不需要进行交换
        for (j = 0; j < n - 1 - i; j++) { // 因为外循环进行了多少次，就有多少个元素已经冒泡到尾端，尾端的那部分元素不用再对比
            if (arr[j] > arr[j+1]) {
                flag = 1;                 // 进行了交换
                swap(arr[j], arr[j+1]);
            }
        }
        if (flag == 0) break;           //如果一次内循环并没有发生交换，说明已经排好了，可以break出外循环了
    }
}
#endif

