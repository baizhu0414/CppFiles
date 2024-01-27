#include<iostream>
using namespace std;

int main() {
	int N, X, Y, Z;
	int res = -1, left=-1, right=-1;
	int temp;
	while(scanf("%d", &N) != EOF) {
		res = -1;
		left=-1;
		right=-1;
		scanf("%d %d %d", &X, &Y, &Z);
		for(int a=1; a<=9; a++) {
			for(int b=0; b<=9; b++) {
				temp = a*10000 + X * 1000 + Y*100 + Z*10 + b;
				if(temp % N == 0) {
					res = temp;
					left = a;
					right = b;
				}
			}
		}
		if(res>0) {
			printf("%d %d %d\n", left, right, res/N);
		} else {
			printf("0\n");
		}
	}
	return 0;
}


