#include<bits/stdc++.h>
using namespace std;

// n层从a移动到c (https://zh.wikipedia.org/wiki/%E6%B1%89%E8%AF%BA%E5%A1%94)
void hannuo1(int n, char a, char b, char c) {
	if(n==0) {
		return;
	}
	hannuo1(n-1, a, c, b);
	cout<< n<< "从"<< a<< "移动到"<< c<< endl;
	hannuo1(n-1, b, a, c);
}

int main() {
	int n;
	while(cin>> n) {
		hannuo1(n, 'A', 'B', 'C');
	}
	return 0;
}

