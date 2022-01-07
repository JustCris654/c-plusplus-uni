#include <iostream>
#include "stack.h"

using namespace std;

int main(int argc, char *argv[]) {
    stack s;
    s = new node;
    init(s);

    push(5, s);
    push(1, s);
    push(3, s);

    auto val = 0;
    pop(val, s);
    cout << "Popped val is: " << val << endl;

    print(s);

    top(val, s);
    cout << "Top val is: " << val << endl;


    deinit(s);

    return 0;
}
