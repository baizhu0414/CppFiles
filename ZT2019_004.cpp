#include<bits/stdc++.h>
using namespace std;
/*2019 判断字符串是否是回文，严格条件区分大小写，不严格条件下不区分大小写也不区
分标点。(严格:aba 是，abA 不是。不严格，a,b K bA 是，abA 是，abc 不是)*/

bool yange(string str) {
//	cout<< "panduan:"<< str<< endl;
	int mid=str.length()/2;
	for(int i=0; i<mid; i++) {
		if(str[i]!=str[str.length()-i-1]) {
			return false;
		}
	}
	return true;
}

bool buyange(string str) {
	string strSmall;
	for(int i=0; i<str.length(); i++) {
		if(str[i]>='A'&& str[i]<='Z') {
			strSmall+=(char)(str[i]-'A'+'a');
		} else {
			strSmall+=str[i];
		}
	}
	return yange(strSmall);
}

int main() {
	string str;
	while(1) {
		getline(cin, str);
		cout<< "是否区分大小写(y/n):";
		char c;
		cin>> c;
		cin.get();
		if(c=='y') {
			if(yange(str)) {
				cout<< "区分大小写是回文"<< endl; 
			} else {
				cout<< "区分大小写不是回文"<< endl;
			}
		} else {
			if(buyange(str)) {
				cout<< "不区分大小写是回文"<< endl; 
			} else {
				cout<< "不区分大小写不是回文"<< endl;
			}
		}
	}
	return 0;
}

