#include<bits/stdc++.h>
using namespace std;

string monthOfYear[12] = {
		"January", "February", "March", "April",
		"May", "June", "July", "August",
		"September", "October", "November", "December"};
string dayOfWeek[7] = {
		"Sunday", "Monday", "Tuesday", "Wednesday",
		"Thursday", "Friday", "Saturday"};
// 通过字符串获取相应月份 
int getMonthNumByName(string month) {
	for(int i=0; i<12; i++) {
		if(month.compare(monthOfYear[i]) == 0) {
			return i + 1;
		}
	} 
	return -1;
}
// 通过数字得到当天是周几的字符串 (0-6代表周日到周六)
string getWeekNameByString(int dayNum) {
	if(dayNum>7) return "";
	return dayOfWeek[dayNum];
}

int monthDay[2][12] = {{31,28,31,30,31,30,31,31,30,31,30,31},//平年 
		{31,29,31,30,31,30,31,31,30,31,30,31}};//闰年 
int isRunYear(int year) {
	return (year%4==0&&year%100!=0)||(year%400==0);
}

// 计算0001年到year-1年共多少天。 
int getYearBeforeDay(int year) {
	int total = 0;
	for(int i=1; i<year; i++) {
		if(isRunYear(i)) {
			total+= 366; 
		} else {
			total+= 365;
		}
	}
	return total;
}

int main() {
	int day, year;
	string month;
	while(cin>>day>>month>>year) {
		int runOrPing = isRunYear(year);
		int total = day;
		int iMonth = getMonthNumByName(month);
		for(int i=0; i<iMonth-1; i++) {
			total += monthDay[runOrPing][i];
		}
		total += getYearBeforeDay(year);
		string resDayName = getWeekNameByString(total%7);
		cout<< resDayName<< endl; 
	}
	return 0;
} 
