#include<bits/stdc++.h>
using namespace std;
/*把 m 个同样的苹果放在 n 个同样的盘子里，允许有的盘子空着不放，问共有多少种不同的
分法？ 5，1，1 和 1，5，1 是同一种分法。*/

int f(int m, int n) {
	if(m==0|| n== 1) {
		return 1;
	}
	if(m<n) {
		return f(m, m);// 多余盘子无用 
	}
	// 有一个空盘子或没有 
	return f(m, n-1)+ f(m-n, n);
}

int f2(int m, int n) {
	vector<vector<int> > dp(m+1, vector<int>(n+1, 0));
	for(int i=0; i<=m; i++) {
		dp[i][1]= 1;// 1个盘子 **易错点* 
	}
	for(int i=0; i<=n; i++) {
		dp[0][i]= 1;// 0个苹果 
	}
	for(int i=1; i<=m; i++) {// 苹果 
		for(int j=2; j<=n; j++) {// 盘子 
			if(j>i) {
				dp[i][j]= dp[i][i];
			} else {
				// 没有空盘子和有空盘子 
				dp[i][j]= dp[i-j][j]+ dp[i][j-1];
			}
		}
	}
	return dp[m][n]; 
}

int main() {
	int m, n;// 苹果，盘子 
	cin>> m>> n;
	cout<< f(m, n)<< endl;
	cout<< f2(m, n)<< endl;
	return 0;
}
 
