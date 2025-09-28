#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int done = 0; // global variable

void handler(int signum) {
    printf("Hello World!\n");
    done = 1;  // set flag when signal is received
}

int main() {
    signal(SIGALRM, handler); // register handler
    alarm(5);                 // 5-second alarm

    while (!done);            // wait until handler sets done
    printf("Turing was right!\n");
    return 0;
}

