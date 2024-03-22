#include<bits/stdc++.h>
using namespace std;
#define MAXN 101

/*给定一组整数，要求找出其中和最大的连续子序列。
输出起始位置，结束位置，以及和，要求同时考虑时间复杂度。*/
/*采用动态规划算法进行处理时间复杂度O(n)*/ 
int main() {
	int n;
	int data[MAXN];
	int dp[MAXN];
	int loc[MAXN];// 记录数组求和的位置信息 
	while(cin>> n) {
		for(int i=1; i<=n; i++) {
			cin>> data[i];
		}
		memset(dp, 0, sizeof(dp));
		memset(loc, 0, sizeof(loc));
		int maxPlus= data[1];
		int maxIdx= 1;
		// dp[i]= max(dp[i-1]+data[i], data[i])表示以data[i]为最后一位的连续数组最大和。 
		for(int i=1; i<=n; i++) {
			if(data[i]> dp[i-1]+ data[i]) {
				dp[i]= data[i];// dp从1开始存储 
				loc[i]= i;// 只有当前一个数 
			} else {
				dp[i]= dp[i-1]+ data[i];
				loc[i]= i-1;// 和前一个数连续 
			}
			if(maxPlus< dp[i]) {
				maxPlus= dp[i];
				maxIdx= loc[i];
			} 
		}
		int maxIdxStart= maxIdx;
		while(loc[maxIdxStart]!= maxIdxStart) {
			maxIdxStart--;
		}
		// 输出位置loc+1，从1开始。 
		cout<< maxIdxStart+1<< " "<< maxIdx+1<< " "<< dp[maxIdx]<< endl;
	}
	return 0;
}
