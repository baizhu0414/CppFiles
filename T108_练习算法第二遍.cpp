#include<bits/stdc++.h>
using namespace std;
// 最长回文串：逆序后求公共子串 
string reverse(string s) {
	string rev= "";
	for(int i=s.length()-1; i>=0; i--) {
		rev+= s[i];
	}
	return rev;
}
int getLongestPalindrome(string A) {
	string B= reverse(A);
	int maxL= 0;
	int x= 0, y=0;
	int len= A.length();
	int dp[len+1][len+1];
	for(int i=0; i<=len; i++) {
		dp[i][0]= 0;
		dp[0][i]= 0;
	}
	cout<< "B="<< B<< endl;
	for(int i=1; i<=len; i++) {
		for(int j=1; j<=len; j++) {
			if(A[i-1]== B[j-1]) {
				dp[i][j]= dp[i-1][j-1]+ 1;
			} else {
				dp[i][j]= 0;
			}
			if(maxL< dp[i][j]) {
				maxL= dp[i][j];
				x= i;
				y= j;
			}
		}
	}
	cout<< "x:"<< x<<"y:"<<y<< endl;
	for(int i=0; i<=len; i++) {
		for(int j=0; j<=len; j++) {
			cout<< dp[i][j]<< " ";
		}
		cout<< endl;
	}
	return maxL;
}

int main() {
	string str;
	cin>> str;
	cout<< getLongestPalindrome(str)<< endl;
	return 0;
}

