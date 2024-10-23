#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;

class DoublyLL
{
private:
    PNODE First;
    int iCount;

public:
    DoublyLL();

    void Display();
    int Count();

    void InsertFirst(int No);
    void InsertLast(int No);
    void InsertAtPos(int No, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};

DoublyLL::DoublyLL()
{
    First = NULL;
    iCount = 0;
}

void DoublyLL::Display()
{
    PNODE temp = NULL;

    temp = First;
    cout << "\nNULL";
    while (temp != NULL)
    {
        cout << "|" << temp->data << "|<=>";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int DoublyLL::Count()
{
    cout << "\n";
    return iCount;
}

void DoublyLL::InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if (First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First->prev = newn;

        First = newn;
    }
    iCount++;
}

void DoublyLL::InsertLast(int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if (First == NULL)
    {
        First = newn;
    }
    else
    {
        temp = First;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;
    }
    iCount++;
}

void DoublyLL::InsertAtPos(int No, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int i = 0;

    newn = new NODE;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if ((iPos < 1) || (iPos > iCount + 1))
    {
        return;
    }
    if (iPos == 1)
    {
        InsertFirst(No);
    }
    else if (iPos == iCount + 1)
    {
        InsertLast(No);
    }
    else
    {
        temp = First;

        for (i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        iCount++;
    }
}

void DoublyLL::DeleteFirst()
{
    if (First == NULL)
    {
        return;
    }
    else if (First->next == NULL)
    {
        free(First);
        First = NULL;
    }
    else
    {
        First = First->next;
        free(First->prev);
        First->prev = NULL;
    }
    iCount--;
}

void DoublyLL::DeleteLast()
{
    PNODE temp = NULL;

    if (First == NULL)
    {
        return;
    }
    else if (First->next == NULL)
    {
        free(First);
        First = NULL;
    }
    else
    {
        temp = First;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
    iCount--;
}

void DoublyLL::DeleteAtPos(int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int i = 0;

    if ((iPos < 1) || (iPos > iCount))
    {
        return;
    }
    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = First;

        for (i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;

        free(temp->next->prev);

        temp->next->prev = NULL;

        iCount--;
    }
}

int main()
{
    int iret = 0;
    DoublyLL obj;

    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(111);
    obj.InsertLast(121);
    obj.InsertLast(151);
    obj.InsertLast(201);

    obj.InsertAtPos(105, 5);

    obj.DeleteFirst();
    obj.DeleteLast();

    obj.DeleteAtPos(5);

    obj.Display();
    iret = obj.Count();

    cout << "number of elements in linklist is : " << iret;
    return 0;
}