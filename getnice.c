#include <stdlib.h>
#include <stdio.h>
#include <sys/resource.h>

int main()
{
    int pri = getpriority(PRIO_PROCESS,getpid());
    /*
    if (pri > 0) {
        fprintf(stdout,"+");
    }
    */
    fprintf(stdout,"%d\n",pri);
    exit(0);
}

