#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// ϰ��6.6 
// true������
bool isSuShu(int x) {
    int r=sqrt(x);
    for(int i=2; i<r+1; i++) {
        if(x%i==0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    while(cin>> n) {
        int i=3;
        vector<int> resList;
        resList.push_back(2);
        while(resList.size()<n) {
            if(isSuShu(i)) {
                resList.push_back(i);
            }
            i++;
        }
        cout<< resList[n-1]<< endl;
    }
}
// 64 λ������� printf("%lld")
