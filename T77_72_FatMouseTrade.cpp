#include<bits/stdc++.h>
using namespace std;
// LT7.2 FatMouse' Trade
const int MAXN=1000;

struct Bean{
	double weight;
	double cost;
};

Bean arr[MAXN];

bool compare(Bean x, Bean y) {
	return (x.weight/x.cost) > (y.weight/y.cost);
}

int main() {
	int M, N;
	while(cin>> M>> N) {
		if(M==-1&& N==-1) {
			break;
		}
		for(int i=0; i<N; i++) {
			scanf("%lf%lf", &arr[i].weight, &arr[i].cost);
		}
		sort(arr, arr+N, compare);
		double answer=0;
		for(int i=0; i<N; i++) {
			if(M>=arr[i].cost) {// ʣ���Ǯ���ã������Լ۱���ߵ� 
				M-=arr[i].cost;
				answer+=arr[i].weight;
			} else {
				answer+=arr[i].weight*(M/arr[i].cost); // ��һ���� 
				break;
			}
		}
		printf("%.3f\n", answer);
	}
	return 0;
}

