
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
    char name[30];
    int fd = 0;
    int iret = 0;

    char data[30] = {'\0'};

    printf("enter name of file that you want to open:\n");
    scanf("%s", name);
    fd = open(name, O_RDWR);
    lseek(fd, 10, SEEK_SET);
    iret = read(fd, data, 10);

    printf("%d bytes gets succesfully read form the file\n", iret);
    printf("%s\n", data);

    close(fd);
    return 0;
}