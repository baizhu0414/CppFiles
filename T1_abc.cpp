#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	int abc, bcc;
	for(int a=0; a<10; a++) {
		for(int b=0; b<10; b++) {
			for(int c=0; c<10; c++) {
				abc = a*100 + b*10 + c;
				bcc = b*100 + c*10 + c;
				if (abc + bcc == 532) {
					printf("%d %d %d\n", a, b, c);
				}
			}
		}
	}
	return 0;
}
