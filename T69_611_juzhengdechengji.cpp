#include<bits/stdc++.h>
using namespace std;
// 例题6.11 计算两个矩阵的乘积

 
int main() {
	int a[2][3], b[3][2];
	int res[2][2];
	for(int i=0; i<2; i++) {
		for(int j=0; j<3; j++) {
			cin>> a[i][j];
		}
	} 
	for(int i=0; i<3; i++) {
		for(int j=0; j<2; j++) {
			cin>> b[i][j];
		}
	}
	// 初始化不能忘记 
	for(int i=0; i<2; i++) {
		memset(res[i], 0, sizeof(res[i]));
	}
	// 计算乘积 
	for(int i=0; i<2; i++) {// x=i,y=j
		for(int j=0; j<2; j++) {
//			cout<<i<< "行，"<<j<< "列";
			// res[i][j]=(ai0*b0j)+(ai1*b1j)+(ai2*b2j).
			for(int k=0; k<3; k++) {
				res[i][j]+=(a[i][k]*b[k][j]);
			}
			cout<< "(res"<<i<<","<<j<<")="<< res[i][j]<< endl;
		}
	} 
	// 输出
	for(int i=0; i<2; i++) {
		for(int j=0; j<2; j++) {
			if(j==1) {
				cout<< res[i][j]<< endl;
			} else {
				cout<< res[i][j]<< " ";
			}
		}
	} 
	return 0;
}


