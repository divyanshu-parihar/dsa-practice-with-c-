#include "./allheaders/arrays.h"
#include <iostream>
using namespace std;
int main() {
    int arr[] = {3, 9, 12, 16, 20};

    // int* result = maxsumsubarrayNAIVE(arr1, 6);
    // printArr(result,6);
    cout << getDiffMin(arr,5,3);
    // printArr(arr,5);
} 