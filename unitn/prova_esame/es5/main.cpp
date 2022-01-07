#include <iostream>
#include "tree.h"

using namespace std;

int main(int argc, char *argv[]) {

    tree tree = new node;
    init(tree);

    insert(tree, 'e');
    insert(tree, 'a');
    insert(tree, 'u');

    print(tree);

    cout << '\n';
    bool res = search(tree, 'e');

    if (res) {
        cout << "founded\n";
    }

    return 0;
}
