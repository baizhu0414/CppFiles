#include<bits/stdc++.h>
using namespace std;
// Tools-> Compiler Options
// -> ��ѡAdd the following commands when calling the compilor:
// ->��� "-std=c++14" 
int main() {
	int n;
	vector<int> list(3);
	cin>> list[0]>> list[1]>> list[2];
	for(auto x= list.begin(); x!=list.end(); ++x) {
		cout<< *x<< endl;
	}
	return 0;
}

