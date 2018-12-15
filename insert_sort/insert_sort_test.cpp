#include <iostream>
#include "insert_sort.h"
#include "sort_test_helper.h"

using namespace std;
int main() {
    int n = 1000;
    int* arr = SortTestHelper::generateRandomArray(n, 0, n);
    int* arr2 = SortTestHelper::copyIntArray(arr, n);

    SortTestHelper::testSort("Insertion Sort", insertionSort, arr, n);
    SortTestHelper::testSort("insertionSort2", insertionSort2, arr2, n);

    delete[] arr;
    delete[] arr2;
}