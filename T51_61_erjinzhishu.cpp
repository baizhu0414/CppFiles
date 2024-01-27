#include<bits/stdc++.h>
using namespace std;

// 例题：6.1二进制数 
int main() {
	unsigned int n;
	while(cin>> n) {
		string res="";
		while(n>0) {
			res = (char)(n%2+'0') + res;
			n/=2;
		}
		cout<< res<< endl;
	}
	return 0;
}

