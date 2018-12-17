#ifndef BASEALGORITHM_BINARY_SEARCH_H
#define BASEALGORITHM_BINARY_SEARCH_H

/**
 * 实现二分查找法
 */
#include <iostream>
using namespace std;

/**
 * 二分查找法
 * 传入有序数组arr，数组数量n，要查找的目标整数target
 * 返回匹配元素的下标，找不到返回-1
 */
template<typename T>
int binarySearch(T arr[], int n, T target)
{
    int l = 0, r = n - 1;  // 在闭空间[l...r]中寻找target
    while (l <= r)     // 当 l == r 时，即区间只有一个元素，区间[l...r]还是有效的
    {
        int mid = l + (r-l)/2;   //本来int mid = (l + r) / 2即可，但因为mid可能会溢出int范围，所以最好改成 l + (r-l)/2
        if (target == arr[mid])
            return mid;
        else if (target > arr[mid])
            l = mid + 1;            // target在[mid+1...r]中，肯定不在[l...mid]中
        else
            r = mid - 1;            // target在[l...mid-1]中，肯定不在[mid...r]中
    }
    return -1;
}




#endif
