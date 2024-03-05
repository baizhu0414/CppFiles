#include<bits/stdc++.h>
using namespace std;

char s1[200], s2[200], s3[200];
int len3;

bool isLegal(char s[], int len) {
	for(int i=0; i<len; i++) {
		if(s[i]<'0'|| s[i]>'9') {
			return false;
		}
	}
	return true;
}

void addStr(char s1[], int len1, char s2[], int len2) {
	len3=0;
	int lenMin= min(len1, len2);
	int jinwei=0;
	for(int i=0; i<lenMin; i++) {
		int resI= s1[len1-i-1]-'0'+s2[len2-i-1]-'0'+jinwei;
		jinwei= resI/10;
		s3[i]= (char)(resI%10+'0');
	}
	if(len1> len2) {
		for(int i=lenMin; i<len1; i++) {
			int resI= s1[len1-i-1]-'0'+jinwei;
			jinwei= resI/10;
			s3[i]= (char)(resI%10+'0');
		}
	}
	if(len2> len1) {
		for(int i=lenMin; i<len2; i++) {
			int resI= s2[len2-i-1]-'0'+jinwei;
			jinwei= resI/10;
			s3[i]= (char)(resI%10+'0');
		}
	}
	len3= max(len1, len2);
	if(jinwei!=0) {
		s3[max(len1, len2)]= (char)(jinwei+'0');
		len3++;
	}
}

int main() {
	while(cin>> s1>> s2) {
		int len1=0;
		int len2=0;
		for(int i=0; s1[i]!='\0'; i++) {
			len1++;
		}
		for(int i=0; s2[i]!='\0'; i++) {
			len2++;
		}
		if(!isLegal(s1, len1)|| !isLegal(s2, len2)) {
			cout<< "ÊäÈë´íÎó"<< endl;
		}
		memset(s3, 0, sizeof(s3));
		addStr(s1, len1, s2, len2);
		for(int i=0; i<len3; i++) {
			cout<< s3[len3-1-i];
		}
		cout<< endl;
	}
	return 0;
}
