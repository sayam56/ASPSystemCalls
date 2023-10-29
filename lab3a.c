#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int p,p1;
    p = fork();
    p1 = fork();
    
    if(p==-1 && p1 == -1)
    {
        printf("There is an error while calling fork()");
    }
    if(p==0 && p1 == 0)
    {   
        printf("\nPID for grand child : %d\n",getpid());
        printf("PPID for grand child: %d\n",getppid());
    }
    if(p>0 && p1 == 0)
    {
        printf("\nPID for first child : %d\n",getpid());
        printf("PPID for first child: %d\n",getppid());
    }
     if(p == 0 && p1 > 0)
    {
        printf("\nPID for second child : %d\n",getpid());
        printf("PPID for second child: %d\n",getppid());
    }
    else
    {
        printf("\nPID for Parent : %d\n",getpid());
        printf("PPID for Parent: %d\n",getppid());
    }
    return 0;
}
