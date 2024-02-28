#include<bits/stdc++.h>
using namespace std;
/*K 临近算法，{1, 2, 3, 4, 5, 6, 7, 8, 9}中，给定值为 4，那么与 4 最近的
是{3, 4, 5}，要求用算法实现。*/

int partition(vector<int> &list, int l, int r) {
	int pivot= list[l];
	while(l<r) {
		while(l<r&& list[r]>=pivot) r--;
		list[l]= list[r];
		while(l<r&& list[l]<=pivot) l++;
		list[r]= list[l];
	}
	list[l]= pivot;
	return l;
}

void Qsort(vector<int> &list, int l, int r) {
	if(l>=r) return;
	int pos= partition(list, l, r);
	Qsort(list, l, pos-1);
	Qsort(list, pos+1, r);
}

int main() {
	int N, K, x;
	vector<int> list;
	while(cin>> N) {
		list.clear();
		int temp;
		for(int i=0; i<N; i++) {
			cin>> temp;
			list.push_back(temp);
		}
		Qsort(list, 0, N-1);
//		for(int i=0; i<N; i++) {
//			cout<< list[i]<< " ";
//		}
//		cout<< endl;
		cin>> x>> K;
		for(int i=0; i<N; i++) {
			if(list[i]==x) {// 邻近的K个 
				int l=i-K;
				int r=i+K;
				for(int j=l; j<=r; j++) {
					if(j==r) {
						cout<< list[j]<< endl;
					} else {
						cout<< list[j]<< " ";
					}
				}
				break; 
			}
		}
	}
	return 0;
}

