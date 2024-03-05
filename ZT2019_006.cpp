#include<bits/stdc++.h>
using namespace std;
#define MAXN 65
/*1.现在有硬币 1 分，5 分，10 分，25 分。我现在想凑齐 63 分的硬币，请问如
何用最少的硬币凑成 63 分呢。*/

int main() {
	int coin[4]={25, 10, 5, 1};
	// 当前数值最少需要的硬币数 
	int dp[MAXN];
	// 使用多少的硬币走到此处 
	int use[MAXN]; 
	int n= 63;
	dp[0]=0;
	use[0]=0; 
	// 使用的硬币
	vector<int> resList; 
	// dp[i]=min{dp[i-1]+1, dp[i-5]+1, dp[i-10]+1, dp[i-25]+1}
	for(int i=1; i<=n; i++) {
		dp[i]= dp[i-1]+ 1;// 保底 
		use[i]= coin[3];
		for(int j=0; j<3; j++) {
			if(i>= coin[j]) {
				if(dp[i-coin[j]]+ 1< dp[i]) {
					use[i]= coin[j];
					dp[i]= dp[i-coin[j]]+ 1;
				}
			}
		}
	}
	int cur= n;
	while(cur> 0) {
		resList.push_back(use[cur]);
		cur-= use[cur];
	}
	cout<< dp[n]<< "枚硬币"<< endl;
	for(int i=0; i<resList.size(); i++) {
		cout<< resList[i]<< " ";
	}
	cout<< endl;
	return 0;
} 
