#ifndef STACK_H_
#define STACK_H_

#include <iostream>

struct node{
  int val;
  node *next;
};

typedef node * stack ;

void init(stack &);
void deinit(stack &);
bool push (int, stack &);
bool top (int &, const stack &);
bool pop (int &, stack &);
void print(const stack &);

#endif // STACK_H_
