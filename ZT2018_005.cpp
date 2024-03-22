#include<bits/stdc++.h>
using namespace std;
/*两个数字字符串相加*/

bool isNumber(char s[]) {
	int len=0;
	while(s[len]!='\0') {
		if(s[len]<'0'|| s[len]>'9') {
			return false;
		}
		len++;
	}
	return true;
}

// 返回s3长度 
int add(char s1[], char s2[], char *s3) {
	int len1= 0;
	int len2= 0;
	int len3= 0;
	while(s1[len1]!='\0') {
		len1++;
	}
	while(s2[len2]!='\0') {
		len2++;
	}
	int rest= 0;// 进位 
	for(int i=0; i<min(len1, len2); i++) {
		rest= s1[len1-1-i]-'0'+ s2[len2-1-i]-'0'+ rest;
		s3[len3++]= (char)(rest%10+'0');
		rest/= 10; 
	}
	for(int i=min(len1, len2); i<len1; i++) {
		rest= s1[len1-1-i]-'0'+ rest;
		s3[len3++]= (char)(rest%10+'0');
		rest/= 10; 
	}
	for(int i=min(len1, len2); i<len2; i++) {
		rest= s2[len2-1-i]-'0'+ rest;
		s3[len3++]= (char)(rest%10+'0');
		rest/= 10; 
	}
	while(rest!= 0) {
		s3[len3++]= (char)(rest%10+'0');
		rest/= 10; 
	}
	return len3;
}

int main() {
	char s1[200], s2[200], s3[200];
	while(cin>> s1>> s2) {
		if(!isNumber(s1)|| !isNumber(s2)) {
			cout<< "输入错误"<< endl;
			continue;
		}
		int len3= add(s1, s2, s3);
		for(int i=0; i<len3; i++) {
			cout<< s3[len3-1-i];
		}
		cout<< endl;
	}
	return 0;
}
