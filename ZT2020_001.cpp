#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	int count[10];
	while(cin>> a>> b) {
		memset(count, 0, sizeof(count));
		for(int i=a; i<=b; i++) {
			int temp= i;
			while(temp!=0) {
				count[temp%10]++;
				temp/= 10;
			}
		}
		for(int i=0; i<10; i++) {
			if(i!=9) {
				cout<< count[i]<< " ";
			} else {
				cout<< count[i]<< endl;
			}
		}
	}
	return 0;
} 

