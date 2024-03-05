#include<bits/stdc++.h>
using namespace std;
#define MAXJ 1001
#define MAXI 101

struct node{
	int price;
	int grade;
};
// 0-1背包问题 
// 转移方程：dp[i][j]=max(dp[i-1][j], dp[i-1][j-wei]+ val); 
int main() {
	int dp[MAXI][MAXJ];
	int C, N;// 报销额度，菜数量 
	node cai[MAXI];
	memset(dp[0], 0, sizeof(dp[0]));
	for(int i=0; i<MAXI; i++) {
		dp[i][0]= 0;
	} 
	while(cin>> C>> N) {
		for(int i=0; i<N; i++) {
			cin>> cai[i].price>> cai[i].grade;
		}
		for(int i=1; i<=N; i++) {
			for(int j=1; j<=C; j++) {
				if(j>= cai[i-1].price) {
					dp[i][j]= max(dp[i-1][j], dp[i-1][j-cai[i-1].price]+ cai[i-1].grade);
				} else {
					dp[i][j]= dp[i-1][j];
				}
			}
		}
		cout<< dp[N][C]<< endl;
	}
	return 0;
} 
