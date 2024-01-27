#include<bits/stdc++.h>
using namespace std;

int monthDay[2][12] = {{31,28,31,30,31,30,31,31,30,31,30,31},//平年 
		{31,29,31,30,31,30,31,31,30,31,30,31}};//闰年 
int isRunYear(int year) {
	return (year%4==0&&year%100!=0)||(year%400==0);
} 

int getDayOfYear(int year, int month, int day) {
	int runOrPing = isRunYear(year);
	int dayOfYear = day;
	// 2月day日 
	while(month>=2) {
		dayOfYear += monthDay[runOrPing][month-2];
		month--;
	}
	return dayOfYear;
}

int getDayBetweenYear(int smallYear, int bigYear) {
	int total = 0;
	while(smallYear<bigYear) {
		if (isRunYear(smallYear)) {
			total += 366;
		} else {
			total += 365;
		}
		smallYear++;
	}
	return total;
}

// 字符串转日期 
void process(char date[], int &year, int &month, int &day) {
	year = 0;
	for(int i=0; i<4; i++) {
		year = year*10 + (date[i]-'0');
	}
	month = (date[4]-'0')*10 + (date[5]-'0');
	day = (date[6]-'0')*10 + (date[7]-'0');
}

int main() {
	char small[10], big[10];
	int sYear, sMonth, sDay;
	int bYear, bMonth, bDay;
	int total;
	while(scanf("%s%s", &small, &big) != EOF) {
		process(small, sYear, sMonth, sDay);
		process(big, bYear, bMonth, bDay);
		int smallDayOfYear = getDayOfYear(sYear, sMonth, sDay);
		int bigDayOfYear = getDayOfYear(bYear, bMonth, bDay);
		total = bigDayOfYear - smallDayOfYear + 1;
		total += getDayBetweenYear(sYear, bYear);
		printf("%d\n", total);
	}
	return 0;
}
