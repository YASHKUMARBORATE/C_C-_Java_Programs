#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void insertfirst(PPNODE First, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if (*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}

int addition(PNODE First)
{
    int icnt = 0;
    while (First != NULL)
    {

        icnt = icnt + First->data;
        First = First->next;
    }
    return icnt;
}

int main()
{
    PNODE head = NULL;
    int iret = 0;

    // insertfirst(&head, 70);
    // insertfirst(&head, 30);
    // insertfirst(&head, 50);
    insertfirst(&head, 40);
    insertfirst(&head, 30);
    insertfirst(&head, 20);
    insertfirst(&head, 10);

    iret = addition(head);

    printf("%d ", iret);
    return 0;
}