#include <iostream>
#include <vector>
using namespace std;
// 袋子里有 2 红 3 绿 5 黄球，随机从中摸出 8 个，打印显示所有组合。

void f(vector<int>& boals, vector<int>& cur, int n, int type) {
    if (type == boals.size()) {// 所有类型都选完 
        if (n == 0) {// 满足数量 
            for (int i = 0; i < cur.size(); ++i) {
                cout << cur[i] << " ";
            }
            cout << endl;
        }
        return;
    }
	// 选择type球的数量 
    for (int i = 0; i <= boals[type] && i <= n; ++i) {
        cur.push_back(i);
        cout<< "type     :"<< type<< " i:"<< i<< endl; 
        f(boals, cur, n - i, type + 1);
        cout<< "back type:"<< type<< " i:"<< cur.back()<< endl;
        cur.pop_back();
    }
}

int main() {
    vector<int> counts = {2, 3, 5}; // 红、绿、黄球的数量

    vector<int> cur;
    f(counts, cur, 8, 0);

    return 0;
}

