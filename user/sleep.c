// sleep for a number of ticks

#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[]) 
{
    if (argc < 2) {
        fprintf(2, "usage: sleep <tick count>\n");
        exit(1);
    }
    int ticks = atoi(argv[1]);
    sleep(ticks);
    exit(0);
}