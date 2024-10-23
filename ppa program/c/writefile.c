#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
    char name[30];
    int fd = 0;
    int iret = 0;

    char data[] = "marvellous infosystems";

    printf("enter name of file that you want to open:\n");
    scanf("%s", name);
    fd = open(name, O_RDWR);

    iret = write (fd ,data,22);

    printf("%d bytes gets succesfully written into the file\n", iret);

    close(fd);
    return 0;
}