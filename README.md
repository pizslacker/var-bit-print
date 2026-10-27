# var-bit-print

This C program (`var-bit-print`) calculates and prints the bit width of seven fundamental C data types, followed by their average size in bits.

Run with: `make run`, example output:
```bash
gcc -Wall -Wextra -m64 var-bit-print.c -o var-bit-print-64
gcc -Wall -Wextra -m32 var-bit-print.c -o var-bit-print-32
=== Running 64-bit version ===
./var-bit-print-64
var-bit-print v1.3
=========================
char is       8 bits
short is     16 bits
int is       32 bits
float is     32 bits
double is    64 bits
long is      64 bits
long long is 64 bits
time_t is    64 bits
pointer * is 64 bits
-------------------------

Average:     45.33 bits

=== Running 32-bit version ===
./var-bit-print-32
var-bit-print v1.3
=========================
char is       8 bits
short is     16 bits
int is       32 bits
float is     32 bits
double is    64 bits
long is      32 bits
long long is 64 bits
time_t is    32 bits
pointer * is 32 bits
-------------------------

Average:     34.67 bits
```

### 32-bit (-m32) vs. 64-bit (-m64) Linux Output

This program produces different results depending on whether you compile it as a 32-bit or 64-bit binary on Linux. Under the standard Linux 64-bit data model (`LP64`), `long` is the only type in this list that changes size (which is also why traditional `time_t`, defined as a `long`, changes from 32-bit to 64-bit).

### How to run

This command compiles both `32-bit` and `64-bit` versions, and runs them:
```bash
make run
```
