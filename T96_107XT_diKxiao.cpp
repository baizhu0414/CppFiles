#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &list, int left, int right) {
	int pivot= list[left];
	while(left< right) {
		while(left< right&& list[right]>=pivot) right--;
		list[left]= list[right];
		while(left< right&& list[left]<=pivot) left++;
		list[right]= list[left];
	}
	list[left]= pivot;
	return left;
}

void getKstMin(vector<int> &list, int left, int right) {
	if(left>right) return;
	int mid= partition(list, left, right);
	getKstMin(list, left, mid-1);
	getKstMin(list, mid+1, right);
}

int main() {
	int n;
	vector<int> list;
	int K;
	while(cin>> n) {
		int temp;
		for(int i=0; i<n; i++) {
			cin>> temp;
			list.push_back(temp); 
		}
		cin>> K;
		getKstMin(list, 0, n-1);
		int count=1;
		for(int i=1; i<n; i++) {
			if(list[i]!=list[i-1]) {
				count++;
			}
			if(count==K) {
				cout<< list[i]<< endl;
				break;
			}
		}
	}
	
	return 0;
} 

