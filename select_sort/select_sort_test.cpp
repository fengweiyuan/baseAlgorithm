#include <iostream>
#include "sort_test_helper.h"
#include "select_sort.h"

using namespace std;

int main() {
    int n = 1000;
    int *arr = SortTestHelper::generateRandomArray(n, 0, n);
    SortTestHelper::testSort("Selection Sort", selectionSort, arr, n);
    delete[] arr;
}