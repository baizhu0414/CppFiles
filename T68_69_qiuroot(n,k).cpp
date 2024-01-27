#include<bits/stdc++.h>
using namespace std;
// 习题6.9 求root(N,K) [难，套公式，此题省略N'=N%(k-1)]

// 讲解见T67_610_A^B 
long long calculate(int x, int y) {
	long long res=1;
	while(y>0) {
		if(y%2==1) {
			res=res*x;
		}
		y=y/2;
		x=x*x;
	}
	return res;
}

char intToChar(int x) {
	if(x>=0&& x<=9) {
		return x+'0';
	} else {
		return x-10+'A';
	}
}

int charToInt(char c) {
	if(c>='0'&& c<='9') {
		return c-'0';
	} else {
		return c-'A';
	}
}

int root(long long N, int k) {
	if(N<k) return N;
	string str="";
	while(N>0) {
		str=intToChar(N%k)+str;
		N/=k;
	}
	int total=0;
	for(int i=0; i<str.length(); i++) {
		total+=charToInt(str[i]); 
	}
	return root(total, k);
}

int main() {
	int x, y, k;
	while(cin>> x>> y>> k) {
		long long res=calculate(x, y);
		cout<< x<< "^"<< y<< "="<< res<< endl;
		cout<< root(res, k)<< endl;
	}
	return 0;
}

