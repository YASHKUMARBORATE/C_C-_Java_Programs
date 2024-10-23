15
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

void Display(PNODE First)
{
    printf("Elements of queue are : \n");
    PNODE temp = First;

    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int Count(PNODE First)
{
    int iCount = 0;
    PNODE temp = First;
    while (temp != NULL)
    {
        iCount++;
        temp = temp->next;
    }
    return iCount;
}

void EnQueue(PPNODE First, int No)
{
    PNODE newn = NULL;
   PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if (*First == NULL)
    {
        *First = newn;
    }
    else
    {
      temp = *First;

        while(temp ->next != NULL)
        {
            temp = temp -> next;
        }

        temp->next = newn;
    }
}

int Queue(PPNODE First)
{
    int iValue = 0;
    PNODE temp = NULL;

    if (*First == NULL)
    {
        printf("Unable to remove the element as queue is empty\n");
        return -1;
    }
    else
    {
        temp = *First;

        iValue = (*First)->data;
        First = (*First)->next;
        free(temp);
    }

    return iValue;
}

int main()
{
    int iRet = 0;
    PNODE Head = NULL;

    EnQueue(&Head, 101);
    EnQueue(&Head, 100);
    EnQueue(&Head, 520);
  EnQueue(&Head, 6);

    Display(Head);

    iRet = Count(Head);

    printf("Number of elements in the queue are %d\n", iRet);

    iRet = DeQueue(&Head);

    printf("Removed element is  :%d\n ", iRet);

    iRet = Pop(&Head);

    printf("Poped element is :%d\n ", iRet);

    Display(Head);

    iRet = Count(Head);

    printf("Number of elements in the stack are %d\n", iRet);

    Push(&Head, 65);

    Display(Head);

    iRet = Count(Head);

    printf("Number of elements in the stack are %d\n", iRet);

    return 0;
}