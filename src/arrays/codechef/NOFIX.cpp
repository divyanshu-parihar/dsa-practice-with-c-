#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int arr[n];
        int j = 1;
        while(j<=n){
            cin >> arr[j];
            j++;
        }
        
        
        int index = 1;
        int i = 1;
        int count = 0;
        while(i <= n) {
            
            // cout << "i" << i << "index" << index << endl;
          if(arr[i] != index){
              i++;
              index++;
          }else{
              count++;
              index++;
          }
        }
        
        cout << count << endl;
    }
	return 0;
}
