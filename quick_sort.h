#ifndef SUANFA_QUICK_SORT_H
#define SUANFA_QUICK_SORT_H

#include <iostream>


/**
 * ��ĳ����ͨ���ǵ�һ����Ԫ�ط������м䣬��ߵĶ�С�������ұߵĶ���������Ȼ�󷵻ظ��м�Ԫ�ص��±�
 * ����p��ʹ��arr[l...p-1]��С�ڵ���arr[p]��ʹ��arr[p+1...r]�����ڵ���arr[p]
 */
template <typename T>
int __partition(T arr[], int l, int r) {

    // �Ż�����Ҫ����ѡ����һ��Ԫ�����궨���������ѡ��ѡ������������ߵ�Ԫ�ؽ���һ�£����ﵽ�����ѡ��Ч��
    swap( arr[l], arr[ ( rand() % (r-l+1) ) + l ] );

    // ��ʱv�Ǳ궨ֵ
    T v = arr[l];

    // ѭ��������һֱ����������ʣ�arr[l+1...j]<v�� arr[j+1...i) > v
    int j = l;
    for (int i = l + 1; i <= r; i ++) {
        // �����ƽ��Ĺ����У������бȱ궨ֵС�ģ��Ͱ��±�Ϊi��ֵ�������ȥ
        if (arr[i] < v) {
            swap(arr[j+1], arr[i]);
            j++;
        }
        // ���arr[i]����v�Ļ���Ҳ��ʲôҲ������������������һ��Ԫ�ؼ���
        // ���arr[i]�Ǵ���v�Ļ���ʲô��������������������һ��Ԫ�ؼ���
    }

    // �ѱ궨Ԫ�����±�Ϊj�ĵط���һ��λ�ã�ʹ�ñ궨Ԫ�����м�
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
 * ��arr[l...r]���ֽ��п�������
 */
template <typename T>
void __QuickSort(T arr[], int l, int r) {

    // �ݹ鵽�׵����
    if (l >= r) {
        return;
    }

    int p = __partition(arr, l, r);         // ��ȡ�м�Ԫ�ص��±�
    __QuickSort(arr, l, p-1);               // ����������������򣨵ݹ飩
    __QuickSort(arr, p+1, r);               // ����������������򣨵ݹ飩
}

/**
 * ��arr[l...r]���ֽ��п�������
 */
template <typename T>
void __QuickSort2(T arr[], int l, int r) {

    // �ݹ鵽�׵����
    if (l >= r) {
        return;
    }

    int p = __partition2(arr, l, r);         // ��ȡ�м�Ԫ�ص��±�
    __QuickSort2(arr, l, p-1);               // ����������������򣨵ݹ飩
    __QuickSort2(arr, p+1, r);               // ����������������򣨵ݹ飩
}



/**
 * ��������п�������
 */
template <typename T>
void QuickSort(T arr[], int n) {
    __QuickSort(arr, 0, n-1);    //����˽�еĵݹ麯��
}

/**
 * ˫·���������Ż�
 */
template <typename T>
void QuickSort2(T arr[], int n) {
    __QuickSort2(arr, 0, n-1);    //����˽�еĵݹ麯��
}





#endif
