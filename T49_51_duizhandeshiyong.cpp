#include<bits/stdc++.h>
using namespace std;
// ϰ�⣺5.1 
int main() {
	stack<int> zhan;
	int n;
	while(cin>> n) {
		char c;
		int temp;
		for(int i=0; i<n; i++) {
			cin>> c;
			if(c=='P') {
				cin>> temp;
				zhan.push(temp);
			} else if(c=='O') {
				if(!zhan.empty()) {
                    zhan.pop();
                }
			} else if(c=='A') {
				if(zhan.empty()) {
					cout<< "E"<< endl;
				} else {
					cout<< zhan.top()<< endl;
				}
			}
		} 
	} 
	return 0;
}

