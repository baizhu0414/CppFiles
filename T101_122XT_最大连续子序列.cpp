#include<bits/stdc++.h>
using namespace std;
#define MAXN 10002
int main() {
	int n;
	int list[MAXN];
	int dp[MAXN];
	int tag[MAXN];// 表示子序列长度 
	while(cin>> n) {
		if(n==0) break;
		memset(list, 0, sizeof(int)*(n+2));
		memset(dp, 0, sizeof(int)*(n+2));
		memset(tag, 0, sizeof(int)*(n+2));
		int temp;
		for(int i=1; i<=n; i++) {
			cin>> list[i];
		}
		// dp[i]=max(list[i], dp[i-1]+list[i]);
		int res=list[1];
		int resIdx=1;// 标记最大值序列最后一位所在位置 
		for(int i=1; i<=n; i++) {
			temp= dp[i-1]+list[i];
			if(temp> list[i]) {
				dp[i]= temp;
				tag[i]= tag[i-1]+1;
			} else {
				dp[i]= list[i];
				tag[i]= 1;
			}
			if(res< dp[i]) {
				res= dp[i];
				resIdx= i;
			} 
		} 
		
		cout<< res<< " "<< list[resIdx-tag[resIdx]+1]<< " "<< list[resIdx]<< endl; 
//		for(int i=0; i<n; i++) {
//			cout<< dp[i+1]<< " ";
//		}
//		cout<< endl;
//		for(int i=0; i<n; i++) {
//			cout<< tag[i+1]<< " ";
//		}
//		cout<< "max:"<< res<< " idx:"<< resIdx<< endl;
	} 
	return 0;
} 

