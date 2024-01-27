#include<bits/stdc++.h>
using namespace std;

int pingYear[13] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
int runYear[13] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
int isRunYear(int year) {
	return (year%4==0&&year%100!=0)||(year%400==0);
}

int main() {
	int year, month, day;
	int res = 0;
	while(scanf("%d%d%d", &year, &month, &day) != EOF) {
		if(isRunYear(year)){
			for(int i=0; i<month-1; i++) {
				res+= runYear[i];
			}
		} else {
			for(int i=0; i<month-1; i++) {
				res+= pingYear[i];
			}
		}
		res+= day;
		printf("%d\n", res);
		res = 0;
	}
	return 0;
} 
