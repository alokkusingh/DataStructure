#include <stdio.h>
#include <stdlib.h>
#include <LinkList.h>

void print(const Node *head) {
    while (head) {
        printf ("%d ",head->data);
        head = head->next;

    }
}

void insert(Node **head, const int i) {
     Node *temp, *start ;
     start = *head;

     temp = (Node *)malloc(sizeof(Node));
     temp->next = NULL;
     temp->data = i;


     if (start == NULL) {
          *head = temp;
     } else {
         while(start->next) {
             start = start->next;
         }
         start->next = temp;

     }
}

void deleteData(Node** head, const int data)
{
     Node *curr = *head, *prev = *head;

     while(curr && curr->data != data)
     {
         prev = curr;
         curr = curr->next;
     }

     if (curr == NULL)
         return;

     if (*head == curr)
     {
          *head = curr->next;
          free(curr);
          return;
     }

     prev->next = curr->next;
     free(curr);

}

void reverse(Node **head, Node *prev, Node *cur) {
    if (prev == NULL || cur == NULL) {
        return;
    }
    if (cur->next == NULL) {
        (*head)->next = NULL;
        *head = cur;
    }

    reverse(head, cur, (cur)->next);
    (cur)->next = prev;
}

void swapFirstAndLast(Node** head) {
    Node *prev;
    Node *cur = *head;
    if ((*head) == NULL)
    	return;

    if (((*head)->next) == NULL)
    	return;

    while(cur->next)
    {
    	prev = cur;
    	cur = cur->next;
    }

    if (*head == prev)
    {
    	//it means only 2 nodes are there
        cur->next = prev;
        cur->next->next = NULL;
        *head = cur;
    }
    else
    {
    	//it means more than 2 nodes are there
        cur->next = (*head)->next;
        prev->next = *head;
        prev->next->next = NULL;
        *head = cur;
    }

}

