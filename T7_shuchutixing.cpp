#include<iostream>
#include<string>
using namespace std;

int main() {
    int h;
    while (scanf("%d", &h) != EOF) {
        for (int i = 0; i < h; i++) {
        	// �ո��� 
            int empNum = 2 * (h - i - 1);
            for (int emp = 0; emp < empNum; emp++) {
            	 printf(" ");
            }
            // *������[h+2(h-1)] - [empNum]
            for(int star=0; star<h+2*i; star++) {
            	printf("*");
			}
			printf("\n");
        }
    }
    return 0;
}
