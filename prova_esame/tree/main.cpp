#include <iostream>
#include "tree.h"
#include <cstdlib>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    srand(100);

    ifstream file;
    file.open("input.txt", ios::in);

    tree root = new node;
    init(root);

    char buff[100];
    while(file >> buff) {
        int val = atoi(buff);
        push_el(root, val);
    }
    print_tree(root);

    return 0;
}
