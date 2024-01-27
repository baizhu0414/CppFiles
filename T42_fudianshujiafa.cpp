#include<bits/stdc++.h>
using namespace std;

// jinwei:小数位进位 
string addZhengShu(string s1, int len1, string s2, int len2, int jinwei) {
	string res="";
	// 4441976058474520796, 9057183, 1
	for(int i=0; i<len2; i++) {
		int a = (s1[len1-i-1]-'0');
		int b = (s2[len2-i-1]-'0');
		int temp= a+b+jinwei; 
		res = (char)(temp%10 + '0') + res;
		jinwei = temp/10;
	}
	for(int i=len2; i<len1; i++) {
		int a = (s1[len1-i-1]-'0');
		int temp= a+jinwei; 
		res = (char)(temp%10 + '0') + res;
		jinwei = temp/10;
	}
	if(jinwei!=0) {
		res = (char)(jinwei + '0') + res;
	}
	return res;
}

// str1小数位数idx1大于str2小数部分idx2 
string add(string str1, int idx1, string str2, int idx2) {
//	cout<< str1<< "("<< idx1<< ")+"<< str2<< "("<< idx2<< ")"<< "=";
	int jinwei=0;
	// 易错点，直接拼接长出来的小数位 
	string res=str1.substr(str1.length()-idx1+idx2);
	// res:2
	// 11.2222,1.035
	for(int i=0; i<idx2; i++) {
		int a = str1[str1.length()-idx1+idx2-i-1]-'0';
		int b = str2[str2.length()-i-1]-'0';
		int temp = a+b+jinwei;
		res = (char)(temp%10+'0') + res;
		jinwei = temp/10;
	} 
	res = '.' + res;
//	cout<< res<< endl;
	int zLen1 = str1.length()-idx1-1;
	int zLen2 = str2.length()-idx2-1;
	if(zLen1>zLen2) {
		res = addZhengShu(str1.substr(0, zLen1), zLen1, str2.substr(0, zLen2), zLen2, jinwei) + res;
	} else {
		res = addZhengShu(str2.substr(0, zLen2), zLen2, str1.substr(0, zLen1), zLen1, jinwei) + res;
	}
	return res;
}

int main() {
	string str1, str2;
	while(cin>> str1>> str2) {
		int idx1=0;
		int idx2=0;// 小数点后位数 
		string res;
		for(int i=0; i<str1.length(); i++) {
			if(str1[i]=='.') {
				// str1.find('.')
				idx1 = str1.length()-1-i; 
			}
		}
		idx2 = str2.length()-1-str2.find('.');
//		for(int i=0; i<str2.length(); i++) {
//			if(str2[i]=='.') {
//				idx2 = str2.length()-1-i; 
//			}
//		}
		if(idx1>idx2) {
			res = add(str1, idx1, str2, idx2);
		} else {
			res = add(str2, idx2, str1, idx1);
		}
		// 11.00
		for(int i=res.length()-1; i>=0; i--) {
			if(res[i]!='0' && res[i]!='.') {
				res = res.substr(0, i+1);
				break;
			}
		}
		cout<< res<< endl;
	}
	return 0;
}
