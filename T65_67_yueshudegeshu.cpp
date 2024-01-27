#include<bits/stdc++.h>
using namespace std;
// 习题6.7 约数的个数
/*
对于数 n，因为小于sqrt(n)的数 i 如果能整除n，
则必定还有一个大于sqrt(n)的因数j，使得 i*j=n.
因此count+2 
*/

int countYueShu(int x) {
	// 获取约数个数
	int count=0;
	int r=sqrt(x);// 1.减少时间 
	for(int i=1; i<r; i++) {
		if(x%i==0) {
			count+=2;//2.配合1使用i<round<j
		}
	}
	if(r*r==x) count++;
	return count;
}

int main() {
	int N;
	while(cin>> N) {
		vector<int> list;
		vector<int> res;
		int temp;
		for(int i=0; i<N; i++) {
			cin>> temp;
			list.push_back(temp);
		}
		for(int i=0; i<N; i++) {
			res.push_back(countYueShu(list[i]));
		}
		// 输出
		for(int i=0; i<N; i++) {
			cout<< res[i]<< endl;
		}
	}
	return 0;
}
