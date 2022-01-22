#include "../allheaders/arrays.h"
#include<bits/stdc++.h>
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


int* maxandMinNaive(int* arr, int size){
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


int* maxandMinOPT(int* arr, int size){
    bool odd = (size %2 == 0)? false: true;

    static int ans[] = {INT_MIN, INT_MAX};
    int max = arr[0];
    int min = arr[1];

    if(odd) size--;

    for(int i = 0; i < size; i=i+2) {
        int maximum ,minimum;
        if(arr[i] > arr[i+1] ){
            maximum = arr[i];
            minimum = arr[i+1];
        }else{
            maximum = arr[i+1];
            minimum = arr[i];
        }

        if (maximum > max) {        // 2nd comparison
            max = maximum;
        }
 
        // update min
        if (minimum < min) {        // 3rd comparison
            min = minimum;
        }
    }
    if (odd) {                        // comparison

    if (arr[size] > max) {         // extra comparison for an odd element
        max = arr[size];
    }

    if (arr[size] < min) {         // extra comparison for an odd element
        min = arr[size];
    }

    }
    ans[0] = max;
    ans[1] = min;
    return ans;

}

// nlogn solution with sorting for kthmaxmin problem.
int* kthmaxandmin(int* arr , int size, int k ){
    sort(arr,arr+size);
    return new int[2]{arr[size - k ], arr[k-1]};
}


int* kthmaxandminOPT(int * arr, int size, int k){
    priority_queue <int> q; // By Default MaxHeap
    for(int i = 0; i < size; i++){
        q.push(-arr[i]);
        if(q.size() > k){
            q.pop();
        } 

    }

    return new int[1]{-q.top()};
}

// This seems to be Time : O(N) and Space : O(N)
int* sortonetwothrees(int* arr, int size){
    int sizes[] = {0,0,0};
    int ans[size]; // here we are using O(N) memory 
    for(int i = 0; i < size; i++) {
        if(arr[i] == 0){
            sizes[0] +=1;

        }
        if(arr[i] == 1){
            sizes[1] +=1;

        }if(arr[i] == 2){
            sizes[2] +=1;
            
        }
    }
    int count = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0 ; j < sizes[i]; j++){
            ans[count] = i+0;
            count++;
        }
    }
    for(int i = 0; i< size; i++){
        arr[i] = ans[i];
    }
    return arr;
}



int* moveallnumbers(int* arr , int size){
    int unitl_here = 0;

    while(arr[unitl_here] >= 0){
        unitl_here++;
    }
    for(int i = 0; i < size; i++) {
        if(arr[i] < 0) {
            swap(arr[unitl_here], arr[i]);
            unitl_here++;
        }
    }
    return arr; 
}