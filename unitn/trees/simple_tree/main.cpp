#include <iostream>
#include <cstdlib>

#include "tree.h"

using namespace std;

int main(int argc, char *argv[]) {
    srand(time(NULL));

    tree tree = new node;
    init(tree);

    for (int i = 0; i < 5; i++){
        int num = rand()%100 + 1;
        cout << "Inserted: " << num << '\n';
        insert(tree, num);
    }
    print_tree(tree);

    return 0;
}
