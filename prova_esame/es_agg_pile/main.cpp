#include <iostream>
#include <cstdlib>
#include "stack.h"

using namespace std;

bool split_string(char *to_split, char **splitted) {
    size_t split_i = 0;
    char *to_copy = new char[100];
    size_t to_copy_i = 0;
    for (int i = 0; to_split[i] != '\0'; ++i) {
        if (to_split[i] != ' ') {
            if (split_i == 3) return false;
            to_copy[to_copy_i++] = to_split[i];
        } else {
            memcpy(splitted[split_i++], to_copy, to_copy_i);
            to_copy_i = 0;
            delete [] to_copy;
            to_copy = new char[100];
        }
    }
    memcpy(splitted[split_i], to_copy, to_copy_i);
    return true;
}

bool calculate_addition(stack &s, int &res) {
    char *op;
    top_el(s, op);
    pop_el(s);
    if (strcmp(op, "+") != 0) {
        cout << "not + " << op << endl;
        return false;
    }

    char *el_1, *el_2;
    top_el(s, el_2);
    pop_el(s);
    top_el(s, el_1);
    cout << el_1 << " + " << el_2 << endl;
    pop_el(s);
    res = atoi(el_1) + atoi(el_2);
    return true;
}

int main(int argc, char *argv[]) {
    (void) argc;
    (void) *argv;
    stack s = new node;
    init(s);

    char buffer[VAL_SIZE];
    cin.getline(buffer, VAL_SIZE);

    char **splitted = new char*[3];
    for (int i = 0; i < 3; ++i) {
        splitted[i] = new char[VAL_SIZE];
    }
    split_string(buffer, splitted);
    for (int i = 0; i < 3; ++i) {
        push_el(s, splitted[i]);
    }

    int res = 0;
    calculate_addition(s, res);
    cout << "Res: " << res << endl;

    return 0;
}
