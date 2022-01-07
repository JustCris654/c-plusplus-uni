#ifndef TREE_H_
#define TREE_H_

struct node;
typedef node *tree;
struct node {
    int value;
    tree left;
    tree right;
};

void init(tree &);
bool insert(tree &, int val);
tree search(int val);
void print_tree(tree &);
bool deinit(tree &);


#endif // TREE_H_
