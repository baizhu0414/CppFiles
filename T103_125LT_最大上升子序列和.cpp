#include<bits/stdc++.h>
using namespace std;
#define MAXN 1002
// 和最大的子序列 dp[i]=max{dp[j]+arr[i], arr[i]}

int main() {
	int n;
	int arr[MAXN];
	int dp[MAXN];// 含arr[i]的前i项最大子序列和 
	while(cin>> n) {
		arr[0]=0;
		dp[0]=0;
		for(int i=1; i<=n; i++) {
			cin>> arr[i];
		}

		int maxVal=arr[1]; 
		for(int i=1; i<=n; i++) {
			dp[i]=arr[i];
			for(int j=1; j<i; j++) {
				if(arr[i]> arr[j]&& dp[j]+arr[i]>dp[i]) {
					dp[i]= dp[j]+ arr[i];
				}
			}
			if(dp[i]> maxVal) {
				maxVal= dp[i];
			}
		}
		cout<< maxVal<< endl;
	} 
	return 0;
}
