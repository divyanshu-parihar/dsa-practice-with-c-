#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int total = (N*(N+1))/2;
        int i = 1;
        while(total%2 !=0){
            total -= i;
            i++;
        }
        
        cout << N - i + 1<< endl;
    }
	return 0;
}
