#include<bits/stdc++.h>
using namespace std;
// �����ַ����Ĺ����Ӵ���ת�Ʒ������ص㡣 
int main() {
	string str1, str2;
	int dp[20][20];
	while(cin>> str1>> str2) {
		int m= str1.length();
		int n= str2.length();
		for(int i=0; i<m; i++) {
			dp[i][0]= 0;
		}
		for(int j=0; j<n; j++) {
			dp[0][j]= 0;
		}
		for(int i=1; i<=m; i++) {
			for(int j=1; j<=n; j++) {
				if(str1[i-1]== str2[j-1]) {
					dp[i][j]= dp[i-1][j-1]+ 1;
				} else {
					dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
				}
			}
		}
		cout<< dp[m][n]<< endl;
	} 
	return 0;
} 
