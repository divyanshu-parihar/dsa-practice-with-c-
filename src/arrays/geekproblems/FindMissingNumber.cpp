#include<bits/stdc++.h>
using namespace std;


int getMissingNo(int arr[], int n) {
    int totoalSum = ((n+1)*(n+2))/2;
    int i = 0;
    while(i < n){
        totoalSum -= arr[i];
        i++;
    }

    return totoalSum;
}
int main()
{
    int arr[] = { 1, 2, 4, 6, 3, 7, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int miss = getMissingNo(arr, n);
    cout << miss;
}