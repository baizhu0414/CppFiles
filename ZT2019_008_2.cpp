#include<bits/stdc++.h>
using namespace std;
/*3.�� n �������ų�һ�ţ��������������������к͡�Ҫ��ʹ�÷��η������*/
// ���η� 

int max3(int a, int b, int c) {
	int maxVal= max(a, b);
	return max(maxVal, c);
}
// 34 -20 30 -50 60 -20 30 41 -30 -10
int process(vector<int> list, int l, int r) {
	if(l== r) {
		if(list[l]> 0) return list[l];
		else return 0;
	}
	// ��࣬�Ҳ࣬����м� 
	int mid= (l+r)/2;
	int leftPlus= process(list, l, mid);
	int rightPlus= process(list, mid+1, r);
	
	int midLeft=0;// ���͵����ֵ 
	int midRight=0;// �Ҳ�͵����ֵ 
	int tempLeft=0;// �ݴ��� 
	int tempRight=0;
	// ����������кͣ������� 
	for(int i=mid; i>=l; i--) {//�Ⱥ����� 
		tempLeft+= list[i];
		midLeft= max(tempLeft, midLeft);
	} 
	for(int i=mid+1; i<=r; i++) {
		tempRight+= list[i];
		midRight= max(tempRight, midRight);
	}
	return max3(leftPlus, rightPlus, midLeft+midRight);
}

int main() {
	int n;
	vector<int> list;
	while(cin>> n) {
		int temp;
		for(int i=0; i<n; i++) {
			cin>> temp;
			list.push_back(temp);
		}
		cout<< process(list, 0, n-1); 
	}
	return 0;
}

