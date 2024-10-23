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

int additioneven(PNODE First)
{
   int isum = 0;
    while (First != NULL)
    {
        if ((First->data % 2) == 0)
        {
            isum = isum + First->data;
        }
        First = First->next;
    }

    return isum;
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
    insertfirst(&head, 31);

    iret = additioneven(head);

    printf("%d ", iret);
    return 0;
}