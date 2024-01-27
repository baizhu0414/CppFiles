#include<iostream>
using namespace std;

int reverse(int num) {
	int rev = 0;
	while(num != 0) {
		rev *= 10;
		rev += num %10;
		num /= 10;
	}
	return rev;
}

int main() {
	int num;
	for(int i=0; i<256; i++) {
		num = i * i;
		if(num == reverse(num)) {
			printf("%d\n", i);
		}
	}
	return 0;
}
