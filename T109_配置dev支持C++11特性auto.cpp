#include<bits/stdc++.h>
using namespace std;
// Tools-> Compiler Options
// -> ¹´Ñ¡Add the following commands when calling the compilor:
// ->Ìí¼Ó "-std=c++14" 
int main() {
	int n;
	vector<int> list(3);
	cin>> list[0]>> list[1]>> list[2];
	for(auto x= list.begin(); x!=list.end(); ++x) {
		cout<< *x<< endl;
	}
	return 0;
}

