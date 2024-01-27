#include<bits/stdc++.h>
using namespace std;

// 3.3成绩排序 
struct Student {
	string name;
	int grade;
};

void switchTwo(Student &stu1, Student &stu2) {
	Student temp = Student();
	temp.name = stu1.name;
	temp.grade = stu1.grade;
	stu1.name = stu2.name;
	stu1.grade = stu2.grade;
	stu2.name = temp.name;
	stu2.grade = temp.grade;
}

// 返回1则不需要交换 
int isType(Student stu1, Student stu2, int type) {
	if(type == 0) {// 降序 (等号不能丢，保持稳定)
		return stu1.grade>= stu2.grade;
	} else {// 升序 
		return stu1.grade<= stu2.grade;
	}
}

// 稳定排序算法: 插入排序 
void sortStu(vector<Student> &stus, int n, int type) {
	for(int i=0; i<n; i++) {
		for(int j=i; j>0; j--) {
			if(!isType(stus[j-1], stus[j], type)) {
				switchTwo(stus[j-1], stus[j]);
			} else {
                break;
            }
		} 
	}
}

int main() {
	int n, type;
	vector<Student> stus;
	while(cin>> n) {
		cin>> type;// 0降序，1升序。
        stus.clear();
		for(int i=0; i<n; i++) {
            Student stu = Student();
			cin>> stu.name>> stu.grade;
            stus.push_back(stu);
		}
		sortStu(stus, n, type);// 要求稳定算法
		for(int i=0; i<n; i++) {
			cout<< stus[i].name<< " "<< stus[i].grade<< endl;
		}
	}
	return 0;
}
