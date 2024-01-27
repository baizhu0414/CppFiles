#include<bits/stdc++.h>
using namespace std;

// ϰ�⣺6.3����ת�� 
int charToInt(char c) {
	if(c>='0'&& c<='9'){
		return c-'0';
	} else {
		return c-'A'+10;
	}
}

// strΪ10���� 
void multiple(string& str, int n) {
	cout<< str<< "*"<< n<< "=";
	int carry=0;
	for(int i=str.length()-1; i>=0; i--) {
		int temp=(str[i]-'0')*n+carry;
		str[i]=temp%10+'0';
		carry=temp/10;
	}
	while(carry!=0) {
		str=(char)(carry%10+'0')+str;
		carry/=10;
	}
	cout<< str<< endl;
}

// 10������str 
void add(string& str, int n) {
	cout<< str<< "+"<< n<< "=";
	int carry=n;
	for(int i=str.length()-1; i>=0; i--) {
		int temp=str[i]-'0'+carry;
		str[i]=temp%10+'0';
		carry=temp/10;
		if(carry==0) break; 
	}
	while(carry!=0) {
		str=(char)(carry%10+'0')+str;
		carry/=10;
	} 
	cout<< str<< endl;
}

// n������strת��Ϊ10���� 
string transfer10(string str, int n) {
	string res="";
	for(int i=0; i<str.length(); i++) {
		multiple(res, n);
		add(res, charToInt(str[i]));
	}
	return res;
}

int main() {
	string str;
	while(cin>> str) {
		str=str.substr(2);//0xAAAA
		cout<< transfer10(str, 16)<< endl;
	} 
	return 0;
}

