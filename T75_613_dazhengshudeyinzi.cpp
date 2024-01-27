#include<bits/stdc++.h>
using namespace std;
// 习题6.13 大整数的因子

// 能整除则返回true。 
bool divide(string c, int k) {
	cout<< c<< "/"<< k<< "=";
	int rest=0;
	for(int i=0; i<c.length(); i++) {
		int temp=rest*10+(c[i]-'0');
		c[i]=temp/k+'0';
		rest=temp%k;
	}
	cout<< c<< endl;
	return rest==0;
}

int main() {
	string c;
	while(cin>> c) {
		if(c.compare("-1")==0) {
			break;
		}
		vector<int> res;
		for(int k=2; k<=9; k++) {
			if(divide(c, k)) {
				res.push_back(k);
			}
		}
		if(res.size()==0) {
            cout<< "none"<< endl;
        }
		for(int i=0; i<res.size(); i++) {
			if(i==res.size()-1) {
				cout<< res[i]<< endl;
			} else {
				cout<< res[i]<< " ";
			}
		} 
	}
	return 0;
}

