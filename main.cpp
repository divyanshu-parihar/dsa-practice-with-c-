#include "./allheaders/arrays.h"
#include <iostream>
using namespace std;
int main() {
    int arr[] = {0,1,1,1,0,0,2,2,1,1};
    int* result = sortonetwothrees(arr,10);
    printArr(result, 10);
} 