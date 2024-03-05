#include<bits/stdc++.h>
using namespace std;
#define MAXN 102
// 最长的^形子序列 dp1+dp2最大 

int main() {
	int n;
	int arr[MAXN];
	int dp1[MAXN];// 以i结尾的最长升序序列长 
	int dp2[MAXN];// 以i开头的最长降序序列长
	while(cin>> n) {
		for(int i=1; i<=n; i++) {
			cin>> arr[i];
		}
		dp1[0]= 0;
		for(int i=1; i<=n; i++) {
			dp1[i]=1;
			for(int j=1; j<i; j++) {
				if(arr[i]> arr[j]&& dp1[j]+1> dp1[i]) {
					dp1[i]= dp1[j]+ 1;
				}
			}
		} 
		dp2[n+1]= 0;
		for(int i=1; i<=n; i++) {
			dp2[n-i+1]= 1;// 倒序计算 
			for(int j=1; j<i; j++) {
				if(arr[n-j+1]< arr[n-i+1]&& dp2[n-j+1]+1> dp2[n-i+1]) {
					dp2[n-i+1]= dp2[n-j+1]+ 1;
				}
			} 
		}
		// 求和(位置i重复计算)
		int maxLen=1; 
		for(int i=1; i<=n; i++) {
			maxLen= max(dp1[i]+ dp2[i]- 1, maxLen);
		}
		// 出列人数 
		cout<< n- maxLen<< endl;
	} 
	return 0;
}

