#include <bits/stdc++.h>
using namespace std;

// ϰ��6.2 ��һ��A+B 
// 10����xת��Ϊ m�������ַ��� 
string transferN(int x, int m) {
	string res="";
	if(x==0){
		res="0";
	}
	while(x!=0){
		res=(char)(x%m+'0')+res;
		x/=m;
	} 
	return res;
}

// aStr���ȴ���bStr 
string addStrM(string aStr, string bStr, int m) {
	cout<< aStr<< "+"<< bStr<< "=";
	string res="";
	int carry=0;
	for(int i=0; i<bStr.length(); i++) {
		int temp=aStr[aStr.length()-1-i]-'0' + bStr[bStr.length()-1-i]-'0' + carry;
		res=(char)(temp%m+'0')+res;
		carry=temp/m;
	} 
	for(int i=bStr.length(); i<aStr.length(); i++) {
		int temp=aStr[aStr.length()-1-i]-'0'+carry;
		res=(char)(temp%m+'0')+res;
		carry=temp/m; 
	}
	if(carry!=0) {
		res=(char)(carry+'0')+res;
	}
	cout<< res<< endl;
	return res;
}

int main() {
    int m, a, b;//1<m<10
    while (cin >> m) { // ע�� while ������ case
    	if(m==0) break;
    	cin>> a >> b;
        string aStr = transferN(a, m);
        string bStr = transferN(b, m);
        cout<< a<< "->"<< aStr<< endl;
        cout<< b<< "->"<< bStr<< endl;
        string res;
        if(aStr.length()>bStr.length()) {
        	res = addStrM(aStr, bStr, m);
		} else {
			res = addStrM(bStr, aStr, m);
		}
        cout<< res<< endl;
    }
}
// 64 λ������� printf("%lld")
