#include<bits/stdc++.h>
using namespace std;
/*��ʾ���������*/

int yanghui(int i, int j) {
	if(i==j|| j==0) {
		return 1;
	}
	return yanghui(i-1, j)+ yanghui(i-1, j-1);
} 

int main() {
	int n;
	while(cin>> n) {
		int tri[n+1][n+1];
		// �ǵݹ� 
//		for(int i=0; i<n; i++) {
//			tri[i][i]= 1;
//			tri[i][0]= 1;
//		}
//		for(int i=2; i<n; i++) {
//			for(int j=1; j<i; j++) {
//				tri[i][j]= tri[i-1][j]+ tri[i-1][j-1];
//			}
//		}
		// �ݹ�
		for(int i=0; i<n; i++) {
			for(int j=0; j<=i; j++) {
				tri[i][j]= yanghui(i, j);
			}
		} 
		for(int i=0; i<n; i++) {
			for(int j=0; j<n-i; j++) {
				cout<< tri[n-1-i][j]<< " ";
			}
			cout<< endl;
		}
	}
	return 0;
}
