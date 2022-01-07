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

void print(tree &t) {
    if (t == NULL) return;

    print(t->l);
    cout << t->val;
    print(t->r);
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
