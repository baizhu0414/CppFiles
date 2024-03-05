#include<bits/stdc++.h>
using namespace std;
/*3.有 n 个整数排成一排，求其中最大的连续子序列和。要求使用分治法解决。*/

// 错：分治法？ 
// 错：连续子序列不是值连续，而是位置相邻即可！！理解错误。 
int main() {
	int n;
	vector<int> list;
	vector<int> dp;
	while(cin>> n) {
		list.push_back(0);
		dp.push_back(0);
		int temp;
		for(int i=0; i<n; i++) {
			cin>> temp;
			list.push_back(temp);
		}
		int res= list[1];
		dp[1]= list[1];
		for(int i=2; i<=n; i++) {
			dp[i]= max(list[i]+ dp[i-1], list[i]);
			res= max(res, dp[i]);
		}
		cout<< res<< endl;
//		for(int i=1; i<=n; i++) {
//			cout<< dp[i]<< " ";
//		}
	}
	return 0;
}
