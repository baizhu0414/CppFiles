#include <bits/stdc++.h>
using namespace std;
// max(dp[j]-dp[i])
// 至少包含i在内的和最大的子式：dp[i]=max(dp[i-1]+list[i], list[i]),取dp中最大值。 
int main() {
	int N;
	// 1~i存数据
	vector<int> list;
	// dp[i]:1~i求和。
	vector<int> dp;
	while(cin>> N) {
		list.clear();
		dp.clear();
		list.push_back(0);
		dp.push_back(0);
		// 输入 
		int temp;
		for(int i=0; i<N; i++) {
			cin>> temp;
			list.push_back(temp);
		}
		// 计算前i项和，存在dp[i].
		for(int i=1; i<=N; i++) {
			dp.push_back(dp[i-1]+list[i]);
		}
		// 计算i~j项和中的最大值(i<j) 
		int res=list[1];
		for(int i=0; i<=N; i++) {
			for(int j=i+1; j<=N; j++) {
				res= max(dp[j]-dp[i], res);
			}
		}
		cout<< res<< endl;
	}
}
// 64 位输出请用 printf("%lld")
