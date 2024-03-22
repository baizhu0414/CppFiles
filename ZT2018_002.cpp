#include<bits/stdc++.h>
using namespace std;
/*2、输入一个整数n（0<n<10），显示n行如下规律图形。
输入3 ，显示：
1
2 3
4 5 6*/
int main() {
	int n;
	while(cin>> n) {
		int num= 1;
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=i; j++) {
				cout<< num++<< " ";
			}
			cout<< endl;
		}
	}
	return 0;
}
