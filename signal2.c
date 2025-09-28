#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int done = 0;

void handler(int signum) {
    printf("Hello World!\n");
    done = 1;
}

int main() {
    signal(SIGALRM, handler);

    while (1) {
        alarm(5);        // set alarm every 5 seconds
        while (!done);   // wait until signal handler runs
        printf("Turing was right!\n");
        done = 0;        // reset flag for next round
    }

    return 0;
}

