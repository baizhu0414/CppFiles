#include<bits/stdc++.h>
using namespace std;
// ÀýÌâ6.14 NµÄ½×³Ë

void multiple(string& res, int x) {
	int carry=0;
	for(int i=res.length()-1; i>=0; i--) {
		int temp=(res[i]-'0')*x+carry;
		res[i]=(char)(temp%10+'0'); 
		carry=temp/10;
	}
	while(carry>0) {
		res=(char)(carry%10+'0')+res;
		carry/=10;
	} 
}

int main() {
	int N;
	while(cin>> N) {
		string res="1";
		for(int i=2; i<=N; i++) {
			multiple(res, i);
		}
		cout<< res<< endl;
	} 
	return 0;
}

