#include <bits/stdc++.h>
using namespace std;
// max(dp[j]-dp[i])
// ���ٰ���i���ڵĺ�������ʽ��dp[i]=max(dp[i-1]+list[i], list[i]),ȡdp�����ֵ�� 
int main() {
	int N;
	// 1~i������
	vector<int> list;
	// dp[i]:1~i��͡�
	vector<int> dp;
	while(cin>> N) {
		list.clear();
		dp.clear();
		list.push_back(0);
		dp.push_back(0);
		// ���� 
		int temp;
		for(int i=0; i<N; i++) {
			cin>> temp;
			list.push_back(temp);
		}
		// ����ǰi��ͣ�����dp[i].
		for(int i=1; i<=N; i++) {
			dp.push_back(dp[i-1]+list[i]);
		}
		// ����i~j����е����ֵ(i<j) 
		int res=list[1];
		for(int i=0; i<=N; i++) {
			for(int j=i+1; j<=N; j++) {
				res= max(dp[j]-dp[i], res);
			}
		}
		cout<< res<< endl;
	}
}
// 64 λ������� printf("%lld")
