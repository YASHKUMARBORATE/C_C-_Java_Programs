#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
    int fd = 0;
    fd = creat("Marvellous.txt", 0777);

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