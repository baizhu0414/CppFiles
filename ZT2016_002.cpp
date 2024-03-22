#include<bits/stdc++.h>
using namespace std;
/*ÏÔÊ¾µ¹Ñî»ÔÈý½Ç*/

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
		// ·ÇµÝ¹é 
//		for(int i=0; i<n; i++) {
//			tri[i][i]= 1;
//			tri[i][0]= 1;
//		}
//		for(int i=2; i<n; i++) {
//			for(int j=1; j<i; j++) {
//				tri[i][j]= tri[i-1][j]+ tri[i-1][j-1];
//			}
//		}
		// µÝ¹é
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
