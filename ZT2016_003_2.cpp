#include <iostream>
#include <vector>
using namespace std;
// �������� 2 �� 3 �� 5 ��������������� 8 ������ӡ��ʾ������ϡ�

void f(vector<int>& boals, vector<int>& cur, int n, int type) {
    if (type == boals.size()) {// �������Ͷ�ѡ�� 
        if (n == 0) {// �������� 
            for (int i = 0; i < cur.size(); ++i) {
                cout << cur[i] << " ";
            }
            cout << endl;
        }
        return;
    }
	// ѡ��type������� 
    for (int i = 0; i <= boals[type] && i <= n; ++i) {
        cur.push_back(i);
        cout<< "type     :"<< type<< " i:"<< i<< endl; 
        f(boals, cur, n - i, type + 1);
        cout<< "back type:"<< type<< " i:"<< cur.back()<< endl;
        cur.pop_back();
    }
}

int main() {
    vector<int> counts = {2, 3, 5}; // �졢�̡����������

    vector<int> cur;
    f(counts, cur, 8, 0);

    return 0;
}

