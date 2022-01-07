#include "stack.h"

void init(stack &s) {
    s = NULL;
}

void deinit(stack &s) {
    stack cur = s;
    s = NULL;
    while (cur->next) {
        stack tmp = cur->next;
        delete cur;
        cur = tmp;
    }
}

bool push (pos cur, stack &s) {
    stack tmp = new node;
    if (tmp == NULL) return false;

    tmp->cur = cur;
    tmp->next = s;
    s = tmp;
    return true;
}

bool top (pos &cur, const stack &s) {
    if (s == NULL) return false;
    cur = s->cur;
    return true;
}

bool pop (stack &s) {
    if (s == NULL || s->next == NULL) return false;
    stack tmp = s->next;
    delete s;
    s = tmp;
    return true;
}

void print(const stack &s) {
    stack cur = s;
    while (cur != NULL) {
        std::cout << cur->cur.x << " - " << cur->cur.y << std::endl;
        cur = cur->next;
    }
    std::cout << std::endl;
}
