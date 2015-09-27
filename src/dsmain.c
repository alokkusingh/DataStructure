#include <stdio.h> 
#include "LinkList.h"

int main() {

    Node *head = NULL;
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);
    insert(&head, 5);

    print(head);
    printf ("\n");
    reverse(&head, head, head->next);
    print(head);
    printf ("\n");
    swapFirstAndLast(&head);
   print(head);

return 0;
}
