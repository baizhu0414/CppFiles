#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<long long> list;
    while (cin >> n) { // ע�� while ������ case
        long long a;
        for(int i=0; i<n; i++){
            cin>> a;
            list.push_back(a);
        }
        for(int i=0; i<list.size(); i++) {
            if(i==list.size()-1){
                cout<< list[list.size()-i-1]<< endl;
            } else {
                cout<< list[list.size()-i-1]<< " ";
            }
        }
    }
}
// 64 λ������� printf("%lld")
