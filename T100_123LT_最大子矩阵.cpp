#include<bits/stdc++.h>
using namespace std;
#define MAXN 101 
int main() {
	int N;
	int data[MAXN][MAXN];
	int dp[MAXN][MAXN];
	while(cin>> N) {
		for(int i=1; i<=N; i++) {
			for(int j=1; j<=N; j++) {
				cin>> data[i][j];
			}
		}
	}
	return 0;
} 


