#include<bits/stdc++.h>
using namespace std;

string res[1000];
int len=0;
/*
递归：
    abc的全排列 = a开头bc的全排列 + b开头ac的全排列 + c开头ab的全排列
    其中，bc的全排列 = b开头c的全排列 + c开头b的全排列
    以此类推......
*/
void sortStr(string str, int l, int r) {
	if(l==r) {
//		cout<< str<< endl;
		res[len++]=str;
	}
	string temp;
	for(int i=l; i<r; i++) {
		temp=str[i]+str.substr(0, i)+str.substr(i+1, str.length());
		sortStr(temp, l+1, r);
	}
}

bool cmpUp(string s1, string s2) {
	return s1.compare(s2)<0;
}

int main() {
	string str;
	while(cin>> str) {
		len=0;
		sortStr(str, 0, str.length());
		sort(res, res+len, cmpUp);
		for(int i=0; i<len; i++) {
			cout<< res[i]<< endl;
		}
	}
	return 0;
}
