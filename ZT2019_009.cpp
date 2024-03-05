#include<bits/stdc++.h>
using namespace std;
/*4.现在有 n 个任务需要去做，但是由于可能时间冲突不一定全部做。每个任务
都有一个开始时间，和完成任务的奖励分。所有任务执行时间都是一天。同一
时间只能执行一个任务，且没有相同开始时间且相同的奖励分的任务。要求输
出为了得到最大奖励分做哪些任务最好，最大奖励分是多少。*/
struct node {
	int start;
	int val;
	node(int s, int v):start(s), val(v){}
};

bool cmpUp(node a, node b) {
	if(a.start< b.start) {
		return true;// 升序 
	} else if(a.start== b.start) {
		return a.val> b.val;// 降序 
	} else {
		return false;
	} 
}

int main() {
	int n;
	vector<node> list;
	while(cin>> n) {
		list.clear();
		int s, v;
		for(int i=0; i<n; i++) {
			cin>> s>> v;
			node x= node(s, v);
			list.push_back(x);
		}
		sort(list.begin(), list.end(), cmpUp);
		for(int i=0; i<n; i++) {
			cout<< list[i].start<< " "<< list[i].val<< endl;
		}
		int res= list[0].val;
		for(int i=1; i<n; i++) {
			if(list[i].start!= list[i-1].start) {
				res+= list[i].val;
			}
		}
		cout<< res<< endl;
	}
	return 0;
} 
