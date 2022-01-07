#include <iostream>
#include "tree.h"

using namespace std;

int main(int argc, char *argv[]) {

    tree tree = new node;
    init(tree);

    // insert all the alphabet
    insert(tree, 'm');
    insert(tree, 'd');
    insert(tree, 'a');
    insert(tree, 'b');
    insert(tree, 'k');
    insert(tree, 'l');
    insert(tree, 'e');
    insert(tree, 'f');
    insert(tree, 'h');
    insert(tree, 'i');
    insert(tree, 'x');
    insert(tree, 'c');
    insert(tree, 'g');
    insert(tree, 'j');
    insert(tree, 'o');
    insert(tree, 'p');
    insert(tree, 'q');
    insert(tree, 'r');
    insert(tree, 'n');
    insert(tree, 't');
    insert(tree, 'z');
    insert(tree, 'v');
    insert(tree, 's');
    insert(tree, 'u');
    insert(tree, 'w');
    insert(tree, 'y');


    print_inorder(tree);

    cout << '\n';

    bool res = search(tree, '1');
    if (res) {
        cout << "FOUNDED\n";
    } else {
        cout << "NOT FOUNDED\n";
    }

    return 0;
}
