#include <algorithm>
#include <bits/stdc++.h>
#include <string>
using namespace std;
struct node {
    int a;
    int b;
    node(int x, int y):a(x), b(y){}
};

// true不交换
bool cmpUp(node x1, node x2) {
    int tmp1= x1.a*x1.a+x1.b*x1.b;
    int tmp2= x2.a*x2.a+x2.b*x2.b;
    return tmp1< tmp2;
}

// Insert 123+i22
node transfer(string str) {
    int aLeft= str.find(' ')+1;
    int aRight= str.find('+')-1;
    int a=0;
    int b=0;
    for(int i=aLeft; i<=aRight; i++) {
        a*=10;
        a+=(str[i]-'0');
    }
    for(int i=aRight+3; i<str.size(); i++) {
        b*=10;
        b+=(str[i]-'0');
    }
    return node(a, b);
}

int main() {
    vector<node> list;
    int opN;
    while(cin>> opN) {
        cin.get();
        list.clear();
        for(int i=0; i<opN; i++) {
            string opStr;
            getline(cin, opStr);
            if(opStr.compare("Pop")==0) {
                if(list.size()==0) {
                    cout<< "empty"<< endl;
                } else {
                    node cur= list.back();
                    cout<< cur.a<<"+i"<< cur.b<< endl;
                    list.pop_back();// 删除最大的元素
                    cout<< "SIZE = "<< list.size()<< endl;
                }
            } else {
                node temp= transfer(opStr);
                list.push_back(temp);
                sort(list.begin(), list.end(), cmpUp);
                cout<< "SIZE = "<< list.size()<< endl;
            }
        }
    }
}
// 64 位输出请用 printf("%lld")
