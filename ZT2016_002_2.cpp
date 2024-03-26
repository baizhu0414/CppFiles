#include<bits/stdc++.h>
using namespace std;
/*�� m ��ͬ����ƻ������ n ��ͬ��������������е����ӿ��Ų��ţ��ʹ��ж����ֲ�ͬ��
�ַ��� 5��1��1 �� 1��5��1 ��ͬһ�ַַ���*/

int f(int m, int n) {
	if(m==0|| n== 1) {
		return 1;
	}
	if(m<n) {
		return f(m, m);// ������������ 
	}
	// ��һ�������ӻ�û�� 
	return f(m, n-1)+ f(m-n, n);
}

int f2(int m, int n) {
	vector<vector<int> > dp(m+1, vector<int>(n+1, 0));
	for(int i=0; i<=m; i++) {
		dp[i][1]= 1;// 1������ **�״��* 
	}
	for(int i=0; i<=n; i++) {
		dp[0][i]= 1;// 0��ƻ�� 
	}
	for(int i=1; i<=m; i++) {// ƻ�� 
		for(int j=2; j<=n; j++) {// ���� 
			if(j>i) {
				dp[i][j]= dp[i][i];
			} else {
				// û�п����Ӻ��п����� 
				dp[i][j]= dp[i-j][j]+ dp[i][j-1];
			}
		}
	}
	return dp[m][n]; 
}

int main() {
	int m, n;// ƻ�������� 
	cin>> m>> n;
	cout<< f(m, n)<< endl;
	cout<< f2(m, n)<< endl;
	return 0;
}
 
