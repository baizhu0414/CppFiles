#include<bits/stdc++.h>
using namespace std;

// 习题：6.3进制转换 
int charToInt(char c) {
	if(c>='0'&& c<='9'){
		return c-'0';
	} else {
		return c-'A'+10;
	}
}

// str为10进制 
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

// 10进制数str 
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

// n进制数str转换为10进制 
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

