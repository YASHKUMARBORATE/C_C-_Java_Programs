#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int fd = 0;
    char FileName[30];
    char Arr[100] = {'\0'};
    int iRet = 0;
int size = 0;
    printf("Enter the file name that you want to open : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return 0;
    }
printf("Enter size that you want to read");
scanf("%d",size);
    iRet = read(fd,Arr,size);

    printf("Data from file : %s\n",Arr);

    iRet = read(fd,Arr,size);

    printf("Data from file : %s\n",Arr);


    close(fd);

    return 0;
}