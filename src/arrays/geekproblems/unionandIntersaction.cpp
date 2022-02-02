#include<bits/stdc++.h>
using namespace std;
void printUnion(int arr1[], int arr2[], int m, int n){
    int i = 0;
    int j = 0;
    
    while(i < m && j < n) {
        if(arr1[i] < arr2[j]){
            cout << arr1[i] << endl;
            i++;
        }else if(arr1[i] > arr2[j]){
            cout << arr2[j] << endl;
            j++;
        } else{
            cout << arr1[i] << endl;
            i++;
            j++;
        }
    }
    while (i < m)
    {
        cout << arr1[i] << endl;
        i++;
    }
     while (j < n)
    {
        cout << arr2[j] << endl;
        j++;
    }
     
}

void printIntersection(int arr1[], int arr2[], int m, int n) {
    int i = 0;
    int j = 0;

    while(i < m && j < n) {
        if(arr1[i] < arr2[j]) {
            i++;
        } else if(arr1[i] > arr2[j]) {
            j++;
        }else{
            cout << arr2[j] << endl;
            i++;
            j++;
        }


        if(arr1[i] == arr1[i+1]) i++;
        if(arr2[j] == arr2[j+1]) j++;
    }
}
int main()
{
    int arr1[] = { 1, 2,2, 4, 5, 6 };
    int arr2[] = { 2, 2,3, 5, 7 };
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
 
    // Function calling
    printIntersection(arr1, arr2, m, n);
 
    return 0;
}