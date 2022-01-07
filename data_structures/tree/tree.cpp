#include <iostream>
#include "tree.h"

using namespace std;

void init(tree &t){
    t = NULL;
}

bool insert(tree &t, char val) {
    if (t == NULL) {
        t = new node;
        if (t == NULL) return false;
        t->val = val;
        t->l = NULL;
        t->r = NULL;
    } else if (val > t->val){
        return insert(t->r, val);
    } else {
        return insert(t->l, val);
    }
    return false;
}

bool empty(tree &t) {
    return t == NULL;
}

bool search(tree &t, char val) {
    if (t == NULL) return false;

    if (val == t-> val) return true;
    else if (val > t->val){
        return search(t->r, val);
    } else {
        return search(t->l, val);
    }
}

void print_inorder(tree &t) {
    if (t == NULL) return;

    print_inorder(t->l);
    cout << t->val;
    print_inorder(t->r);
}

void print_preorder(tree &t) {
    if (t == NULL) return;

    cout << t->val;
    print_preorder(t->l);
    print_preorder(t->r);
}

void print_postorder(tree &t) {
    if (t == NULL) return;

    print_postorder(t->l);
    print_postorder(t->r);
    cout << t->val;
}
