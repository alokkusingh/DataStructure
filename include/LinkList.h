#ifndef __LINK_LIST__
#define __LINK_LIST__

#ifdef __cplusplus
extern "C" {
#endif
typedef struct node {

    int data;
    struct node *next;

} Node;

void print(const Node*);
void insert(Node**, int);
void reverse(Node**, Node*, Node*);
void swapFirstAndLast(Node**);

#ifdef __cplusplus
}
#endif

#endif
