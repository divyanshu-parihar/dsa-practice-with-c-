#include "./allheaders/arrays.h"
#include <iostream>
using namespace std;
int main() {
    int arr1[] = {1,3,7,2,4,10};
    int arr2[] = {3,7,5,9,11};

    int* result = unionoftwoarrays(arr1, arr2, 6, 5);
    printArr(result,2);
} 