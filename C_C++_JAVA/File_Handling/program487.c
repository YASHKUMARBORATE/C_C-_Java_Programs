#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
int main()
{
    int fdread = 0, fdwrite = 0;
    char Filename[30];
    int iret = 0;
    char buffer[1024] = {'\0'};

    printf("enter the execting file name that you want open:");
    scanf("%s", Filename);

    fdread = open(Filename, O_RDWR);

    if (fdread == -1)
    {
        printf("Unable to open file");
        return 0;
    }

    printf("enetr the name of file that want to create:\n");
    scanf("%s", Filename);

    fdwrite = creat(Filename, 0777);
    if (fdwrite == -1)
    {
        printf("Unable to open file");
       return 0;
    }
    while ((iret = read(fdread, buffer, sizeof(buffer))) != 0)
    {
      write(fdwrite,buffer,iret);
        memset(buffer, 0, sizeof(buffer));
    }

    close(fdread);
    close(fdwrite);

    return 0;
}