#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
    char name[30];
    int fd = 0;

    printf("enter name of file that you want to open:\n");
    scanf("%s", name);

    fd = open(name,O_RDWR);
    if (fd == -1)
    {
        printf("unable to open file\n");
    }
    else
    {
        printf("file gets opened with fd %d\n", fd);
    }
    close(fd);
    return 0;
}