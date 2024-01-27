#include<bits/stdc++.h>
using namespace std;

// 习题6.4 数制转换 
int charToInt(char c) {
	if(c>='0'&& c<='9') {
		return c-'0';
	} else if(c>='A'&& c<='Z') {
		return c-'A'+10;
	} else {
		return c-'a'+10;
	}
} 

char intToChar(int x) {
	if(x>=0&& x<=9) {
		return x+'0';
	} else {
		return x-10+'A';
	}
}

// n进制数str转换为10进制 
long transfer10(string str, int n) {
	cout<< str<< "->";
	long res=0;
	for(int i=0; i<str.length(); i++) {
		res=res*n;
		res+=charToInt(str[i]);
	}
	cout<< res<< endl;
	return res;
}

// 10进制x转换为 n进制 
string transferN(long x, int n) {
	string res="";
	while(x!=0) {
		res=intToChar(x%n)+res;
		x/=n;
	} 
	return res;
}

int main() {
	int a,b;
	string n;
	while(cin>> a>> n>> b) {
		long x=transfer10(n, a);
		cout<< transferN(x, b)<< endl;
	} 
	return 0;
}

