#ifndef STACK_H_
#define STACK_H_

const int VAL_SIZE = 10;

struct node {
    char *c;
    node *next;
};
typedef node* stack;

void init(stack &);
bool empty(stack );
bool push_el(stack &, char *);
bool top_el(stack &, char *);
bool pop_el(stack & );
void print_stack(stack );
void deallocate(stack &);

#endif // STACK_H_
