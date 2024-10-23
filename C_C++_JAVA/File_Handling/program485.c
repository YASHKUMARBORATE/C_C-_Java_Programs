#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
int main()
{
    int fd = 0;
    char Filename[30];
    int iret = 0;
    char buffer[100] = {'\0'};

    printf("enter the file name that you want open:");
    scanf("%s", Filename);

    fd = open(Filename, O_RDWR);

    if (fd == -1)
    {
        printf("Unable to open file");

        return 0;
    }

while ((iret = read(fd,buffer,sizeof(buffer))) != 0)
{
    printf("%s",buffer);
  printf("%d\n",iret);
}

    close(fd);

    return 0;
}