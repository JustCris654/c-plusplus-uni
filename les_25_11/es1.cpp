#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct node {
    int val;
    struct node *next;
} node_t;

node_t *alloc(node_t *current){
    current->next = new node_t;
    return current->next;
}

node_t *init_list(int size){
    node_t *head = NULL;
    head = new node_t;
    head->val = 0;
    if (size > 1) {
        node_t *ptr = head;
        for(int i = 1; i < size; ++i){
            ptr = alloc(ptr);
            ptr->val = 0;
        }
    }
    return head;
}

void print_list(node_t *list){
    for(; list != NULL; list = list->next){
        cout << list->val << '\n';
    }
}

void dealloc_list(node_t *head){
    node_t *ptr = NULL;
    while(head != NULL){
        ptr = head->next;
        delete head;
        head = ptr;
    }
}

node_t *push_el(node_t *head, int val){
    for(; head->next != NULL; head = head->next){}
    node_t *current = alloc(head);
    current->val = val;
    return current;
}

int pop_el(node_t *head){
    for(; head->next->next != NULL; head = head->next){}
    int val = head->next->val;
    delete head->next;
    head->next = NULL;
    return val;
}

int main(int argc, char *argv[]) {
    node_t *head = NULL;
    node_t *current = NULL;

    char word[] = "supercalimero ciao bro bel cazzo";
    // head = init_list(0);
    current = head;
    push_el(head, 10);
    push_el(head, 16);
    push_el(head, 36347);
    push_el(head, -64);
    print_list(head);
    // dealloc_list(head);
    // push_el(head, 5);
    // cout << "-------------------------\n";
    // print_list(head);
    // cout << "-------------------------\n";
    // // cout << pop_el(head) << '\n';
    // dealloc_list(head);
    // cout << "-------------------------\n";
    // print_list(head);

    return 0;
}
