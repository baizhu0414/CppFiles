#include<bits/stdc++.h>
using namespace std;

void multiple(string& res, int M) {
	cout<< res<< "*"<< M<< "=";
	int carry=0;
	int temp;
	for(int i=res.length()-1; i>=0; i--) {
		temp=(res[i]-'0')*M+carry;
		carry=temp/10;
		res[i]=temp%10+'0';
	}
	// ע�����λ������
	if(carry!=0) {
		res=(char)(carry+'0')+res;
	} 
	cout<< res<< endl;
}

void add(string& res, int x) {
	cout<< res<< "+"<< x<< "=";
	int carry=x;
	for(int i=res.length()-1; i>=0; i--) {
		int temp=(res[i]-'0')+carry;
		carry=temp/10;
		res[i]=(temp%10)+'0';
		if(carry==0) {
			break;
		}
	}
	if(carry!=0) {
		res=(char)(carry+'0')+res;
	}
	cout<< res<< endl;
}

// M(<=10)������Xת��Ϊʮ���� 
string transfer10(string X, int M) {
	string res="";
	for(int i=0; i<X.length(); i++) {
		multiple(res, M);
		add(res, X[i]-'0');
	}
	return res;
}

bool isZero(string s) {
	for(int i=0; i<s.length(); i++) {
		if(s[i]!='0') {
			return false;
		}
	}
	return true;
}

// ����X%N������,X��ΪX/N 
char divide(string& X, int N) {
	cout<< X<< "/"<< N<< "=";
	int carry=0;
	for(int i=0; i<X.length(); i++) {
		int temp=carry*10+X[i]-'0';
		X[i]=temp/N+'0';
		carry=temp%N;
	}
	cout<< X<< "..."<< carry<< endl;
	return carry+'0';
} 

// ʮ������xת��ΪN���� 
string transferN(string X, int N) {
	string res="";
	while(!isZero(X)) {
		res=divide(X, N)+res;
	}
	return res;
}

// ���⣺6.4 M������X��ת����N������ 
int main() {
	int M, N;
	string X;
	while(cin>> M>> N) {
		cin>> X;
		string shijinzhi=X;
		if(M!=10) {
			shijinzhi=transfer10(X, M);
		}
		cout<< shijinzhi<< endl;
		cout<< transferN(shijinzhi, N)<< endl;
	}
	return 0;
} 

