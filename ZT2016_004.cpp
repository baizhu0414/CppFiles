#include<bits/stdc++.h>
using namespace std;
/*����һ��С����double���ʹ洢����
��ʽ���ɻ�����ʽ�洢��һ���ַ������У�������� 
ǰ���$������ÿ3λ�Ӷ��ţ�С���������λ��*/

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
