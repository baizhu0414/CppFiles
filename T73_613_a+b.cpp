#include<bits/stdc++.h>
using namespace std;
// ÀıÌâ6.13 a+b

string add(string aStr, string bStr) {
	string res="";
	int carry=0;
	for(int i=0; i<bStr.length(); i++) {
		int temp=aStr[aStr.length()-1-i]-'0'+bStr[bStr.length()-1-i]-'0'+carry;
		res=(char)(temp%10+'0')+res;
		carry=temp/10;
	}
	for(int i=bStr.length(); i<aStr.length(); i++) {
		int temp=aStr[aStr.length()-1-i]-'0'+carry;
		res=(char)(temp%10+'0')+res;
		carry=temp/10;
	}
	if(carry!=0) {
		res=(char)(carry+'0')+res;
	}
	return res;
}

int main() {
	string aStr, bStr;
	while(cin>> aStr>> bStr) {
		if(aStr.length()> bStr.length()) {
			cout<< add(aStr, bStr)<< endl;
		} else {
			cout<< add(bStr, aStr)<< endl; 
		}
	}
	return 0;
} 


