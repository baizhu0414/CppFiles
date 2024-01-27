#include<bits/stdc++.h>
using namespace std;
// 习题A+B for Metrics 

struct Metrics {
	int a[10][10];
	int row;
	int col;
	Metrics(int r, int c):row(r), col(c){}
};

int countRC(Metrics m) {
	int count=0;
	for(int i=0; i<m.row; i++) {
		for(int j=0; j<m.col; j++) {
			if(m.a[i][j]!=0) {
				break;
			} else if(j==m.col-1) { // m.a[i][j]==0必成立。 
				count++;
			}
		}
	}
	for(int j=0; j<m.col; j++) {
		for(int i=0; i<m.row; i++) {
			if(m.a[i][j]!=0) {
				break;
			} else if(i==m.row-1) {
				count++;
			}
		}
	}
	return count; 
}

int main() {
	int M, N;
	while(cin>> M) {
		if(M==0) break;
		cin>> N;
		Metrics A(M, N);
		Metrics B(M, N);
		Metrics C(M, N);
		for(int i=0; i<A.row; i++) {
			for(int j=0; j<A.col; j++) {
				cin>> A.a[i][j];
			} 
		}
		for(int i=0; i<A.row; i++) {
			for(int j=0; j<A.col; j++) {
				cin>> B.a[i][j];
			} 
		}
		for(int i=0; i<C.row; i++) {
			memset(C.a[i], 0, sizeof(C.a[i]));
		} 
		// 求和
		for(int i=0; i<A.row; i++) {
			for(int j=0; j<A.col; j++) {
				C.a[i][j]=A.a[i][j]+B.a[i][j];
			}
		} 
		cout<< countRC(C)<< endl;
	}
	return 0;
} 
