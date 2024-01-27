#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	int ziMu[26];
	while(cin>>str) {
		memset(ziMu, 0, sizeof(ziMu));
		for(int i=0; i<str.length(); i++) {
			if(str[i]>='A'&& str[i]<='Z') {
				ziMu[str[i]-'A']++;
			}
		}
		for(int i=0; i<26; i++) {
			cout<< (char)(i+'A')<< ":"<< ziMu[i]<< endl;
		}
	}
	return 0;
}
