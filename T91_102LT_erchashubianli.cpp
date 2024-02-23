#include <iostream>
using namespace std;

struct node {
    char data;
    struct node* left;
    struct node* right;
    node(char c):data(c), left(NULL), right(NULL){}
};

// 先序遍历+中序遍历 构造二叉树:FDXEAG  XDEFAG
node* buildTree(string strPre, string strIn) {
    if (strPre.length()==0) {
        return NULL;
    }
    char c= strPre[0];
    node* root= new node(c);
    int postPosition= strIn.find(c);// 先序字符在中序的位置
    root->left= buildTree(strPre.substr(1, postPosition), strIn.substr(0, postPosition));
    root->right= buildTree(strPre.substr(postPosition+1), strIn.substr(postPosition+1));
    return root;
}

void postOrder(node* t) {
    if(t==NULL) return;
    postOrder(t->left);
    postOrder(t->right);
    cout<< t->data;
}

int main() {
    string strPre, strIn;
    while(cin>> strPre>> strIn) {
        node* t= buildTree(strPre, strIn);
        postOrder(t);
        cout<< endl;
    }
    return 0;
}
// 64 位输出请用 printf("%lld")
