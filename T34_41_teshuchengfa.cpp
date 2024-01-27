#include<bits/stdc++.h>
using namespace std;

int main() {
	string strA, strB;
	int res;
	while(cin>> strA>> strB) {
		res = 0;
		for(int i=0; i<strA.length(); i++) {
			for(int j=0; j<strB.length(); j++) {
				res += ((strA[i]-'0')*(strB[j]-'0'));
			}
		}
		cout<< res<< endl;
	}
	return 0;
}
