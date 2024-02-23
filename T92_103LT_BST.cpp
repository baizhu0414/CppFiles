#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int x):data(x), left(NULL), right(NULL){}
};

node* insertTree(node* root, int x, int father) {
    if(root==NULL) {
        root= new node(x);
        cout<< father<< endl;
    } else if (x< root->data) {
        root->left = insertTree(root->left, x, root->data);
    } else {
        root->right= insertTree(root->right, x, root->data);
    }
    return root;
}

int main() {
    int n;
    while(cin>> n) {
        node* root= NULL;
        for(int i=0; i<n; i++) {
            int temp;
            cin>> temp;
            root= insertTree(root, temp, -1);
        }
    }
    return 0;
}
// 64 Œª ‰≥ˆ«Î”√ printf("%lld")
