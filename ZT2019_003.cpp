#include<bits/stdc++.h>
using namespace std;
// 2019 3 Ԫȯ��4 Ԫȯ��5 Ԫȯ������ϳ� 100 Ԫȯʱ�����п��ܡ�

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

