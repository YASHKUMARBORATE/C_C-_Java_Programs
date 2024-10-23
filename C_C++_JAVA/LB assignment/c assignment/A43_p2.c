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
        int isum = 0, idigit = 0;
        while (ino != 0)
        {
            idigit = ino % 10;
            isum = idigit + (isum * 10);
            ino = ino / 10;
        }
        if(isum == First->data)
        {
printf("%d\t",isum);

        }

      
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
    insertfirst(&head, 414);
    insertfirst(&head, 17);
    insertfirst(&head, 28);
    insertfirst(&head, 11);

    iret = scemaximum(head);

 
    return 0;
}