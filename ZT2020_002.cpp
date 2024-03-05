#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	while(cin>> n) {
		int num=1;
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=i; j++) {
				if(j==i) {
					cout<< num++<< endl;
				} else {
					cout<< num++<< " ";
				}
			}
		}
	}
	return 0;
}
