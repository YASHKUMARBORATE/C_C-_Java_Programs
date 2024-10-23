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

int scemaximum(PNODE First)
{

    while (First != NULL)
    {
        int ino = 0;
        ino = First->data;
        int isum = 1, idigit = 0;
        while (ino != 0)
        {
            idigit = ino % 10;
            isum = isum * idigit;
            ino = ino / 10;
        }
        printf("%d\t", isum);
        First = First->next;
    }
}

int main()
{
    PNODE head = NULL;
    int iret = 0;

    // insertfirst(&head, 70);
    // insertfirst(&head, 30);
    // insertfirst(&head, 50);
    insertfirst(&head, 6);
    insertfirst(&head, 41);
    insertfirst(&head, 32);
    insertfirst(&head, 21);
    insertfirst(&head, 11);

    iret = scemaximum(head);

    printf("%d ", iret);
    return 0;
}