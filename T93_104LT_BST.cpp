#include <iostream>
using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;
    node(int x): data(x), left(NULL), right(NULL) {}
};

node* insertBST(node* t, int x) {
    if (t == NULL) {
        t = new node(x);
    } else if (x < t->data) {
        t->left = insertBST(t->left, x);
    } else {
        t->right = insertBST(t->right, x);
    }
    return t;
}

void preOrder(node* t) {
    if (t == NULL) return;
    cout << t->data << ' ';
    preOrder(t->left);
    preOrder(t->right);
}

void inOrder(node* t) {
    if (t == NULL) return;
    inOrder(t->left);
    cout << t->data << ' ';
    inOrder(t->right);
}

void postOrder(node* t) {
    if (t == NULL) return;
    postOrder(t->left);
    postOrder(t->right);
    cout << t->data << ' ';
}

int main() {
    int n;
    while (cin >> n) {
        node* t = NULL;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            t = insertBST(t, temp);
        }
        preOrder(t);
        cout << endl;
        inOrder(t);
        cout << endl;
        postOrder(t);
        cout << endl;
    }
    return 0;
}

