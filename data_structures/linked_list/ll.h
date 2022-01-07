#ifndef LL_H_
#define LL_H_

struct node {
    int val;
    struct node *next;
    node(int val) : val(val), next(0) {}
};
typedef node *ll_t;

void init (ll_t &);
bool empty(ll_t);
bool get_top(ll_t , int &);
bool push_back(ll_t &, int );
int pop_back(ll_t &);
bool deinit(ll_t &);
void print_list(ll_t );

#endif // LL_H_
