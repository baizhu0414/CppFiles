#include<bits/stdc++.h>
using namespace std;
/*任何一个合数都可以写成几个质数相乘的形式。
请编写程序分解质因数.*/

bool isZhishu(int x) {
	for(int i=2; i<=x/2; i++) {
		if(x%i== 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	while(cin>> n) {
		vector<int> res;
		for(int i=2; i<=n;) {
			if(n%i==0 && isZhishu(i)) {
				cout<< i<< " ";
				res.push_back(i);
				n/= i;
				i= 2;
			} else {
				i++;
			}
		} 
		cout<< endl;
		for(int i=0; i<res.size(); i++) {
			if(i< res.size()-1) {
				cout<< res[i]<< " * ";
			} else {
				cout<< res[i]<< endl;
			}
		}
	}
	return 0;
}
