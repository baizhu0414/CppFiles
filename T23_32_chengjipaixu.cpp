#include<bits/stdc++.h>
using namespace std;

#define MAXN 100
struct Stu{
	int sno;
	int grade;
};
Stu stus[MAXN];

void switchTwo(Stu &stu1, Stu &stu2) {
	Stu stu = Stu();
	stu.sno = stu1.sno;
	stu.grade = stu1.grade;
	stu1.sno = stu2.sno;
	stu1.grade = stu2.grade;
	stu2.sno = stu.sno;
	stu2.grade = stu.grade;
}

void sortUp(int n) {
	for(int i=0; i<n; i++) {
		for(int j=i; j<n; j++) {
			if(stus[i].grade>stus[j].grade) {
				switchTwo(stus[i], stus[j]);
			} else if(stus[i].grade==stus[j].grade&& stus[i].sno>stus[j].sno) {
				switchTwo(stus[i], stus[j]);
			}
		}
	}
}

int main() {
	memset(stus, 0, sizeof(stus));
	int n;
	while(scanf("%d", &n)!=EOF) {
		for(int i=0; i<n; i++) {
			scanf("%d%d", &stus[i].sno, &stus[i].grade);
		}
		sortUp(n);
		for(int i=0; i<n; i++) {
			printf("%d %d\n", stus[i].sno, stus[i].grade);
		}
	}
	return 0;
}
