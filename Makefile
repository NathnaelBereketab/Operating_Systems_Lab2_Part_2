all: signal1 signal2 timer

signal1: signal1.c
	gcc signal1.c -o signal1

signal2: signal2.c
	gcc signal2.c -o signal2

timer: timer.c
	gcc timer.c -o timer

clean:
	rm -f signal1 signal2 timer

