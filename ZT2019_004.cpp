#include<bits/stdc++.h>
using namespace std;
/*2019 �ж��ַ����Ƿ��ǻ��ģ��ϸ��������ִ�Сд�����ϸ������²����ִ�СдҲ����
�ֱ�㡣(�ϸ�:aba �ǣ�abA ���ǡ����ϸ�a,b K bA �ǣ�abA �ǣ�abc ����)*/

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
		cout<< "�Ƿ����ִ�Сд(y/n):";
		char c;
		cin>> c;
		cin.get();
		if(c=='y') {
			if(yange(str)) {
				cout<< "���ִ�Сд�ǻ���"<< endl; 
			} else {
				cout<< "���ִ�Сд���ǻ���"<< endl;
			}
		} else {
			if(buyange(str)) {
				cout<< "�����ִ�Сд�ǻ���"<< endl; 
			} else {
				cout<< "�����ִ�Сд���ǻ���"<< endl;
			}
		}
	}
	return 0;
}

