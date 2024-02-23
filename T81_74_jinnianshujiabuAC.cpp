#include<bits/stdc++.h>
using namespace std;
// LT7.4 
/**
12
1 3
3 4
0 7
3 8
15 19
15 20
10 15
8 18
6 12
5 10
4 14
2 9
*/
struct node{
	int start;
	int end;
	node(int s, int e):start(s),end(e){}
};

bool cmpUp(node a, node b) {
	return a.end< b.end;
}

int main() {
	int n;
	vector<node> times;
	while(cin>> n) {
		for(int i=0; i<n; i++) {
			int start, end;
			cin>> start>> end;
			times.push_back(node(start, end));
		}
		sort(times.begin(), times.end(), cmpUp);
		// 查找不相交线段数量
		int count=1;
		int end=times[0].end;
		for(int i=1; i<n; i++) {
			if(times[i].start>= end) {
				cout<< times[i].start<< "-"<< times[i].end<< " ";
				count++;
				end=times[i].end;
			}
		} 
		cout<< endl;
		cout<< count<< endl;
	}
	return 0;
} 
