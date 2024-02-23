#include <bits/stdc++.h>
using namespace std;
/*
先序遍历序列建树，然后中序输出。 
*/
struct node {
    char data;
    struct node* left;
    struct node*right;
    node(char c): data(c), left(NULL), right(NULL) {}
};

// ！ 先序序列，&pos不能丢了 
node* buildTree(int &pos, string str) {
    char c = str[pos];
    pos++;// ！下一个位置(空树也需要继续下一个位置)
    if (c == '#') {// 子树均为空
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
// 64 位输出请用 printf("%lld")
