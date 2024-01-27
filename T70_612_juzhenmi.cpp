#include<bits/stdc++.h>
using namespace std;
// 例题6.12 矩阵幂

int n, k;
int a[10][10];
int res[10][10];

// res*a
void multiple(int n) {
	int temp[10][10];
	for(int i=0; i<n; i++) {
		memset(temp[i], 0, sizeof(temp[i]));
	}
	for(int i=0; i<n; i++) { // x=i, y=j.
		for(int j=0; j<n; j++) {
			// temp[i][j]=∑(aik*bkj);
			for(int k=0; k<n; k++) {
				temp[i][j]+=(res[i][k]*a[k][j]);
				cout<< res[i][k]<<"*"<<a[k][j]<< " + ";
			}
		}
	}

	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			res[i][j]=temp[i][j];
		}
	}
}

void printM() {
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if(j==n-1) {
				cout<< res[i][j]<< endl;
			} else {
				cout<< res[i][j]<< " ";
			}
		}
	}
}

int main() {
	while(cin>> n>> k) {
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				cin>> a[i][j];
				res[i][j]=a[i][j];
			}
		}
		// 计算方阵乘法(k个矩阵相乘即调用k-1次两两乘法。)
		for(int i=0; i<k-1; i++) {
			multiple(n);
		}
		printM();
	}
	return 0;
}

