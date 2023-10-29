#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
     int integer;
    printf("Enter an integer 1 2 or 3: ");
    scanf("%d", &integer);  
    printf("Number = %d",integer);
    int p,status;
    p = fork();
    
    if(integer == 1)
    {   
        printf("\nPID for child : %d\n",getpid());
        printf("PPID for child: %d\n",getppid());
    }
    else if(integer == 2)
    {
        printf("\nPID for child : %d\n",getpid());
        printf("PPID for child: %d\n",getppid());
        exit(7);
    }
    else if (integer == 3) {
            int i;
            for (i = 0; i < 3; i++) {
                printf("\nPID for child : %d\n",getpid());
                printf("PPID for child: %d\n",getppid());
                sleep(1);
            }
            int num = 100 / 0; 
        } 
        else {
        int k = wait(&status);
        
        printf("\n pid of parent process: %d\n", getpid());
        
        if (WIFEXITED(status)) {
            printf("Child process terminated with status: %d\n",
                WEXITSTATUS(status)); 
        }
        
        if (WIFSIGNALED(status)) {
            printf("Child process terminated with status: %d\n",
             WTERMSIG(status)); 
        }
    }
    return 0;
}
