#include<bits/stdc++.h>
using namespace std;

int longestCommonSum(bool arr1[], bool arr2[], int n)
{
	int maxLen = 0;

	for (int i=0; i<n; i++)
	{
	int sum1 = 0, sum2 = 0;

    for (int j=i; j<n; j++)
	{
		// Update sums
		sum1 += arr1[j];
		sum2 += arr2[j];

		// If sums are same and current length is
		// more than maxLen, update maxLen
		if (sum1 == sum2)
		{
			int len = j-i+1;
			if (len > maxLen)
				maxLen = len;
		}
	}
	}
	return maxLen;
}
int longestCommonSumLinearTime(bool arr1[], bool arr2[], int n) {
    int max_len = 0;
    int sum1 = 0, sum2 = 0;
    int diffArr[2*n+1];
    memset(diffArr, -1, sizeof(diffArr));
    for(int i = 0; i < n; i++) {
        sum1 += arr1[i];
        sum2 += arr2[i];

        int diff = sum1 - sum2;
        int idx = n + diff;

        if (diff == 0)
            max_len = i+1;
        else if ( diffArr[idx] == -1)
            diffArr[idx] = i;
        else
        {
            // Find length of this same sum common span
            int len = i - diffArr[idx];
 
            // Update max len if needed
            if (len > max_len)
                max_len = len;
        }
    }
    return max_len;
}
// Driver program to test above function
int main()
{
	bool arr1[] = {0, 1, 0, 1, 1, 1, 1};
	bool arr2[] = {1, 1, 1, 1, 1, 0, 1};
	int n = sizeof(arr1)/sizeof(arr1[0]);
	cout << "Length of the longest common span with same "
			"sum is "<< longestCommonSumLinearTime(arr1, arr2, n);
	return 0;
}
