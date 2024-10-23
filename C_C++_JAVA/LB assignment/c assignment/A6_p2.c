#include <stdio.h>
void number(int ino)
{
    switch (ino)
    {
    case 1:
    {
        printf("one");
    }
    break;
    case 2:
    {
        printf("two");
    }
    break;
    case 3:
    {
        printf("three");
    }
    break;
    case 4:
    {
        printf("four");
    }
    break;
    case 5:
    {
        printf("five");
    }
    break;
    case 6:
    {
        printf("six");
    }
    break;
    case 7:
    {
        printf("seven");
    }
    break;
    case 8:
    {
        printf("eigth");
    }
    break;
    case 9:
    {
        printf("nine");
    }
    break;
    case 10:
    {
        printf("ten");
    }
    break;

    default :
        {
            printf("invalid");
            break;
        }
    }
}
    int main()
    {
        int ivalue = 0;

        printf("enter number:");
        scanf("%d", &ivalue);

        number(ivalue);

        return 0;
    }