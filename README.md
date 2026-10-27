# var-bit-print

This C program (`var-bit-print`) calculates and prints the bit width of seven fundamental C data types, followed by their average size in bits.

### 32-bit (-m32) vs. 64-bit (-m64) Linux Output

This program produces different results depending on whether you compile it as a 32-bit or 64-bit binary on Linux. Under the standard Linux 64-bit data model (`LP64`), `long` is the only type in this list that changes size (which is also why traditional `time_t`, defined as a `long`, changes from 32-bit to 64-bit).

### How to run

This command compiles both `32-bit` and `64-bit` versions, and runs them:
```bash
make run
```
