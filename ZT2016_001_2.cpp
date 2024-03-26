#include<bits/stdc++.h>
using namespace std;
/*输入一个小数（double 类型存储），格式化成货币形式存储于一个字符数组中，并输出，前
面加$，整数每 3 位加逗号，小数点后保留两位。*/

void f(double x, char res[], int &idx) {
	idx= 0;// 逆序存储 
	long long n= round(x*100);
	res[idx++]= (char)(n%10+'0');
	n/= 10;
	res[idx++]= (char)(n%10+'0');
	n/= 10;
	res[idx++]= '.';
	cout<< res<< endl;
	int count= 0;
	while(n>0) {
		count++;
		res[idx++]= (char)(n%10+'0');
		n/= 10;
		if(count%3==0&& n!=0) {
			res[idx++]= ',';
		}
	} 
	res[idx++]= '$';
}

int main() {
	double x;
	cin>> x;
	int len;
	char res[70];
	f(x, res, len);
	for(int i=len-1; i>=0; i--) {
		cout<< res[i];
	}
	cout<< endl;
	return 0;
}

