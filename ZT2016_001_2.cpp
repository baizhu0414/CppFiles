#include<bits/stdc++.h>
using namespace std;
/*����һ��С����double ���ʹ洢������ʽ���ɻ�����ʽ�洢��һ���ַ������У��������ǰ
���$������ÿ 3 λ�Ӷ��ţ�С���������λ��*/

void f(double x, char res[], int &idx) {
	idx= 0;// ����洢 
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

