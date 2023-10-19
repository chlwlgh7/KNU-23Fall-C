#include <stdio.h>
#include <stdlib.h>

typedef struct _NODE {
    int data;
    struct _NODE* next;
}NODE;

void print_list(NODE* head)
{
    NODE* p = head->next;
    while (p != NULL) {
        printf("%d", p->data);
        p = p->next;
    }
}
void insert_node(NODE* head, int data)
{
    NODE* p = head->next;
    while (p->next != NULL) {
        p = p->next;
    }

    NODE* new_node = (NODE*)malloc(sizeof(NODE));
    new_node->data;
    new_node->next = p->next;
    p->next = new_node;
}

int main(void)
{
    NODE* head = (NODE*)malloc(sizeof(NODE));
    (*head).next = NULL;

    NODE* n1 = (NODE*)malloc(sizeof(NODE));
    n1->data = 1;
    n1->next = head->next;
    head->next = n1;

    NODE* n2 = (NODE*)malloc(sizeof(NODE));
    n2->data = 2;
    n2->next = n1->next;
    n1->next = n2;

    NODE* n3 = (NODE*)malloc(sizeof(NODE));
    n3->data = 3;
    n3->next = n2->next;
    n2->next = n3;


    print_list(head);
    insert_node(head, 4);
    insert_node(head, 5);


    

    return 0;
}