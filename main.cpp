#include "./allheaders/arrays.h"
#include <iostream>
using namespace std;
int main() {
    int arr[] = {5,4,3,2,1};
    int *ans = kthmaxandminOPT(arr,5,2);
    printArr(ans,1);
} 