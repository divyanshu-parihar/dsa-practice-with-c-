#include "./allheaders/arrays.h"
#include <iostream>
using namespace std;
int main() {
    int arr[] = {-1, -2, -3, -4, 1, 2, 3, 4, 5,-6};
    int* result = moveallnumbers(arr,10);
    printArr(result, 10);
} 