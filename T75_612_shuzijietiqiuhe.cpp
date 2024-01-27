#include<bits/stdc++.h>
using namespace std;
// 习题6.12 数字阶梯求和 

void add(string& res, string cur) {
	cout<< res<< "+"<< cur<< "=(";
	int carry=0;
	// cur长度大于等于res 
	for(int i=0; i<res.length(); i++) {
//		cout<< "//i="<<i<<":"<<res[res.length()-1-i]<<"+"<<cur[cur.length()-1-i];
		int temp=res[res.length()-1-i]-'0'+cur[cur.length()-1-i]-'0'+carry;
		res[res.length()-1-i]=(char)(temp%10+'0');
		carry=temp/10;
	}
	for(int i=res.length(); i<cur.length(); i++) {
		int temp=cur[cur.length()-1-i]-'0'+carry;
		res=(char)(temp%10+'0')+res;
		carry=temp/10;
	}
	if(carry!=0) {
		res=(char)(carry+'0')+res;
	}
	cout<<")"<< res<< endl;
} 

int main() {
	int a, n;
	while(cin>> a>> n) {
		string temp="";
		string res="0";
		for(int i=0; i<n; i++) {
			temp=temp+(char)(a+'0');
			// temp的长度必然大于等于res. 
			add(res, temp);
		}
		cout<< res<< endl;
	} 
	return 0;
}

