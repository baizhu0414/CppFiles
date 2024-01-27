#include<bits/stdc++.h>
using namespace std;

int main() {
	string s1, s2;// 统计s1在s2中出现次数
	// 解法二：count[128] 
	int count;
	while(getline(cin, s1)) {
		if(s1.compare("#")==0) {
			break;
		}
		getline(cin, s2);
		for(int i=0; i<s1.length()&& s1[i]!='#'; i++) {
			count=0;
			for(int j=0; j<s2.length(); j++) {
				if(s2[j] == s1[i]) {
					count++;
				}
			}
			printf("%c %d\n", s1[i], count);
		}
	} 
	return 0;
}
