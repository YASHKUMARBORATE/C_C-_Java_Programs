#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void display(PNODE First, PNODE Last)
{
    do
    {
        printf("->");
        printf("|%d|<-", First->data);
        First = First->next;
    } while (First != Last->next);
    printf("\n");
}
int Count(PNODE First, PNODE Last)
{
    int icnt = 0;

    do
    {
        icnt++;
        First = First->next;
    } while (First != Last->next);
    return icnt;
}
void Insertfirst(PPNODE First, PPNODE Last, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if ((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn;
        *First = newn;

        (*Last)->next = *First;
        (*First)->prev = *Last;
    }
}
void Insertlast(PPNODE First, PPNODE Last, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if ((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {

        (*Last)->next = newn;
        newn->prev = *Last;
        *Last = newn;

        (*Last)->next = *First;
        (*First)->prev = *Last;
    }
}
void Insertatpos(PPNODE First, PPNODE Last, int iNo, int ipos)
{
    int i = 0;
    int ilen = 0;
    ilen = Count(*First, *Last);

    PNODE newn = NULL;
    PNODE temp = NULL;

    if ((ipos < 1) || (ipos > ilen + 1))
    {
        return;
    }
    if (ipos == 1)
    {
        Insertfirst(First, Last, iNo);
    }
    else if (ipos == ilen)
    {
        Insertlast(First, Last, iNo);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        temp = *First;
        for (i = 1; i < ipos - 1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        (*Last)->next = *First;
        (*First)->prev = *Last;
    }
}

void deletefirst(PPNODE First, PPNODE Last)
{
    if ((First == NULL) && (Last == NULL))
    {
        return;
    }
    if (*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        *First = (*First)->next;
        free((*Last)->next);

        (*First)->prev = *Last;
        (*Last)->next = *First;
    }
}
void deletelast(PPNODE First, PPNODE Last)
{
    if ((First == NULL) && (Last == NULL))
    {
        return;
    }
    if (*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        *Last = (*Last)->prev;

        free((*First)->prev);

        (*First)->prev = *Last;
        (*Last)->next = *First;
    }
}
void deleteatpos(PPNODE First, PPNODE Last, int ipos)
{
    int i = 0;
    int ilen = 0;
    ilen = Count(*First, *Last);
    PNODE temp = NULL;

    if ((ipos < 1) || (ipos > ilen))
    {
        return;
    }
    if (ipos == 1)
    {
        deletefirst(First, Last);
    }
    else if (ipos == ilen)
    {
        deletelast(First, Last);
    }
    else
    {
        temp = *First;
        for (i = 1; i < ipos - 1; i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;

        (*Last)->next = *First;
        (*First)->prev = *Last;
    }
}

int main()
{
    PNODE Head = NULL;
    PNODE tail = NULL;
    int iret = 0;

    Insertfirst(&Head, &tail, 101);
    Insertfirst(&Head, &tail, 51);
    Insertfirst(&Head, &tail, 21);
    Insertfirst(&Head, &tail, 11);

    Insertlast(&Head, &tail, 111);
    Insertlast(&Head, &tail, 121);
    Insertlast(&Head, &tail, 151);
    Insertlast(&Head, &tail, 201);

    Insertatpos(&Head, &tail, 305, 5);

    deletefirst(&Head, &tail);
    deletelast(&Head, &tail);

    deleteatpos(&Head, &tail, 5);
    display(Head, tail);
    
    iret = Count(Head, tail);

    printf(" number elements in ll is %d", iret);

    return 0;
}