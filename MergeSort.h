#ifndef SUANFA_MERGESORT_H
#define SUANFA_MERGESORT_H

#include <iostream>
#include <algorithm>
#include "SortTestHelper.h"
#include "insert_sort/insert_sort.h"

using namespace std;

// �鲢���㷨���������±꣬���±꣬���±���Ϊ��������������ж�·�鲢
template<typename T>
void __merge(T arr[], int l, int mid, int r) {

    // ����һ���������飬������r-l+1�����紫�����[3,5,2,1,8,6]���Լ������±�3,4,6����ôaux����ᱻ��ʼ����[2,1,8,6]
    T aux[r - l + 1];
    for (int i = l; i <= r; i++)
        aux[i - l] = arr[i];

    // i,j�ֱ𱣴����������������ͷԪ���±�
    int i = l, j = mid + 1;

    // k��ĸ�����д������λ��
    for (int k = l; k <= r; k++) {

        // һ��ʼ������������������֧��ֱ��i��j�������ӣ���iͻ����mid������jͻ����r����ô�Ͳ����ٱȽ��ˣ�ֻ��Ҫ�������Ԫ�����ηŽ�ȥ���ɡ�
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


// �������飬���±꣬���±���Ϊ���������й鲢���򣬻᲻�ϵݹ�
template<typename T>
void __mergeSort(T arr[], int l, int r) {

    if (l >= r) {
        return;
    }

    int mid = (l + r) / 2;
    __mergeSort(arr, l, mid);
    __mergeSort(arr, mid + 1, r);
    if (arr[mid] > arr[mid + 1])        // �Ż�������Ѿ����򣬾Ͳ��ý��ж�·�鲢�ˣ�������鱾���������ڱȽ���������ü�����Ż�
        __merge(arr, l, mid, r);

}

// �鲢�����û���ֱ��ʹ��
template<typename T>
void mergeSort(T arr[], int n) {
    __mergeSort(arr, 0, n - 1);
}

#endif
