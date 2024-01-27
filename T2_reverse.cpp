#include<iostream>
using namespace std;

// 成立返回1， 否则返回0. 
int judge(int i) {
	int a = i * 9;
	// 反序数 
	int b = 0;
	while(i != 0) {
		b = b*10;
		b += i % 10;
		i = i / 10;
	}
	if (a == b) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	for(int i=1000; i<10000; i++) {
		if(judge(i)) {
			printf("%d\n", i);
		}
	}
	return 0;
}
