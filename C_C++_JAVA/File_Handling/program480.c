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

    fd = open(Filename, O_RDWR | O_APPEND);

    if (fd == -1)
    {
        printf("Unable to open file");

        return 0;
    }

    printf("enter the data that want to write:");
    scanf(" %[^'\n']s", arr);

    iret = write(fd, arr, strlen(arr));

    printf(" number of byete %d", iret);

    close(fd);

    return 0;
}