#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
    char name[30];
    int fd = 0;

    printf("enter name of file that you want to create:\n");
    scanf("%s", name);

    fd = creat(name, 0777);
    if (fd == -1)
    {
        printf("unable to create file\n");
    }
    else
    {
        printf("file gets created with fd %d\n", fd);
    }
    return 0;
}