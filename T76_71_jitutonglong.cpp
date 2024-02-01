#include<bits/stdc++.h>
using namespace std;
// LT7.1 ผฆอรอฌมý 

int main() {
	int a;
	while(cin>> a) {
		int maxC=0;
		int minC=0;
		if(a%2==0) {
			maxC=a/2;
			minC=a/4+(a%4)/2;
		}
		cout<< minC<< " "<< maxC<< endl;
	} 
	return 0;
} 

