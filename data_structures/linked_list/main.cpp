#include <iostream>
#include "ll.h"

using namespace std;

int main(int argc, char *argv[]) {
    ll_t list;
    init(list);

    push_back(list, 5);
    push_back(list, 1);
    push_back(list, 3);

    print_list(list);

    int top;
    top = pop_back(list);
    cout << top << '\n';

    get_top(list, top);
    cout << top << '\n';

    deinit(list);


    return 0;
}
