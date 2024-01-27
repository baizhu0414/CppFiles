#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	while(getline(cin, str)) {
		if(str=="START"||str=="END") {
			continue;
		} else if(str=="ENDOFINPUT") {
			break;
		} else {
			for(int i=0; i<str.length(); i++) {
				if(str[i]>='A'&& str[i]<='Z') {
					str[i] = (str[i]-'A'-5 + 26)%26 + 'A';
				}
			}
		}
		cout<< str<< endl;
	}
	return 0;
}
