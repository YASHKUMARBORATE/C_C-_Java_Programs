#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
int main()
{
    int fd = 0;
    char Filename[30];
    char arr[100];
    int iret = 0;

    printf("enter the file name that you want open:");
    scanf("%s", Filename);

    fd = open(Filename, O_RDWR);

    if (fd == -1)
    {
        printf("Unable to open file");

        return 0;
    }
 iret = read(fd,arr,10);

 printf("number of byte succfully read from the file:%d\n",iret);
 printf(" data from file:  %s\n",arr);

    close(fd);

    return 0;
}