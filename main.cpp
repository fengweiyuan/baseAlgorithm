#include <iostream>
#include "SortTestHelper.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "BubbleSort.h"
#include "quick_sort.h"
#include "SparseGraph.h"
#include "DenseGraph.h"
#include "ReadGraph.h"
using namespace std;


int main() {

    // 构建测试数组
//    int n = 100000;
//    int* arr = SortTestHelper::generateNearlyOrderedArray(n, 100);
//    int* arr = SortTestHelper::generateRandomArray(n, 0, n);
//    int* arr2 = SortTestHelper::copyIntArray(arr, n);
//    int* arr3 = SortTestHelper::copyIntArray(arr, n);
//    int* arr4 = SortTestHelper::copyIntArray(arr, n);
//    int* arr5 = SortTestHelper::copyIntArray(arr, n);
//    int* arr6 = SortTestHelper::copyIntArray(arr, n);

    // 测试算法
//    SortTestHelper::testSort("Selection Sort", selectionSort, arr, n);
//    SortTestHelper::testSort("Bubble sort", mergeSort, arr2, n);
//    SortTestHelper::testSort("Insertion Sort", insertionSort, arr3, n);
//    SortTestHelper::testSort("insertionSort2", insertionSort2, arr4, n);
//    SortTestHelper::testSort("Merge sort", mergeSort, arr5, n);
//    SortTestHelper::testSort("Quick sort", QuickSort2, arr6, n);


    // 释放内存
//    delete[] arr;
//    delete[] arr2;
//    delete[] arr3;
//    delete[] arr4;
//    delete[] arr5;
//    delete[] arr6;

    // 图的测试
    cout << "---------------------Graph Test Begin---------------------" <<endl;
//    int N = 20;          // 顶点
//    int M = 100;         // 边
//    srand(time(NULL));
//
//    // 邻接表（稀疏图）
//    cout << endl << "SparseGraph:" << endl;
//    SparseGraph g1(N, false);   // N个顶点，无向图
//
//    // 增加M条边，可能会有平衡边
//    for (int i = 0; i < M; i++) {
//        int a = rand() % N;
//        int b = rand() % N;
//        g1.addEdge(a, b);
//    }
//
//    // 时间复杂度O(E) 边的数量
//    for (int v = 0; v < N; v++) {
//        cout << v << " : ";                                   // 打印顶点
//        SparseGraph::adjIterator adj(g1, v);                  // 实例化一个针对该顶点的迭代器
//        for (int w = adj.begin(); !adj.end(); w = adj.next()) // 利用迭代器，打印该顶点的所有相邻顶点
//            cout << w << " ";
//        cout << endl;
//    }
//
//    // 邻接矩阵（稠密图）
//    cout << endl << "DenseGraph:" << endl;
//    DenseGraph g2(N, false);
//    for (int i = 0; i < M; i++) {
//        int a = rand() % N;
//        int b = rand() % N;
//        g2.addEdge(a, b);
//    }
//    // 时间复杂度O(V^2) 顶点的平方
//    for (int v = 0; v < N; v++) {                    // 邻接矩阵不存在平行边的问题，所以打印出来看是没有两个顶点之间有两条边的情况
//        cout << v << " : ";
//        DenseGraph::adjIterator adj(g2, v);
//        for (int w = adj.begin(); !adj.end(); w = adj.next())
//            cout << w << " ";
//        cout << endl;
//    }

    string filename = "../testG1.txt";
    ifstream fin;
    fin.open(filename);
    SparseGraph g3 (13, false);
    ReadGraph<SparseGraph> readGraph1(g3, filename.c_str());
    g3.show();

    DenseGraph g4(13, false);
    ReadGraph<DenseGraph> readGraph2(g4, filename);
    g4.show();
    return 0;



    cout << "---------------------Graph Test End---------------------" <<endl;
    return 0;
}