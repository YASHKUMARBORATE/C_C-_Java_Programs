#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
    int fd = 0;

    char Filename[30];

    printf("enter the file name that you want:");
    scanf("%s",Filename);
    fd = creat(Filename, 0777);

    if (fd == -1)
    {
        printf("Unable to create file");
    }
    else
    {
        printf("file get created succesfully  with fd %d :", fd);
    }
    return 0;
}