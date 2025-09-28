#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <time.h>

int count = 0;     // how many alarms happened
time_t start;      // when program started

// handler for alarm signal
void alarm_handler(int signum) {
    count++;  // increase alarm counter every second
}

// handler for Ctrl-C (SIGINT)
void int_handler(int signum) {
    time_t end = time(NULL);
    printf("\nProgram ran for %ld seconds.\n", end - start);
    printf("Total alarms received: %d\n", count);
    exit(0);
}

int main() {
    signal(SIGALRM, alarm_handler);  // handle alarms
    signal(SIGINT, int_handler);     // handle Ctrl-C

    start = time(NULL);  // mark start time

    while (1) {
        alarm(1);   // schedule alarm every second
        pause();    // wait until a signal comes in
    }

    return 0;
}


