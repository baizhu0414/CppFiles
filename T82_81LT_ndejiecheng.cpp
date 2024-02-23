#include<bits/stdc++.h>
using namespace std;

long long process(int n) {
	if(n==0|| n==1) {
		return 1;
	}
	return n*process(n-1);
}

int main() {
	int n;
	while(cin>> n) {
		cout<< process(n)<< endl;
	}
	return 0;
}
