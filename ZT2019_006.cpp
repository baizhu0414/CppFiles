#include<bits/stdc++.h>
using namespace std;
#define MAXN 65
/*1.������Ӳ�� 1 �֣�5 �֣�10 �֣�25 �֡������������ 63 �ֵ�Ӳ�ң�������
�������ٵ�Ӳ�Ҵճ� 63 ���ء�*/

int main() {
	int coin[4]={25, 10, 5, 1};
	// ��ǰ��ֵ������Ҫ��Ӳ���� 
	int dp[MAXN];
	// ʹ�ö��ٵ�Ӳ���ߵ��˴� 
	int use[MAXN]; 
	int n= 63;
	dp[0]=0;
	use[0]=0; 
	// ʹ�õ�Ӳ��
	vector<int> resList; 
	// dp[i]=min{dp[i-1]+1, dp[i-5]+1, dp[i-10]+1, dp[i-25]+1}
	for(int i=1; i<=n; i++) {
		dp[i]= dp[i-1]+ 1;// ���� 
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
	cout<< dp[n]<< "öӲ��"<< endl;
	for(int i=0; i<resList.size(); i++) {
		cout<< resList[i]<< " ";
	}
	cout<< endl;
	return 0;
} 
