#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int N;
        int S;
        cin >> N >> S; // 3 1
        int MAX = INT_MIN;
        int i = 0, j = N;
        while(i <= j){
            if(i+j == S){
                MAX = max(abs(i - j),MAX);
                i++;
                j--;
            }else if(i +j < S){
                i++;
            }else{
                j--;
            }
        }
        cout << MAX <<endl;
        
    }
	return 0;
}
