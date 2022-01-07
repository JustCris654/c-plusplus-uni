#ifndef TREE_H_
#define TREE_H_

struct node;
typedef node *tree;
struct node {
    char val;
    tree l;
    tree r;
};

void init(tree &);
bool empty(tree &);
bool insert(tree &, char el);
bool search(tree &, char el);
void print(tree &);

#endif // TREE_H_
