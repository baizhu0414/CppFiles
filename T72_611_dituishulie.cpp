#include<bits/stdc++.h>
using namespace std;
// 习题6.11 递推数列 

int process(int a0, int a1, int p, int q, int k, int mod) {
	if(k==0) {
		return a1;
	}
	int res=p*a1+q*a0;
	return process(a1, res%mod, p, q, k-1, mod);
}

int main() {
	int a0, a1, p, q, k;
	while(cin>> a0>> a1>> p>> q>> k) {
		cout<< process(a0, a1, p, q, k-1, 10000)<< endl;
	}
	return 0;
}


