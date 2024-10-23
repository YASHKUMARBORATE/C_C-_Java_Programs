
class DoublyCL
{
    public node First;
    public node Last;
    
    public int iCount;

    public DoublyCL()
    {
        System.out.println("Object of DoublyCL gets created succesfully");

        First = null;
        Last = null;
        iCount = 0;
    }

    public void InsertFirst(int No)
    {
        node newn = null;

        newn = new node(No);

        if(First == null && Last == null)
        {
            First = newn;
            Last = newn;
        }
        else
        {
            newn.next = First;
            First.prev = newn;
            First = newn;
        }

        Last.next = First;
        First.prev = Last;

        iCount++;
    }

    public void InsertLast(int No)
    {
        node newn = null;

        newn = new node(No);

        if(First == null && Last == null)
        {
            First = newn;
            Last = newn;
        }
        else
        {
            Last.next = newn;
            newn.prev = Last;

            Last = newn;
        }

        Last.next = First;
        First.prev = Last;

        iCount++;
    }

    public void Display()
    {
        if(First == null && Last == null)
        {
            System.out.println("LL is empty");
            return;
        }

        System.out.println("Elements of LL are : ");

        System.out.print("<=> ");
        
        do
        {
            System.out.print("| "+First.data+" |<=>");
            First = First.next;
        }while(First != Last.next);

        System.out.println();
    }
    
    public int Count()
    {
        return iCount;
    }

    public void DeleteFirst()
    {}
    public void DeleteLast()
    {}
    public void InsertAtPos(int No, int iPos)
    {}
    public void DeleteAtPos(int iPos)
    {}
}

class program417
{
    public static void main(String Arg[])
    {
        DoublyCL obj = new DoublyCL();
        int iRet = 0;

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);
        
        obj.Display();
        iRet = obj.Count();

        System.out.println("Number of elements are : "+iRet);

    }
}