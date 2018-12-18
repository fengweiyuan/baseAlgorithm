#include <iostream>
#include "binary_search.h"

using namespace std;

int main()
{
//    int arr[] = {15,28,98,144};
    float arr[] = {0.8, 1.1, 2.3, 9.5};
    int result = binarySearch(arr, 4, float(2.3));  // 仅仅写2.3不行，得float(2.3)
    cout << "result: " << result << endl;
    return 0;
}