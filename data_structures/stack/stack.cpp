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

bool push (int val, stack &s) {
    stack tmp = new node;
    if (tmp == NULL) return false;

    tmp->val = val;
    tmp->next = s;
    s = tmp;
    return true;
}

bool top (int &num, const stack &s) {
    if (s == NULL) return false;
    num = s->val;
    return true;
}

bool pop (int &num, stack &s) {
    if (s == NULL || s->next == NULL) return false;
    stack tmp = s->next;
    num = s->val;
    delete s;
    s = tmp;
    return true;
}

void print(const stack &s) {
    stack cur = s;
    while (cur != NULL) {
        std::cout << cur->val << " ";
        cur = cur->next;
    }
    std::cout << std::endl;
}
