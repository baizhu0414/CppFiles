#include<bits/stdc++.h>
using namespace std;

// ʮ�����������[4(10)->100(2)->001(2)->1(10)]
// str==0����true 
bool isZero(string str) {
	for(int i=0; i<str.length(); i++) {
		if(str[i]!='0') {
			return false;
		}
	}
	return true;
}

int mo2(string str) {
	int last = str[str.length()-1]-'0';// ���һλ 
	cout<< str<< "%2="<< last%2<< " "; 
	return last%2;
}

// str����x 
void divide(string &str, int x) {
	cout<< str<< "/"<< x<< "=";
	int rest = 0;
	for(int i=0; i<str.length(); i++) {
		rest = rest*10+(str[i]-'0');
		str[i] = rest/x+'0';
		rest=rest%x;
	} 
	cout<< str<< endl;
} 

// ���� 
void reverse(string& str) {
	int mid = str.length()/2;
	char c;
	for(int i=0; i<mid; i++) {
		c = str[i];
		str[i] = str[str.length()-i-1];
		str[str.length()-i-1] = c;
	}
}

// �˷� 
void multiple(string &res, int x) {
	int jinwei=0;
	for(int i=res.length()-1; i>=0; i--) {
		int cur=(res[i]-'0')*x+jinwei;
		res[i]=cur%10+'0';
		jinwei=cur/10;
	}
	if(jinwei!=0) {
		res = (char)(jinwei+'0')+res;
	}
} 

// �ӷ� 
void add(string &res, int a) {
	int jinwei=a;
	for(int i=res.length()-1; i>=0; i--) {
		int cur = res[i]-'0'+jinwei;
		res[i] = (char)((cur%10)+'0');
		jinwei = cur/10;
		if(jinwei==0) {
			break;
		}
	}
	if(jinwei!=0) {
		res+='1'+res;
	}
} 

// 2����ת10���� 
string getRes(string str) {
	string res="";
	// 100(res*2+��λ����λ)
	for(int i=0; i<str.length(); i++) {
		multiple(res, 2);
		add(res, str[i]-'0'); 
	}
	return res;
}

// ����6.3 
int main() {
	string str;
	while(cin>> str) {
		string res=""; 
		if(isZero(str)) {
			res = "0";
		}
		while(!isZero(str)) {
			res=(char)(mo2(str)+'0')+res;
			divide(str, 2);
		}
		cout<< "�����ƣ�"<< res<< endl;
		reverse(res);
		cout<<"�����Ƶ���"<< res<< endl;
		cout<<"��Ӧʮ���ƣ�"<< getRes(res);
	} 
	return 0;
} 

