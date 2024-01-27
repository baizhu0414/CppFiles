#include<bits/stdc++.h>
using namespace std;

// ϰ�⣺6.1 
int main() {
	int n;
	while(cin>> n) {
		string res="";
		while(n!=0) {
			res=(char)(n%8+'0')+res;
			n/=8;
		}
		cout<< res<< endl;
	} 
	return 0;
}

