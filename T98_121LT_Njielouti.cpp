#include <bits/stdc++.h>
using namespace std;

// ���� 12.1
// XT12.1ͬ���� 
int main() {
    int N;
    int dp[91];
    while(cin>> N) {
        memset(dp, 0, sizeof(dp));
		dp[1]=1;
		dp[2]=2;
		for(int i=3; i<=N; i++) {
			dp[i] = dp[i-1] + dp[i-2];
		} 
		cout<< dp[N]<< endl;
    }
}
// 64 λ������� printf("%lld")
