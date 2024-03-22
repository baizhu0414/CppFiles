#include<bits/stdc++.h>
using namespace std;
// ×Ö·û´®ÅÅÐò
 
int partition(char s[], int left, int right) {
	char pivot= s[left];
	while(left< right) {
		while(s[right]>= pivot&& left< right) right--;
		s[left]= s[right];
		while(s[left]<= pivot&& left< right) left++;
		s[right]= s[left];
	}
	s[left]= pivot;
	return left;
}

void Qsort(char s[], int left, int right) {
	if(left> right) return;
	int mid= partition(s, left, right);
	Qsort(s, left, mid-1);
	Qsort(s, mid+1, right);
}

int main() {
	char s[1000];
	while(cin>> s) {
		int len= strlen(s);
		Qsort(s, 0, len-1);
		cout<< s<< endl;
	}
	return 0;
}
