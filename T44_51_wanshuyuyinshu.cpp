#include<bits/stdc++.h>
using namespace std;

// 0:完数，1：盈数，2：其它 
int getType(int x) {
	int total=1;
	for(int i=2; i<x/2+1; i++) {
		if(x%i==0) {
			total += i;
		}
	}
	if(total==x) {
		return 0;
	} else if(total>x) {
		return 1;
	} else {
		return 2;
	}
}

// 例题5.1 
int main() {
	vector<int> wanshu;
	vector<int> yingshu;
	for(int i=2; i<=60; i++) {
		int type = getType(i);
		if(type==0) {
			wanshu.push_back(i);
		} else if(type==1) {
			yingshu.push_back(i);
		}
	}
	cout<< "E: ";
	for(int i=0; i<wanshu.size(); i++) {
		cout<< wanshu[i]<< " ";
	}
	cout<< "G: ";
	for(int i=0; i<yingshu.size(); i++) {
		if(i==yingshu.size()-1) {
			cout<< yingshu[i]<< endl;
		} else {
			cout<< yingshu[i]<< " ";
		}
	}
	cout<< endl;
	return 0;
}
