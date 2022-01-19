#include "../allheaders/arrays.h"
#include <climits>
#include <iostream>
using namespace std;

void printArr(int* arr, int size){
    for(int i = 0; i< size; i++){
        cout << arr[i] << '\n';
    }
}


void reverseArray(int* arr, int size){
    int first =0;
    int second = size-1;
    for(int i = 0; i < size; i++){
        if(first > second){
            break;
        }
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;

        first++;
        second--;

    }
}


int* maxandMin(int* arr, int size){
    static int ans[] = {INT_MIN, INT_MAX}; // to first: largest and second: smallest
    for(int i = 0; i < size; i++){
        if(arr[i]>ans[0]){
            ans[0] = arr[i];
        }
        if(arr[i] < ans[1]){
            ans[1] = arr[i];
        }
    }

    return ans;
}