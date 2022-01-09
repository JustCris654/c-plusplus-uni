#include "tree.h"
#include <iostream>


void init(tree & tree){
    tree = nullptr;
}

bool empty(tree & tree){
    return tree == nullptr;
}

bool push_el(tree &root, int val){
    tree cur = root;
    if (root == nullptr) {
        root = new node{val, nullptr, nullptr};
        return root != nullptr;    // if root is null there has been an error
    }
    if (val > cur->val) {
        return push_el(cur->right, val);
    } else if (val < cur->val) {
        return push_el(cur->left, val);
    } else {
        return true;
    }
}

bool search_el(tree &root, int val){
    if (root == nullptr) return false;

    if (root->val == val) return true;
    else if (val > root->val) {
        return search_el(root->right, val);
    } else if (val < root->val){
        return search_el(root->left, val);
    }
}

void print_tree(tree &root){
    if (root == nullptr) return;
    print_tree(root->left);
    std::cout << root->val << " ";
    print_tree(root->right);
}
bool deinit(tree &){
    return true;
}
