#include <bits/stdc++.h>
using namespace std;
/*
����������н�����Ȼ����������� 
*/
struct node {
    char data;
    struct node* left;
    struct node*right;
    node(char c): data(c), left(NULL), right(NULL) {}
};

// �� �������У�&pos���ܶ��� 
node* buildTree(int &pos, string str) {
    char c = str[pos];
    pos++;// ����һ��λ��(����Ҳ��Ҫ������һ��λ��)
    if (c == '#') {// ������Ϊ��
        return NULL;
    }
    node* root = new node(c);
    root->left = buildTree(pos, str);
    root->right = buildTree(pos, str);
    return root;
}

void InOrder(node* t) {
    if(t==NULL) return;
    InOrder(t->left);
    cout<< t->data<< " ";
    InOrder(t->right);
}

int main() {
    string str;
    while (cin >> str) {
        int pos=0;
        node* t = buildTree(pos, str);
        InOrder(t);
    }
    return 0;
}
// 64 λ������� printf("%lld")
