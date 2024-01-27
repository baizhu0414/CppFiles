#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	int res;
	while(cin>> str) {
		res=0;
		for(int i=str.length()-1; i>=0; i--) {
			if(str[i]=='0') {
				continue;
			} else {
				res += (str[i]-'0')*(pow(2, str.length()-i)-1);
			} 
		}
		cout<< res<< endl;
	}
	return 0;
}
