#include<bits/stdc++.h>
using namespace std;
/*给定两个正整数a和b，求在[a，b]中的所有整数中，每个数码（0~9）各出现了多少次。*/
int main() {
	int count[10];
	int a, b;
	while(cin>> a>> b) {
		memset(count, 0, sizeof(count));
		for(int i=a; i<=b; i++) {
			int temp= i;
			while(temp!= 0) {
				count[temp%10]++;
				temp/= 10;
			}
		}
		for(int i=0; i<10; i++) {
			cout<< count[i]<< " ";
		}
		cout<< endl;
	}
	return 0;
}
