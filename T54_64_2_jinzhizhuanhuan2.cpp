#include<bits/stdc++.h>
using namespace std;

int charToInt(char c) {
	if(c>='0'&& c<='9') {
		return c-'0';
	} else {
		return c-'A'+10;
	}
}

// 把M进制数str转化为10进制 
long long transfer10(string str, int M) {
	cout<< str<< "->";
	long long res=0;
	for(int i=0; i<str.length(); i++) {
		res=res*M;
		res=res+charToInt(str[i]);
	}
	cout<< res<< endl;
	return res;
} 

char intToChar(int x) {
	if(x>=0&& x<=9) {
		return x+'0';
	} else {
		return x-10+'A';
	}
}

// 把10进制数str转化为 N进制 
string transferN(long long x, int N) {
	string res="";
	while(x!=0) {
		res=intToChar(x%N)+res;
		x/=N;
	}
	return res;
}

// 输入数据不会太大！不需要字符串处理方法，否则太复杂（大于10进制） 
int main() {
	int M, N;//(2, 36)即可能有Z这个字母（36-10+'A'） 
	string str;
	while(cin>> M>> N) {
		cin>> str;
		long long shijinzhi=transfer10(str, M);
		cout<< shijinzhi<< endl;
		cout<< transferN(shijinzhi, N)<< endl; 
	}
	return 0;
}

