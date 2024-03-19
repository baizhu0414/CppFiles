#include<bits/stdc++.h>
using namespace std;
// µÝ¹é¼ÆËãÑî»ÔÈý½Ç
 
int tri[31][31];
int calculate(int i, int j) {
	if(j==1|| i==j) {
		return 1;
	}
	return calculate(i-1, j)+ calculate(i-1, j-1);
}

int main() {
	int n;
	while(cin>> n) {
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=i; j++) {
				tri[i][j]= calculate(i, j);
			}
		}
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=i; j++) {
				if(j== 1) {
					for(int k=0; k<n-i; k++) {
						cout<< " ";
					}
				}
				if(i== j) {
					cout<< tri[i][j]<< endl;
				} else {
					cout<< tri[i][j]<< " ";
				}
			}
		}
	}
	return 0;
}

