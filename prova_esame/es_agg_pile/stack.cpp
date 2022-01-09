#include "stack.h"
#include <iostream>

void init(stack &s){
    s = nullptr;
}

bool empty(stack s){
    return s == nullptr;
}

bool push_el(stack &s, char *c){
    std::cout << c << std::endl;
    stack new_node = new node{c, s};
    if (empty(new_node)) return false;
    s = new_node;
    return true;
}

bool top_el(stack &s, char *c){
    if (empty(s)) return false;
    c = s->c;
    return true;
}

bool pop_el(stack &s){
    if (empty(s)) return false;
    stack tmp = s->next;
    delete s;
    s = tmp;
    return true;
}

void print_stack(stack s){
    while (!empty(s)) {
        std::cout << s->c << " ";
        s = s->next;
    }
    std::cout << std::endl;
}

void deallocate(stack &s){
    while(pop_el(s)){ ; }
    return;
}
