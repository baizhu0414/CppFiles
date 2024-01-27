#include<bits/stdc++.h>
using namespace std;

int charToInt(char c) {
	if(c>='0'&& c<='9') {
		return c-'0';
	} else {
		return c-'A'+10;
	}
}

// ��M������strת��Ϊ10���� 
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

// ��10������strת��Ϊ N���� 
string transferN(long long x, int N) {
	string res="";
	while(x!=0) {
		res=intToChar(x%N)+res;
		x/=N;
	}
	return res;
}

// �������ݲ���̫�󣡲���Ҫ�ַ���������������̫���ӣ�����10���ƣ� 
int main() {
	int M, N;//(2, 36)��������Z�����ĸ��36-10+'A'�� 
	string str;
	while(cin>> M>> N) {
		cin>> str;
		long long shijinzhi=transfer10(str, M);
		cout<< shijinzhi<< endl;
		cout<< transferN(shijinzhi, N)<< endl; 
	}
	return 0;
}

