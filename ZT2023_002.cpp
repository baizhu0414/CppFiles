#include<bits/stdc++.h>
using namespace std;
#define MAXN 101

/*����һ��������Ҫ���ҳ����к��������������С�
�����ʼλ�ã�����λ�ã��Լ��ͣ�Ҫ��ͬʱ����ʱ�临�Ӷȡ�*/
/*���ö�̬�滮�㷨���д���ʱ�临�Ӷ�O(n)*/ 
int main() {
	int n;
	int data[MAXN];
	int dp[MAXN];
	int loc[MAXN];// ��¼������͵�λ����Ϣ 
	while(cin>> n) {
		for(int i=1; i<=n; i++) {
			cin>> data[i];
		}
		memset(dp, 0, sizeof(dp));
		memset(loc, 0, sizeof(loc));
		int maxPlus= data[1];
		int maxIdx= 1;
		// dp[i]= max(dp[i-1]+data[i], data[i])��ʾ��data[i]Ϊ���һλ�������������͡� 
		for(int i=1; i<=n; i++) {
			if(data[i]> dp[i-1]+ data[i]) {
				dp[i]= data[i];// dp��1��ʼ�洢 
				loc[i]= i;// ֻ�е�ǰһ���� 
			} else {
				dp[i]= dp[i-1]+ data[i];
				loc[i]= i-1;// ��ǰһ�������� 
			}
			if(maxPlus< dp[i]) {
				maxPlus= dp[i];
				maxIdx= loc[i];
			} 
		}
		int maxIdxStart= maxIdx;
		while(loc[maxIdxStart]!= maxIdxStart) {
			maxIdxStart--;
		}
		// ���λ��loc+1����1��ʼ�� 
		cout<< maxIdxStart+1<< " "<< maxIdx+1<< " "<< dp[maxIdx]<< endl;
	}
	return 0;
}
