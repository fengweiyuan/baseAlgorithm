#ifndef SUANFA_INSERTIONSORT_H
#define SUANFA_INSERTIONSORT_H


/**
 * 插入排序
 */
template <typename T>
void insertionSort(T arr[], int n) {
    for (int i = 1; i < n; i ++) {
        // 寻找元素arr[i]合适的插入位置
        for (int j = i; j > 0 && arr[j-1] > arr[j]; j --) {
            swap(arr[j-1], arr[j]);
        }
    }
}


/**
 * 优化的插入排序
 * 上面的算法，每次循环都需要有大量交换，一次交换是三次赋值
 * 下面的算法，我们改成每次循环只需要一次赋值即可。
 * 优化前的插入排序，比选择排序效率还差，优化后才更好。
 * 最坏的情况下，插入排序与选择排序都是O(n^2)，但因为如果数组本身是有点顺序的话，插入排序的每次循环更容易提早结束，所以比较好的情况下，插入排序效率更好。
 */
template <typename T>
void insertionSort2(T arr[], int n) {

    // 第0个元素只有一个，所以认为是有序的，我们从第1个元素开始往前面插入，直到最后一个元素
    for (int i = 1; i < n; i ++) {
        // 寻找元素arr[i]合适的插入位置

        T e = arr[i];   // 先把arr[i]的值复制出来

        int j;          // j是随着对比，不断变化缩小的，保存着与arr[i]进行对比的元素下标，也昭示着e最后插入的位置
        for (j = i; j > 0; j --) {
            if (arr[j-1] > e)
                arr[j] = arr[j-1];
            else
                break;
        }
        arr[j] = e;
    }
}

#endif
