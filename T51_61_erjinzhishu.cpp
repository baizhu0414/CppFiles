#include<bits/stdc++.h>
using namespace std;

// ���⣺6.1�������� 
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

