#include "ll.h"
#include <cstdlib>
#include <iostream>

bool empty (ll_t list) {
    return list == NULL;
}

void init(ll_t &list) {
    list = NULL;
}

// get last element on list, tail must be the last non null element
bool get_top(ll_t head, int &val) {
    while(head->next) {
        head = head->next;
    }
    if(head == NULL) return false;
    val = head->val;
    return true;
}

// bool push_back(ll_t &head, int val) {
//     ll_t *newNode = &head;
//     while (*newNode) {
//         newNode = &((*newNode)->next);
//     }
//     *newNode = new node(val);
//     return true;
// }

bool push_back(ll_t &head, int val) {
    ll_t cur = head;
    ll_t new_node = new node(val);
    if (new_node == NULL) return false;
    if (cur == NULL) {
        head = new_node;
        return true;
    }
    while(cur->next != NULL){
        cur = cur->next;
    }
    cur->next = new_node;
    return true;
}
void print_list(ll_t head) {
    ll_t cur = head;
    while (cur) {
        std::cout << cur->val << " ";
        cur = cur->next;
    }
    std::cout << '\n';
}

bool deinit (ll_t &head) {
    ll_t cur = head;
    head = NULL;
    while(cur) {
        ll_t next = cur->next;
        delete cur;
        cur = next;
    }
    return true;
}

int pop_back(ll_t &head) {
    ll_t cur = head;
    while(cur->next->next) {
        cur = cur->next;
    }
    int val = cur->next->val;
    delete cur->next;
    cur->next = NULL;
    return val;
}
