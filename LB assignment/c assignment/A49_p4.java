import java.util.*;

class Matrix {
    public int iRow, iCol;
    public int Arr[][];

    public Matrix(int A, int B) {
        this.iRow = A;
        this.iCol = B;

        Arr = new int[iRow][iCol];
    }

    public void Accept()
     {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the data : ");

        int i = 0, j = 0;

        for (i = 0; i < iRow; i++) {
            for (j = 0; j < iCol; j++) {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display() {
        int i = 0, j = 0;

        System.out.println("Elements from the matrix : ");

        for (i = 0; i < iRow; i++) {
            for (j = 0; j < iCol; j++) {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public boolean chkIdentity() {
        int i = 0, j = 0;

        for (i = 0; i < iRow; i++) {
            for (j = 0; j < iCol; j++) {
                if (Arr[i][j] == 1)
                 {
                    return true;
                }
            }
            System.out.println();
        }
    }
}

class A49_p4 {
    public static void main(String Arg[]) {

        boolean bret = false;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int No1 = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int No2 = sobj.nextInt();

        Matrix mobj = new Matrix(No1, No2);

        mobj.Accept();
        mobj.Display();
       bret = mobj.chkIdentity();

        if (bret == true) {
            System.out.println("this is idintiy matix");
        } else {
            System.out.println("this is not idintiy matix");

        }
    }
}