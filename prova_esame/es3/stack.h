#ifndef STACK_H_
#define STACK_H_

#include <iostream>

struct pos {
  int x;
  int y;
};

struct node{
  pos cur;
  node *next;
};

typedef node * stack ;

void init(stack &);
void deinit(stack &);
bool push (pos, stack &);
bool top (pos &, const stack &);
bool pop (stack &);
void print(const stack &);

#endif // STACK_H_
