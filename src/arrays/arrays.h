// utility functions
#include<bits/stdc++.h>
using namespace std;

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

// Given an array, rotate the array by one position in clock-wise direction.
int* cyclicrotatearray(int* arr, int size);

// Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum. (Kadane's algorithm )
int maxsumsubarrayNAIVE(int* arr, int size);

// OPT approach for for above solution : Kadane's algorithm
int maxsumsubarrayOPT(int* arr, int size);

// Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once. After modifying, height should be a non-negative integer. 
// Find out the minimum possible difference of the height of shortest and longest towers after you have modified each tower.
int getDiffMin(int* arr, int size, int k);

// Given an array of N integers arr[] where each element represents the max number of steps that can be made forward from that element. Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.
// Note: Return -1 if you can't reach the end of the array.
int minJumps(int* arr, int size);

// Sales by Match
int sockMerchant(int n, vector<int> ar);

//here are  hourglasses in . An hourglass sum is the sum of an hourglass' values. Calculate the hourglass sum for every hourglass in , then print the maximum hourglass sum. The array will always be 6x6.
int hourglassSum(vector<vector<int>> arr);

// Counting Valleys-hackerrank
int countingValleys(int steps, string path);

// Jumping on the Clouds
int jumpingOnClouds(vector<int> c);

// There is a string, , of lowercase English letters that is repeated infinitely many times. Given an integer, , find and print the number of letter a's in the first  letters of the infinite string.
long repeatedString(string s, long n);

// New Year Chaos - Hackerrank
void minimumBribes(vector<int> A) ;

// // find given sum subarray in the array.
// void getSumSubarray(int* arr,int size,int s);