#include<bits/stdc++.h>
using namespace std;

void toBigC(char &c) {
	if(c>='a'&& c<='z') {
		c = c-'a'+'A';
	}
}

int main() {
	string str;
	while(getline(cin, str)) {
		toBigC(str[0]);
		for(int i=1; i<str.length(); i++) {
			if(str[i]==' '|| str[i]=='\t'|| str[i]=='\r') {
				if(i+1<str.length()) {
					toBigC(str[i+1]);
				}
			}
		}
		cout<< str<< endl;
	} 
	return 0;
}
