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

int* unionoftwoarrays(int* arr1, int* arr2, int m, int n){
    int first = 0;
    int second =0;
    sort(arr1, arr1+m); // O(mlogm) 
    sort(arr2, arr2+n); // O(nlogn)
    static int ans[100];
    int i = 0;
    while(i < min(m,n)) { // O(N)
        if(arr1[first] == arr2[second]){
            ans[i]= arr1[first];
            first++;
            second++;
            i++;
        }else{
            if(arr1[first] < arr2[second]) {
                first++;
            }else{
                second++;
            }
        }
    }

    
    return ans;
}


int* cyclicrotatearray(int* arr, int size) {
    int i = size-1;
    while(i-1 >=0){ // O(N)
        swap(arr[i],arr[i-1]);
        i--;
    }
    return arr;
}


int maxsumsubarrayNAIVE(int* arr, int size) { // O(N^2)
    int max_sum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        int curr = 0;
        for (int j = i; j < size; j++)
        {
            curr+= arr[j];
        }
        max_sum = max(curr,max_sum);
    }

    return max_sum;
    
}
int maxsumsubarrayOPT(int* arr, int size) {
    int curr = 0;
    int ans = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        curr += arr[i];
        ans = max(ans, curr);
        if(curr < 0) {
            curr = 0;
        }

    }
    return ans;
    
}

int getDiffMin(int* arr, int size, int k){
    
    sort(arr,arr+size);
    int max_ = arr[size-1];
    int min_ = arr[0];
    int res = max_ - min_;

    for (int i = 1; i < size; i++)
    {
        min_ = min(arr[0]+k, arr[i]-k);
        max_ = max(arr[size-1]-k, arr[i]+k);
        
        res = min(res,max_-min_);
    }

    return res; 
}

int minJumps(int* arr, int size){
    int count = 0;
    int i=0;
    while( i < size){
        cout << i <<endl;
        if(arr[i]==0 && i!=size-1){
            return -1;
        }
        for (int k = i; k <= i + arr[i]; k++)
        {
            int curr=arr[i]-arr[k];
            if(k > size){
                continue;
            }
            if(size-arr[k]<curr){
                curr = k;
            }

            i = curr;
            count++;
            continue;
        }
        i++;
    }
    return count;
}


int sockMerchant(int n, vector<int> ar) {
    if(n < 2){
        return 0;
    }
    vector<int> result(101);
    for(int i = 0; i < n; i++) {
        result[ar.at(i)]++;
    }
    int ans = 0 ;
    
    for (int i = 0; i < result.size(); i++) {
        if(result[i] >=2){
            ans+= result[i]/2;
        }
    }
    
    return ans;
}

int hourglassSum(vector<vector<int>> arr) {
    int result = INT_MIN;
    int n = 6;
    for(int i = 1; i < 5; i++){
        for(int j = 1; j < 5; j++){
            int curr=arr[i][j];
            int directions[6][2] = {{-1,-1},{-1,0},{-1,1},{1,-1},{1,0},{1,1}};
            for(int k = 0; k < 6 ; k++){
               int newX = i + directions[k][0];
               int newY = j + directions[k][1];
               curr+= arr[newX][newY];
            }
            result = max(result,curr);
        } 
    }
    return result;
}


int countingValleys(int steps, string path) {
    int count = 0;
    int currlvl = 0;
    int wasInDepth = 0;
    for(int i = 0; i < steps; i++){
        if(path.at(i)=='D'){
            currlvl--;
        }else{
            currlvl++;
        }
        if(currlvl < 0){
            wasInDepth = 1;
        }
        if(currlvl > 0) wasInDepth = 0;
        if(currlvl==0 && wasInDepth) {count++;}
    }
    
    return count;
}
