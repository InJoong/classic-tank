#include <unistd.h>
#include <poll.h>
#include <stdio.h>

int main()
{
    struct pollfd mypoll = { STDIN_FILENO, POLLIN|POLLPRI };
    char string[10];

    while(1){
        if( poll(&mypoll, 1, 100) )
        {
            scanf("%9s", string);
            printf("Read string - %s\n", string);
        }
        else
        {
            puts("Read nothing");
        }
    }   

    return 0;
}
