#include "./allheaders/arrays.h"
#include <iostream>
using namespace std;
int main() {
    //<----- reversing Array -------->
    // int arr[] = {5, 4, 3, 2, 1};
    // reverseArray(arr,5);
    // printArr(arr, 5);


    // <----Write a C function to return minimum and maximum in an array.
    //  Your program should make the minimum number of comparisons. --->
    int arr[] = {5 , 4, 3, 2, 1};
    int* ans = maxandMin(arr, 5);
    printArr(ans, 2);
} 