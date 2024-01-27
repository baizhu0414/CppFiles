#include <bits/stdc++.h>
using namespace std;

struct Mouse {
    int weight;
    string color;
    Mouse(){}
    Mouse(int w, string c): weight(w), color(c) {}
};

int partition(vector<Mouse>& list, int l, int r) {
    int pivot = list[l].weight;
    Mouse mTemp = Mouse(list[l].weight, list[l].color);
    while (l < r) {
        while (l < r && list[r].weight <= pivot) r--;
        list[l] = list[r];
        while (l < r && list[l].weight >= pivot) l++;
        list[r] = list[l];
    }
    list[l] = mTemp;
    return l;
}

void sortDown(vector<Mouse>& list, int l, int r) {
    if (l > r) return;
    int pos = partition(list, l, r);
    sortDown(list, l, pos - 1);
    sortDown(list, pos + 1, r);
}

int main() {
    int n;
    vector<Mouse> list;
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            Mouse m = Mouse();
            cin >> m.weight >> m.color;
            list.push_back(m);
        }
        sortDown(list, 0, n - 1);
        for (int i = 0; i < n; i++) {
            cout << list[i].color << endl;
        }
    }
    return 0;
}


