#include<bits/stdc++.h>
using namespace std;
// 2019 3 元券，4 元券，5 元券，求组合成 100 元券时的所有可能。

int main() {
	long long dp[101];
	memset(dp, 0, sizeof(dp));
	dp[1]=0;
	dp[2]=0;
	dp[3]=1;
	dp[4]=1;
	dp[5]=1;
	for(int i=6; i<=100; i++) {
		dp[i]=dp[i-3]+dp[i-4]+dp[i-5];
		cout<< "i="<< i<< ": "<< dp[i]<< endl;
	}
	cout<< dp[100]<< endl;
	return 0;
}

