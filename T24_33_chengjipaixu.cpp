#include<bits/stdc++.h>
using namespace std;

// 3.3�ɼ����� 
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

// ����1����Ҫ���� 
int isType(Student stu1, Student stu2, int type) {
	if(type == 0) {// ���� (�ȺŲ��ܶ��������ȶ�)
		return stu1.grade>= stu2.grade;
	} else {// ���� 
		return stu1.grade<= stu2.grade;
	}
}

// �ȶ������㷨: �������� 
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
		cin>> type;// 0����1����
        stus.clear();
		for(int i=0; i<n; i++) {
            Student stu = Student();
			cin>> stu.name>> stu.grade;
            stus.push_back(stu);
		}
		sortStu(stus, n, type);// Ҫ���ȶ��㷨
		for(int i=0; i<n; i++) {
			cout<< stus[i].name<< " "<< stus[i].grade<< endl;
		}
	}
	return 0;
}
