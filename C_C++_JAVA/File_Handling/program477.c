#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
    int fd = 0;

    char Filename[30];

    printf("enter the file name that you want open:");
    scanf("%s", Filename);

    fd = open(Filename, O_RDWR);

    if (fd == -1)
    {
        printf("Unable to open file");

        return 0;
    }

    write(fd, "Hello World", 11);

    return 0;
}