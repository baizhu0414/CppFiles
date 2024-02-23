#include <bits/stdc++.h>
using namespace std;

void Fun(int n) {
    vector<int> list;
    int b=0;
    while(n!=0) {
        if(n&1==1) {
            list.push_back(b);
        }
        n>>=1;
        b++;
    }
    for(int i=list.size()-1; i>=0; i--) {
        cout<< '2';
        if(list[i]==0) {
            cout<< "(0)";
        } else if(list[i]==1) {
            //2(1)写作2
        } else {
            cout<< "(";
            Fun(list[i]);
            cout<< ')';
        }
        if(i!=0) {
            cout<< '+';
        }
    }
}

int main() {
    int n;
    while(cin>> n) {
        Fun(n);
    }
    return 0;
}
// 64 位输出请用 printf("%lld")
