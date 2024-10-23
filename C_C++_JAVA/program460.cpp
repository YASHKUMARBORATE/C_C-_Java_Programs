#include <iostream>
using namespace std;

/////////////////////////////////////////////////////////////
//
// Code of Singly Linear
//
/////////////////////////////////////////////////////////////

template <class T>
struct nodeSL
{
    T data;
    struct nodeSL *next;
};

template <class T>
class SinglyLL
{
private:
    struct nodeSL<T> *First;
    int iCount;

public:
    SinglyLL();

    void Display();
    int Count();

    void InsertFirst(T No);
    void InsertLast(T No);
    void InsertAtPos(T No, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};

template <class T>
SinglyLL<T>::SinglyLL()
{
    cout << "Inside Constructor\n";
    First = NULL;
    iCount = 0;
}

template <class T>
void SinglyLL<T>::Display()
{
    struct nodeSL<T> *temp = First;

    while (temp != NULL)
    {
        cout << "| " << temp->data << "|-> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

template <class T>
int SinglyLL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyLL<T>::InsertFirst(T No)
{
    struct nodeSL<T> *newn = NULL;

    newn = new nodeSL<T>; // malloc

    newn->data = No;
    newn->next = NULL;

    if (First == NULL) // if(iCount == 0)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    iCount++;
}

template <class T>
void SinglyLL<T>::InsertLast(T No)
{
    struct nodeSL<T> *newn = NULL;
    struct nodeSL<T> *temp = First;

    newn = new nodeSL<T>; // malloc

    newn->data = No;
    newn->next = NULL;

    if (First == NULL) // if(iCount == 0)
    {
        First = newn;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}

template <class T>
void SinglyLL<T>::InsertAtPos(T No, int iPos)
{
    struct nodeSL<T> *newn = NULL;
    int i = 0;
    struct nodeSL<T> *temp;

    if ((iPos < 1) || (iPos > iCount + 1))
    {
        cout << "Invalid position\n";
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

        newn = new nodeSL<T>;
        newn->data = No;
        newn->next = NULL;

        for (i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
        iCount++;
    }
}

template <class T>
void SinglyLL<T>::DeleteFirst()
{
    struct nodeSL<T> *temp = First;

    if (First == NULL)
    {
        cout << "LL is empty\n";
        return;
    }
    else if (First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        First = First->next;
        delete temp;
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteLast()
{
    struct nodeSL<T> *temp = First;

    if (First == NULL)
    {
        cout << "LL is empty\n";
        return;
    }
    else if (First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
    int i = 0;
    struct nodeSL<T> *temp1;
    struct nodeSL<T> *temp2;

    if ((iPos < 1) || (iPos > iCount))
    {
        cout << "Invalid position\n";
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
        temp1 = First;

        for (i = 1; i < iPos - 1; i++)
        {
            temp1 = temp1->next;
        }

        temp2 = temp1->next;

        temp1->next = temp2->next;
        delete temp2;

        iCount--;
    }
}

/////////////////////////////////////////////////////////////
//
// Code of Doubly Circular
//
/////////////////////////////////////////////////////////////
template <class T>
struct nodeDC
{
    T data;
    struct nodeDC *next;
    struct nodeDC *prev;
};

template <class T>
class DoublyCL
{
private:
    struct nodeDC<T> *First;
    struct nodeDC<T> *Last;
    int iCount;

public:
    DoublyCL();

    void Display();
    int Count();

    void InsertFirst(T No);
    void InsertLast(T No);
    void InsertAtPos(T No, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};

template <class T>
DoublyCL<T>::DoublyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template <class T>
void DoublyCL<T>::Display()
{
    if (First == NULL && Last == NULL)
    {
        cout << "Linked List is emprty\n";
        return;
    }

    cout << "<=> ";
    do
    {
        cout << "| " << First->data << "| <=> ";
        First = First->next;
    } while (Last->next != First);

    cout << "\n";
}

template <class T>
int DoublyCL<T>::Count()
{
    return iCount;
}

template <class T>
void DoublyCL<T>::InsertFirst(T No)
{
    struct nodeDC<T> *newn = NULL;

    newn = new nodeDC<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if ((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }
    Last->next = First;
    First->prev = Last;

    iCount++;
}

template <class T>
void DoublyCL<T>::InsertLast(T No)
{
    struct nodeDC<T> *newn = NULL;

    newn = new nodeDC<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if ((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last->next = newn;
        newn->prev = Last;
        Last = newn;
    }
    Last->next = First;
    First->prev = Last;

    iCount++;
}

template <class T>
void DoublyCL<T>::InsertAtPos(T No, int iPos)
{
    struct nodeDC<T> *temp = NULL;
    struct nodeDC<T> *newn = NULL;

    int i = 0;

    if (iPos < 1 || iPos > iCount + 1)
    {
        cout << "Invalid postion\n";
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
        newn = new nodeDC<T>;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

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

template <class T>
void DoublyCL<T>::DeleteFirst()
{
    if (First == NULL && Last == NULL) // Empty LL
    {
        return;
    }
    else if (First == Last) // Single node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else // More than one node
    {
        First = First->next;
        delete Last->next;
        First->prev = Last;
        Last->next = First;
    }
    iCount--;
}

template <class T>
void DoublyCL<T>::DeleteLast()
{
    if (First == NULL && Last == NULL) // Empty LL
    {
        return;
    }
    else if (First == Last) // Single node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else // More than one node
    {
        Last = Last->prev;
        delete First->prev;

        Last->next = First;
        First->prev = Last;
    }
    iCount--;
}

template <class T>
void DoublyCL<T>::DeleteAtPos(int iPos)
{
    struct nodeDC<T> *temp = NULL;

    int i = 0;

    if (iPos < 1 || iPos > iCount)
    {
        cout << "Invalid postion\n";
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
        delete temp->next->prev;
        temp->next->prev = temp;

        iCount--;
    }
}

/////////////////////////////////////////////////////////////
//
// Code of Doubly Liear
//
/////////////////////////////////////////////////////////////

template <class T>
struct nodedl
{
    T data;
    struct nodedl *next;
    struct nodedl *prev;
};

template <class T>
class DoublyLL
{
private:
    struct nodedl<T> *First;
    int iCount;

public:
    DoublyLL();

    void Display();
    int Count();

    void InsertFirst(T No);
    void InsertLast(T No);
    void InsertAtPos(T No, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};
template <class T>
DoublyLL<T>::DoublyLL()
{
    First = NULL;
    iCount = 0;
}
template <class T>
void DoublyLL<T>::Display()
{
    struct nodedl<T> *temp = NULL;

    temp = First;

    cout << "\nNULL";
    while (temp != NULL)
    {
        cout << "|" << temp->data << "|<=>";
        temp = temp->next;
    }
    cout << "NULL\n";
}
template <class T>
int DoublyLL<T>::Count()
{
    cout << "\n";
    return iCount;
}
template <class T>
void DoublyLL<T>::InsertFirst(T No)
{
    struct nodedl<T> *newn = NULL;

    newn = new nodedl<T>;

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
template <class T>
void DoublyLL<T>::InsertLast(T No)
{
    struct nodedl<T> *newn = NULL;
    struct nodedl<T> *temp = NULL;

    newn = new nodedl<T>;

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
template <class T>
void DoublyLL<T>::InsertAtPos(T No, int iPos)
{
    struct nodedl<T> *newn = NULL;
    struct nodedl<T> *temp = NULL;
    int i = 0;

    newn = new nodedl<T>;

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
template <class T>
void DoublyLL<T>::DeleteFirst()
{
    if (First == NULL)
    {
        return;
    }
    else if (First->next == NULL)
    {
        delete First;
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
template <class T>
void DoublyLL<T>::DeleteLast()
{
    struct nodedl<T> *temp = NULL;

    if (First == NULL)
    {
        return;
    }
    else if (First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        temp = First;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}
template <class T>
void DoublyLL<T>::DeleteAtPos(int iPos)
{
    struct nodedl<T> *newn = NULL;
    struct nodedl<T> *temp = NULL;
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

        delete temp->next->prev;

        temp->next->prev = NULL;

        iCount--;
    }
}

/////////////////////////////////////////////////////////////
//
// Code of Singly Circular
//
/////////////////////////////////////////////////////////////

template <class T>
struct nodesc
{
    T data;
    struct nodesc<T> *next;
};

template <class T>
class SinglyCL
{
private:
    struct nodesc<T> *First;
    struct nodesc<T> *Last;

    int iCount;

public:
    SinglyCL();

    void Display();
    int Count();

    void InsertFirst(T No);
    void InsertLast(T No);
    void InsertAtPos(T No, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};

template <class T>
SinglyCL<T>::SinglyCL()
{

    First = NULL;
    Last = NULL;

    iCount = 0;
}

template <class T>
void SinglyCL<T>::Display()
{

    if ((First == NULL) && (Last == NULL))
    {
        cout << "LinkedList is empty\n";
        return;
    }

    do
    {
        cout << "| " << First->data << "|-> ";
        First = First->next;

    } while (First != Last->next);

    cout << "\n";
}

template <class T>
int SinglyCL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyCL<T>::InsertFirst(T No)
{
    struct nodesc<T> *newn = NULL;

    newn = new nodesc<T>;

    newn->data = No;
    newn->next = NULL;

    if ((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }

    iCount++;
    Last->next = First;
}

template <class T>
void SinglyCL<T>::InsertLast(T No)
{
    struct nodesc<T> *newn = NULL;

    newn = new nodesc<T>;

    newn->data = No;
    newn->next = NULL;

    if ((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last->next = newn;
        Last = newn;
    }
    iCount++;
    Last->next = First;
}

template <class T>
void SinglyCL<T>::InsertAtPos(T No, int iPos)
{
    struct nodesc<T> *newn = NULL;
    int i = 0;
    struct nodesc<T> *temp;

    if ((iPos < 1) || (iPos > iCount + 1))
    {
        cout << "Invalid position\n";
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

        newn = new nodesc<T>;
        newn->data = No;
        newn->next = NULL;

        for (i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
        iCount++;

        Last->next = First;
    }
}

template <class T>
void SinglyCL<T>::DeleteFirst()
{

    if ((First == NULL) && (Last == NULL))
    {
        cout << "LL is empty\n";
        return;
    }
    else if (First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = First->next;
        delete Last->next;
    }
    Last->next = First;
    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteLast()
{
    struct nodesc<T> *temp = First;

    if ((First == NULL) && (Last == NULL))
    {
        cout << "LL is empty\n";
        return;
    }
    else if (First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        while (temp->next != Last)
        {
            temp = temp->next;
        }

        delete Last;
        Last = temp;
    }

    Last->next = First;
    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteAtPos(int iPos)
{
    int i = 0;
    struct nodesc<T> *temp1;
    struct nodesc<T> *temp2;

    if ((iPos < 1) || (iPos > iCount))
    {
        cout << "Invalid position\n";
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
        temp1 = First;

        for (i = 1; i < iPos - 1; i++)
        {
            temp1 = temp1->next;
        }

        temp2 = temp1->next;

        temp1->next = temp2->next;
        delete temp2;

        Last->next = First;
        iCount--;
    }
}

/////////////////////////////////////////////////////////////
//
// Code of Stack
//
/////////////////////////////////////////////////////////////

template <class T>
struct nodest
{
    T data;
    struct nodest<T> *next;
};

template <class T>
class Stack
{
private:
    struct nodest<T> *First;
    int iCount;

public:
    Stack();
    void Display();
    int Count();
    void Push(T No);
    T Pop();
};

template <class T>
Stack<T>::Stack()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void Stack<T>::Display()
{
    cout << "Elements of stack are : \n";
    struct nodest<T> *temp = First;

    while (temp != NULL)
    {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << "\n";
}
template <class T>
int Stack<T>::Count()
{
    return iCount;
}
template <class T>
void Stack<T>::Push(T No)
{
    struct nodest<T> *newn = NULL;

    newn = new nodest<T>;

    newn->data = No;
    newn->next = NULL;

    if (First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    iCount++;
}
template <class T>
T Stack<T>::Pop()
{
    int iValue = 0;
    struct nodest<T> *temp = NULL;

    if (First == NULL)
    {
        cout << "Unable to pop the element as stack is empty\n";
        return -1;
    }
    else
    {
        temp = First;

        iValue = First->data;
        First = First->next;
        delete temp;

        iCount--;
    }

    return iValue;
}

/////////////////////////////////////////////////////////////
//
// Code of Queue
//
/////////////////////////////////////////////////////////////

template <class T>
struct nodede
{
    T data;
    struct nodede<T> *next;
};

template <class T>
class Queue
{
private:
    struct nodede<T> *First;
    int iCount;

public:
    Queue();
    void Display();
    int Count();
    void EnQueue(T No);
    T DeQueue();
};

template <class T>
Queue<T>::Queue()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void Queue<T>::Display()
{
    cout << "Elements of Queue are : \n";
    struct nodede<T> *temp = First;

    while (temp != NULL)
    {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << "\n";
}

template <class T>
int Queue<T>::Count()
{
    return iCount;
}

template <class T>
void Queue<T>::EnQueue(T No)
{
    struct nodede<T> *newn = NULL;
    struct nodede<T> *temp = NULL;

    newn = new nodede<T>;

    newn->data = No;
    newn->next = NULL;

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
    }
    iCount++;
}
template <class T>
T Queue<T>::DeQueue()
{
    int iValue = 0;
    struct nodede<T> *temp = NULL;

    if (First == NULL)
    {
        cout << "Unable to remove the element as queue is empty\n";
        return -1;
    }
    else
    {
        temp = First;

        iValue = First->data;
        First = First->next;
        delete temp;

        iCount--;
    }

    return iValue;
}

int main()
{
    // LL of integer
    cout << "-------------- LinkdList of Integers --------------\n";

    SinglyLL<int> *siobj = new SinglyLL<int>();
    int iRet = 0;

    siobj->InsertFirst(51);
    siobj->InsertFirst(21);
    siobj->InsertFirst(11);

    siobj->Display();
    iRet = siobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    siobj->InsertLast(101);
    siobj->InsertLast(111);
    siobj->InsertLast(121);

    siobj->Display();
    iRet = siobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    siobj->InsertAtPos(105, 5);

    siobj->Display();
    iRet = siobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    siobj->DeleteAtPos(5);
    siobj->Display();
    iRet = siobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    // LL of character
    cout << "-------------- LinkdList of Chracters --------------\n";

    SinglyLL<char> *scobj = new SinglyLL<char>();

    scobj->InsertFirst('D');
    scobj->InsertFirst('F');
    scobj->InsertFirst('R');

    scobj->Display();
    iRet = scobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    scobj->InsertLast('E');
    scobj->InsertLast('Y');
    scobj->InsertLast('U');

    scobj->Display();
    iRet = scobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    scobj->InsertAtPos('W', 5);

    scobj->Display();
    iRet = scobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    scobj->DeleteAtPos(5);
    scobj->Display();
    iRet = scobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    // LL of float
    cout << "-------------- LinkdList of Floats --------------\n";

    SinglyLL<float> *sfobj = new SinglyLL<float>();

    sfobj->InsertFirst(90.78f);
    sfobj->InsertFirst(78.99f);
    sfobj->InsertFirst(67.99f);

    sfobj->Display();
    iRet = sfobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    sfobj->InsertLast(45.67f);
    sfobj->InsertLast(54.78f);
    sfobj->InsertLast(77.89f);

    sfobj->Display();
    iRet = sfobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    sfobj->InsertAtPos(88.56, 5);

    sfobj->Display();
    iRet = sfobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    sfobj->DeleteAtPos(5);
    sfobj->Display();
    iRet = sfobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    // LL of double

    cout << "-------------- LinkdList of Doubles --------------\n";

    SinglyLL<double> *sdobj = new SinglyLL<double>();

    sdobj->InsertFirst(90.78978);
    sdobj->InsertFirst(78.99645);
    sdobj->InsertFirst(67.9934);

    sdobj->Display();
    iRet = sdobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    sdobj->InsertLast(45.67867);
    sdobj->InsertLast(54.78534);
    sdobj->InsertLast(77.89324);

    sdobj->Display();
    iRet = sdobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    sdobj->InsertAtPos(88.56987, 5);

    sdobj->Display();
    iRet = sdobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    sdobj->DeleteAtPos(5);
    sdobj->Display();
    iRet = sdobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    cout << "-------------- Doublyc LinkdList of Integer --------------\n";

    DoublyCL<int> *diobj = new DoublyCL<int>();

    diobj->InsertFirst(51);
    diobj->InsertFirst(21);
    diobj->InsertFirst(11);

    diobj->InsertLast(101);
    diobj->InsertLast(111);
    diobj->InsertLast(121);

    diobj->Display();
    iRet = diobj->Count();

    diobj->DeleteAtPos(5);

    diobj->Display();
    iRet = diobj->Count();

    cout << "-------------- DoublyL LinkdList of Integer --------------\n";
    DoublyLL<int> *iobj = new DoublyLL<int>();

    iobj->InsertFirst(101);
    iobj->InsertFirst(51);
    iobj->InsertFirst(21);
    iobj->InsertFirst(11);

    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    iobj->InsertLast(111);
    iobj->InsertLast(121);
    iobj->InsertLast(151);
    iobj->InsertLast(201);

    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    iobj->InsertAtPos(105, 3);

    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    iobj->DeleteFirst();
    iobj->DeleteLast();

    iobj->DeleteAtPos(5);

    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;
    // LL of character

    cout << "-------------- DoublyL LinkdList of Chracters --------------\n";

    DoublyLL<char> *cobj = new DoublyLL<char>();

    cobj->InsertFirst('D');
    cobj->InsertFirst('F');
    cobj->InsertFirst('R');

    cobj->Display();
    iRet = cobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    cobj->InsertLast('E');
    cobj->InsertLast('Y');
    cobj->InsertLast('U');

    cobj->Display();
    iRet = cobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    cobj->InsertAtPos('W', 5);

    cobj->Display();
    iRet = cobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    cobj->DeleteAtPos(5);
    cobj->Display();

    iRet = cobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    // LL of float
    cout << "-------------- DoublyL LinkdList of Floats --------------\n";

    DoublyLL<float> *fobj = new DoublyLL<float>();

    fobj->InsertFirst(90.78f);
    fobj->InsertFirst(78.99f);
    fobj->InsertFirst(67.99f);

    fobj->Display();
    iRet = fobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    fobj->InsertLast(45.67f);
    fobj->InsertLast(54.78f);
    fobj->InsertLast(77.89f);

    fobj->Display();
    iRet = fobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    fobj->InsertAtPos(88.56, 5);

    fobj->Display();
    iRet = fobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    fobj->DeleteAtPos(5);
    fobj->Display();
    iRet = fobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    // LL of doublell

    cout << "-------------- DoublyL LinkdList of Doubles --------------\n";

    DoublyLL<double> *dobj = new DoublyLL<double>();

    dobj->InsertFirst(90.78978);
    dobj->InsertFirst(78.99645);
    dobj->InsertFirst(67.9934);

    dobj->Display();
    iRet = dobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    dobj->InsertLast(45.67867);
    dobj->InsertLast(54.78534);
    dobj->InsertLast(77.89324);

    dobj->Display();
    iRet = dobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    dobj->InsertAtPos(88.56987, 5);

    dobj->Display();
    iRet = dobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    dobj->DeleteAtPos(5);
    dobj->Display();
    iRet = dobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    cout << "--------------SinglyCL LinkdList of Integers --------------\n";
    SinglyCL<int> *iscobj = new SinglyCL<int>();

    iscobj->InsertFirst(101);
    iscobj->InsertFirst(51);
    iscobj->InsertFirst(21);
    iscobj->InsertFirst(11);

    iscobj->Display();
    iRet = iscobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    iscobj->InsertLast(101);
    iscobj->InsertLast(111);
    iscobj->InsertLast(121);

    iscobj->Display();
    iRet = iscobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    iscobj->DeleteFirst();
    iscobj->DeleteFirst();
    iscobj->InsertAtPos(105, 5);

    iscobj->Display();
    iRet = iscobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    iscobj->DeleteAtPos(5);
    iscobj->Display();
    iRet = iscobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    cout << "-------------- SinglyCL LinkdList of Chracters --------------\n";

    SinglyCL<char> *cscobj = new SinglyCL<char>();

    cscobj->InsertFirst('D');
    cscobj->InsertFirst('F');
    cscobj->InsertFirst('R');

    cscobj->Display();
    iRet = cscobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    cscobj->InsertLast('E');
    cscobj->InsertLast('Y');
    cscobj->InsertLast('U');

    cscobj->Display();
    iRet = cscobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    cscobj->InsertAtPos('W', 5);

    cscobj->Display();
    iRet = cscobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    cscobj->DeleteAtPos(5);
    cscobj->Display();
    iRet = cscobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    cout << "-------------- LinkdList of Floats --------------\n";

    SinglyCL<float> *fscobj = new SinglyCL<float>();

    fscobj->InsertFirst(90.78f);
    fscobj->InsertFirst(78.99f);
    fscobj->InsertFirst(67.99f);

    fscobj->Display();
    iRet = fscobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    fscobj->InsertLast(45.67f);
    fscobj->InsertLast(54.78f);
    fscobj->InsertLast(77.89f);

    fscobj->Display();
    iRet = fscobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    fscobj->InsertAtPos(88.56, 5);

    fscobj->Display();
    iRet = fscobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    fscobj->DeleteAtPos(5);
    fscobj->Display();
    iRet = fscobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    cout << "-------------- LinkdList of Doubles --------------\n";

    SinglyCL<double> *dscobj = new SinglyCL<double>();

    dscobj->InsertFirst(90.78978);
    dscobj->InsertFirst(78.99645);
    dscobj->InsertFirst(67.9934);

    dscobj->Display();
    iRet = dscobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    dscobj->InsertLast(45.67867);
    dscobj->InsertLast(54.78534);
    dscobj->InsertLast(77.89324);

    dscobj->Display();
    iRet = dscobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    dscobj->InsertAtPos(88.56987, 5);

    dscobj->Display();
    iRet = dscobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    dscobj->DeleteAtPos(5);
    dscobj->Display();
    iRet = dscobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    cout << "-------------- LinkdList of Integers --------------\n";

    Stack<int> *istobj = new Stack<int>();

    istobj->Push(10);
    istobj->Push(20);
    istobj->Push(30);
    istobj->Push(40);

    istobj->Display();

    iRet = istobj->Count();

    cout << "Number of elements in the stack are : " << iRet << "\n";

    iRet = istobj->Pop();

    cout << "Poped element is : " << iRet << "\n";

    iRet = istobj->Pop();

    cout << "Poped element is : " << iRet << "\n";

    istobj->Display();

    iRet = istobj->Count();

    cout << "Number of elements in the stack are : " << iRet << "\n";

    istobj->Push(50);

    istobj->Display();

    iRet = istobj->Count();

    cout << "Number of elements in the stack are : " << iRet << "\n";

    cout << "-------------- LinkdList of Chracters --------------\n";

    Stack<char> *cstobj = new Stack<char>();

    cstobj->Push('a');
    cstobj->Push('p');
    cstobj->Push('d');
    cstobj->Push('f');

    cstobj->Display();

    iRet = cstobj->Count();

    cout << "Number of elements in the stack are : " << iRet << "\n";

    iRet = cstobj->Pop();

    cout << "Poped element is : " << iRet << "\n";

    iRet = cstobj->Pop();

    cout << "Poped element is : " << iRet << "\n";

    cstobj->Display();

    iRet = cstobj->Count();

    cout << "Number of elements in the stack are : " << iRet << "\n";

    cstobj->Push('t');

    cstobj->Display();

    iRet = cstobj->Count();

    cout << "Number of elements in the stack are : " << iRet << "\n";

    cout << "-------------- LinkdList of Floats --------------\n";
    Stack<float> *fstobj = new Stack<float>();

    fstobj->Push(10.56f);
    fstobj->Push(20.56f);
    fstobj->Push(30.64f);
    fstobj->Push(40.5f);

    fstobj->Display();

    iRet = fstobj->Count();

    cout << "Number of elements in the stack are : " << iRet << "\n";

    iRet = fstobj->Pop();

    cout << "Poped element is : " << iRet << "\n";

    iRet = fstobj->Pop();

    cout << "Poped element is : " << iRet << "\n";

    fstobj->Display();

    iRet = fstobj->Count();

    cout << "Number of elements in the stack are : " << iRet << "\n";

    fstobj->Push(50.64f);

    fstobj->Display();

    iRet = fstobj->Count();

    cout << "Number of elements in the stack are : " << iRet << "\n";

    cout << "-------------- LinkdList of Doubles --------------\n";
    Stack<double> *dstobj = new Stack<double>();

    dstobj->Push(10.5665);
    dstobj->Push(20.56965);
    dstobj->Push(30.64653);
    dstobj->Push(40.5653);

    dstobj->Display();

    iRet = dstobj->Count();

    cout << "Number of elements in the stack are : " << iRet << "\n";

    iRet = dstobj->Pop();

    cout << "Poped element is : " << iRet << "\n";

    iRet = dstobj->Pop();

    cout << "Poped element is : " << iRet << "\n";

    dstobj->Display();

    iRet = dstobj->Count();

    cout << "Number of elements in the stack are : " << iRet << "\n";

    dstobj->Push(50.64469);

    dstobj->Display();

    iRet = dstobj->Count();

    cout << "Number of elements in the stack are : " << iRet << "\n";

 cout << "-------------- LinkdList of Integers --------------\n";

    Queue<int> *iqobj = new Queue<int>;
    

    iqobj->EnQueue(10);
    iqobj->EnQueue(20);
    iqobj->EnQueue(30);
    iqobj->EnQueue(40);

    iqobj->Display();

    iRet = iqobj->Count();

    cout << "Number of elements in the Queue are : " << iRet << "\n";

    iRet = iqobj->DeQueue();

    cout << "Removed element is : " << iRet << "\n";

    iRet = iqobj->DeQueue();

    cout << "Removed element is : " << iRet << "\n";

    iqobj->Display();

    iRet = iqobj->Count();

    cout << "Number of elements in the Queue are : " << iRet << "\n";

    iqobj->EnQueue(50);

    iqobj->Display();

    iRet = iqobj->Count();

    cout << "Number of elements in the Queue are : " << iRet << "\n";

    cout << "-------------- LinkdList of character --------------\n";

    Queue<char> *cqobj = new Queue<char>;

    cqobj->EnQueue('f');
    cqobj->EnQueue('e');
    cqobj->EnQueue('e');
    cqobj->EnQueue('t');

    cqobj->Display();

    iRet = cqobj->Count();

    cout << "Number of elements in the Queue are : " << iRet << "\n";

    iRet = cqobj->DeQueue();

    cout << "Removed element is : " << iRet << "\n";

    iRet = cqobj->DeQueue();

    cout << "Removed element is : " << iRet << "\n";

    cqobj->Display();

    iRet = cqobj->Count();

    cout << "Number of elements in the Queue are : " << iRet << "\n";

    cqobj->EnQueue('w');

    cqobj->Display();

    iRet = cqobj->Count();

    cout << "Number of elements in the Queue are : " << iRet << "\n";

    cout << "-------------- LinkdList of float --------------\n";

       Queue<float> *fqobj = new Queue<float>();

fqobj->EnQueue(10.65f);
    fqobj->EnQueue(20.65f);
    fqobj->EnQueue(30.631f);
    fqobj->EnQueue(40.946f);

    fqobj->Display();

    iRet = fqobj->Count();

    cout << "Number of elements in the Queue are : " << iRet << "\n";

    iRet = fqobj->DeQueue();

    cout << "Removed element is : " << iRet << "\n";

    iRet = fqobj->DeQueue();

    cout << "Removed element is : " << iRet << "\n";

    fqobj->Display();

    iRet = fqobj->Count();

    cout << "Number of elements in the Queue are : " << iRet << "\n";

    fqobj->EnQueue(50.46f);

    fqobj->Display();

    iRet = fqobj->Count();

    cout << "Number of elements in the Queue are : " << iRet << "\n";    


    cout << "-------------- LinkdList of Doubles --------------\n";

       Queue<double> *dqobj = new Queue<double>();

       
dqobj->EnQueue(10.65563);
    dqobj->EnQueue(20.65643);
    dqobj->EnQueue(30.63164);
    dqobj->EnQueue(40.946452);

    dqobj->Display();

    iRet = dqobj->Count();

    cout << "Number of elements in the Queue are : " << iRet << "\n";

    iRet = dqobj->DeQueue();

    cout << "Removed element is : " << iRet << "\n";

    iRet = dqobj->DeQueue();

    cout << "Removed element is : " << iRet << "\n";

    dqobj->Display();

    iRet = dqobj->Count();

    cout << "Number of elements in the Queue are : " << iRet << "\n";

    dqobj->EnQueue(50.46653);

    dqobj->Display();

    iRet = dqobj->Count();

    cout << "Number of elements in the Queue are : " << iRet << "\n";    



    return 0;
}