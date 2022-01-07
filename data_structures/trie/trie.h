#ifndef TRIE_H_
#define TRIE_H_

struct node;
typedef node *trie;
struct node {
    char c;
    trie *children[256];
};

void init(trie &);

#endif // TRIE_H_
