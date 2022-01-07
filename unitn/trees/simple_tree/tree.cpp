#include <iostream>
#include "tree.h"

using namespace std;

void init(tree &t){
    t = NULL;
}

bool insert(tree &t, int val) {
    if (t == NULL){
        t = new node;
        if (t == NULL) return false;
        t->value = val;
        t->left = NULL;
        t->right = NULL;
        return true;
    } else if (val > t->value){
        return insert(t->right, val);
    } else {
        return insert(t->left, val);
    }
}

void print_tree(tree &t) {
    if (t == NULL)
        return;
    cout << "val->" << t->value << '\n';
    print_tree(t->right);
    print_tree(t->left);
}
