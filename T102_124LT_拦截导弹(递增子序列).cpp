#include<bits/stdc++.h>
using namespace std;
#define MAXN 27

// 递减子序列，同递增。 
int main() {
	int n;
	int arr[MAXN];
	int dp[MAXN];// 最长子序列长度
	while(cin>> n) {
		memset(arr, 0, sizeof(arr));
		memset(dp, 0, sizeof(dp));
		for(int i=1; i<=n; i++) {
			cin>> arr[i];
		}
		int maxLen=1; 
		dp[1]=1;
		for(int i=1; i<=n; i++) {
			dp[i]= 1;
			for(int j=1; j<i; j++) {
				if(arr[j]>=arr[i]&& dp[i]< dp[j]+1) {// 降序 
					dp[i]= dp[j]+1;
				}
			}
			if(dp[i]> maxLen) {
				maxLen= dp[i];
			}
		}
		cout<< maxLen<< endl;
		
//		for(int i=1; i<=n; i++) {
//			cout<< dp[i]<< " ";
//		}
//		cout<< endl;
	} 
	return 0;
}
