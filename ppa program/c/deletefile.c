#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
    char name[30];
    int fd = 0;

    printf("enter name of file that you want to delete:\n");
    scanf("%s", name);

   unlink(name);
    
    return 0;
}