#include<bits/stdc++.h>
using namespace std;
#define MAXN 102
// ���^�������� dp1+dp2��� 

int main() {
	int n;
	int arr[MAXN];
	int dp1[MAXN];// ��i��β����������г� 
	int dp2[MAXN];// ��i��ͷ����������г�
	while(cin>> n) {
		for(int i=1; i<=n; i++) {
			cin>> arr[i];
		}
		dp1[0]= 0;
		for(int i=1; i<=n; i++) {
			dp1[i]=1;
			for(int j=1; j<i; j++) {
				if(arr[i]> arr[j]&& dp1[j]+1> dp1[i]) {
					dp1[i]= dp1[j]+ 1;
				}
			}
		} 
		dp2[n+1]= 0;
		for(int i=1; i<=n; i++) {
			dp2[n-i+1]= 1;// ������� 
			for(int j=1; j<i; j++) {
				if(arr[n-j+1]< arr[n-i+1]&& dp2[n-j+1]+1> dp2[n-i+1]) {
					dp2[n-i+1]= dp2[n-j+1]+ 1;
				}
			} 
		}
		// ���(λ��i�ظ�����)
		int maxLen=1; 
		for(int i=1; i<=n; i++) {
			maxLen= max(dp1[i]+ dp2[i]- 1, maxLen);
		}
		// �������� 
		cout<< n- maxLen<< endl;
	} 
	return 0;
}

