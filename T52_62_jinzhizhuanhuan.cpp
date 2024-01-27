#include<bits/stdc++.h>
using namespace std;

bool isZero(string str) {
	for(int i=0; i<str.length(); i++) {
		if(str[i]!='0') {
			return false;
		}
	}
	return true;
}

int mo2(string str) {
	int zuihouyiwei = str[str.length()-1]-'0';
//	cout<< str<<"%2="<<zuihouyiwei%2<< " ";
	return zuihouyiwei%2;
}

// str³ýÒÔ2 
void di2(string &str) {
//	cout<< str<< "/2=";
	int rest=0;
	for(int i=0; i<str.length(); i++) {
		int a = str[i]-'0';
		rest = rest*10+a;
		if(rest>=2) {
			str[i] = rest/2+'0';
			rest=rest%2;
		} else {
			str[i]='0';
		}
	}
//	cout<< str<< endl;
}

// ÀýÌâ6.2 
int main() {
	string str;
	while(cin>> str) {
		string res="";
		if(isZero(str)) {
			res="0";
		}
		while(!isZero(str)) {
			res = (char)(mo2(str)+'0')+res;
			di2(str);
		}
		cout<< res<< endl;
	} 
	return 0;
}

