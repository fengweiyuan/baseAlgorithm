#ifndef SUANFA_SORTTESTHELPER_H
#define SUANFA_SORTTESTHELPER_H

#include <iostream>
#include <cassert>
#include <ctime>
#include <string>
#include <string.h>
#include <stdlib.h>

using namespace std;

namespace SortTestHelper {

    // 生成有n个元素的随机数组，范围是[rangeL,rangeR]之间，返回指向第一个元素的指针
    int* generateRandomArray(int n, int rangeL, int rangeR) {
        assert(rangeL <= rangeR);

        int* arr = new int[n];
        srand(time(NULL));        // 随机种子的设置
        for (int i = 0; i < n; i++)
            arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
        return arr;
    }

    /**
     * 产生一个近乎于有序的数组
     * 传入要创造的数组元素数量，以及打乱的对数（以决定有序度)，作为参数，打乱的对数越小，则越有序。
     * 先产生完全有序的数组，然后产生一对随机数，例如3与7，然后把arr[3]与arr[7]进行交换，做这样的事情swapTimes那么多次
     */
    int* generateNearlyOrderedArray(int n, int swapTimes) {
        int* arr = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = i;
        srand(time(NULL));
        for (int i = 0; i < swapTimes; i++) {
            int posx = rand() % n;
            int posy = rand() % n;
            swap(arr[posx], arr[posy]);
        }
        return arr;
    }

    /**
     * 测试算法性能
     * 传入算法的名称，算法函数指针，待测试的数组，以及数组元素个数
     */
    template<typename T>
    void testSort(string sortName, void(*sort)(T[], int), T arr[], int n) {
        clock_t startTime = clock();
        sort(arr, n);
        clock_t endTime = clock();
        assert(isSorted(arr, n));
        cout << sortName << ": " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    }

    /**
     * 检验数组是否已实现升序排序
     */
    template<typename T>
    bool isSorted(T arr[], int n) {
        for (int i = 0; i < n - 1; i++)
            if (arr[i] > arr[i + 1])
                return false;
        return true;
    }

    /**
     * 数组复制
     * 将a数组的头指针与尾指针传入，复制数据到arr数组，并返回
     */
    int *copyIntArray(int a[], int n) {
        int *arr = new int[n];
        copy(a, a + n, arr);
        return arr;
    }


    /**
     * print
     */
     template <typename T>
     void printArray(T arr[], int n) {
         for (int i = 0; i < n; i ++)
             cout << arr[i] << " ";
         cout << endl;
     }


}
#endif
