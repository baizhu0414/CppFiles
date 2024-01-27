#include<bits/stdc++.h>
using namespace std;

int monthDay[2][12] = {
		{31,28,31,30,31,30,31,31,30,31,30,31},// ∑«»ÚƒÍ 
		{31,29,31,30,31,30,31,31,30,31,30,31}};// »ÚƒÍ 
int isRunYear(int year) {
	return (year%4==0&&year%100!=0) || (year%400==0);
}

int main() {
	int year, month, day, plusDay;
	int n;
	while(scanf("%d", &n) != EOF) {
		for(int i=0; i<n; i++) {
			// 1992 11 22 316
			scanf("%d%d%d%d", &year, &month, &day, &plusDay);
			int runOrPing = isRunYear(year);
			plusDay += day;
			day = 0;
			while(plusDay>monthDay[runOrPing][month-1]) {
				plusDay-=monthDay[runOrPing][month-1];
				if(month == 12) {
					year++;
					month = 1;
					runOrPing = isRunYear(year);
				} else {
					month++;
				}
			}
			day = plusDay;
			printf("%d-%02d-%02d\n", year, month, day);
		} 
	}
	return 0;
}
