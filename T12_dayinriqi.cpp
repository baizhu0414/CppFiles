#include<bits/stdc++.h>
using namespace std;

int monthDay[2][12] = {
		{31,28,31,30,31,30,31,31,30,31,30,31},// ∑«»ÚƒÍ 
		{31,29,31,30,31,30,31,31,30,31,30,31}};// »ÚƒÍ 
int isRunYear(int year) {
	return (year%4==0&&year%100!=0) || (year%400==0);
}
int main() {
	int year, day;
	int month, dayOfMonth;
	while(scanf("%d%d", &year, &day) != EOF) {
		month = 0;
		dayOfMonth = 0;
		int runOrPing = isRunYear(year);
		for(int i=0; i<12; i++) {
			if(day > monthDay[runOrPing][i]) {
				month++;
				day-=monthDay[runOrPing][i];
			} else {
				dayOfMonth = day;
				break;
			} 
		} 
		printf("%d-%02d-%02d\n", year, month + 1, dayOfMonth);
	}
	return 0;
}
