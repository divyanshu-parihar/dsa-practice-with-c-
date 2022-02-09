#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int x,y;
        cin >> x >> y;
        // int i = min(x,y);
        // int j = max(x,y);
        // int ans = 0;
        // while(i > 1 && j > 1){
        //     j-=2;
        //     i--;
        //     ans +=1;
        // }
        
        cout << min(x/2,y) << endl;
    }
	return 0;
}
