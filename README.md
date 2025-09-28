# Operating Systems Lab 2 - Signals

This repository contains three C programs demonstrating **UNIX signal handling** using `signal()` and `alarm()`.  
It also includes a `Makefile` to compile all programs.

---

## Files
- `signal1.c` → Prints **Hello World!** after 5 seconds, then **Turing was right!** before exiting.  
- `signal2.c` → Repeats **Hello World!** (from handler) and **Turing was right!** (from main) every 5 seconds, indefinitely.  
- `timer.c` → Counts time using `SIGALRM` every second. When terminated with **Ctrl-C (SIGINT)**, it prints the total runtime and number of alarms received.  
- `Makefile` → Builds all three executables with `make`.

---

## ⚙️ How to Compile
```bash
make
