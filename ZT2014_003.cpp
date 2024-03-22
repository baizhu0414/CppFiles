#include<bits/stdc++.h>
using namespace std;
/*编写程序显示2-1000之间的所有完数，所谓完数是指，该数的各因子之和正好等于该数本身。*/

bool isWan(int x) {
	int total= 0;
	for(int i=1; i<x; i++) {
		if(x%i== 0) {
			total+= i;
		}
	}
	return total== x;
}

int main() {
	for(int i=2; i<=1000; i++) {
		if(isWan(i)) {
			cout<< i<< " ";
		}
	}
	cout<< endl;
	return 0;
}
