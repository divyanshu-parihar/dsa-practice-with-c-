// utility functions
void printArr(int* arr, int size);
// reversing Array definations
void reverseArray(int* arr, int size);

// finding minimum and maximun in a Array
int* maxandMinNaive(int* arr, int size);
// optimal solution for above problem.
int* maxandMinOPT(int* arr, int size);
// Find the "Kth" max and min element of an array
int* kthmaxandmin(int* arr, int size,int k);

// optimal way of solving kthmaxandmin problem
int* kthmaxandminOPT(int* arr, int size,int k);

//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
int* sortonetwothrees(int* arr, int size);

// An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.
int* moveallnumbers(int* arr, int size);

// Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union.
int* unionoftwoarrays(int* arr1, int* arr2, int m, int n);
