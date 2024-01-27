#include<bits/stdc++.h>
using namespace std;

int key[26] = {1,2,3, 1,2,3, 1,2,3, 1,2,3, 1,2,3,
		1,2,3,4, 1,2,3, 1,2,3,4};
int main() {
	string str;
	while(cin>> str) {
		int total = key[str[0]-'a'];
		for(int i=1; i<str.length(); i++) {
			if(str[i]-str[i-1] == key[str[i]-'a']-key[str[i-1]-'a']) {
				total+= 2;
			}
			total+=key[str[i]-'a'];
		}
		cout<< total<< endl;
	}
	return 0;
}
