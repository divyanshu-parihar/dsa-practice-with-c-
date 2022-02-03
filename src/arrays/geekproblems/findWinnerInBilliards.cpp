#include <iostream>
#include <limits.h>
#include <algorithm>

using namespace std;

int main() {
    int currMax  = INT_MIN, player = 0;
    int n,i;
    cin >> n;
    while(i < n) {
        int curr1 = 0;
        int curr2 = 0;
        cin >> curr1;
        cin >> curr2;
        if(abs(curr1 - curr2) > currMax){
            currMax = abs(curr1 - curr2);
            
            if(curr2 > curr1){
                player = 2;
            }else{
                player = 1;
            }
        }
        i++;
    }
    cout << player << " " <<  currMax;
	return 0;
}