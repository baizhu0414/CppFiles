#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	while(cin>> n) {
		int sanjiao[31][31];
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				sanjiao[i][j]=1;
			}
		}
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				if(j!=0&& i!=j) {
					sanjiao[i][j]=sanjiao[i-1][j-1]+ sanjiao[i-1][j];
				}
			}
		}
		for(int i=0; i<n; i++) {
			for(int j=0; j<=i; j++) {
				string empty="";
				for(int k=0; k<n-i-1&& j==0; k++) {
					empty+=' ';
				}
				if(j==i) {
					cout<< empty<< sanjiao[i][j];
				} else {
					cout<< empty<< sanjiao[i][j]<< " ";
				}
			}
			cout<< endl;
		}
	}
	return 0;
}
