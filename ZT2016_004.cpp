#include<bits/stdc++.h>
using namespace std;
/*输入一个小数（double类型存储），
格式化成货币形式存储于一个字符数组中，并输出， 
前面加$，整数每3位加逗号，小数点后保留两位。*/

string trans(int x) {
	string str= "";
	while(x!= 0) {
		str= (char)(x%10+'0')+ str;
		x/= 10;
	}
	return str;
}

int main() {
	double x;
	string str;
	while(cin>> x) {
		str= "";
		x*= 100;
		long long int y= round(x);
		str= trans(y%100)+ str;
		y/= 100;
		str= "."+ str;
		while(y> 1000) {
			str= ","+ trans(y%1000)+ str;
			y/= 1000;
		}
		str= "$"+ trans(y)+ str;
		cout<< str<< endl;
	}
	return 0;
}
