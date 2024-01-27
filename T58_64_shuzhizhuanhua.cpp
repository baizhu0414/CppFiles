#include<bits/stdc++.h>
using namespace std;

// ϰ��6.4 ����ת�� 
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

// n������strת��Ϊ10���� 
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

// 10����xת��Ϊ n���� 
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

