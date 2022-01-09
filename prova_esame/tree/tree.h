#ifndef TREE_H_
#define TREE_H_

struct node {
    int val;
    node *left;
    node *right;
};
typedef node *tree;

void init(tree & );
bool empty(tree & );
bool push_el(tree &, int );
bool search_el(tree &, int );
void print_tree(tree &);
bool deinit(tree &);

#endif // TREE_H_
