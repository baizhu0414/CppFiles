#include<bits/stdc++.h>
using namespace std;

int main() {
	char c;
//	getline(cin, str)
	while(scanf("%c", &c)!=EOF) {
		if(c<='z'&& c>='a') {
			c = (c-'a'+1)%26+'a';
		} else if(c<='Z'&& c>='A') {
			c = (c-'A'+1)%26+'A';
		}
		printf("%c", c);
	}
	return 0;
}
