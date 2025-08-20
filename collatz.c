#include <stdio.h>

// Optimizations:
// 1. Only check odd numbers (even numbers collapse to 1 or a lower odd number).
// 2. Use C bitwise operators for calcs.
// 3. Combine 3x+1 with /2 operation because they always follow.
// 4. Abort loop if we encounter a lower number than the starting number. We've already seen this number.
// 5. Given optimization (4) above we no longer need to check for 1. Must start loop from 3 though.
// 6. Compile with following command> gcc -O3 -march=native -o collatz collatz.c
void collatz(long n) {
    volatile long x = n;
    while (n >= x) {
        x = (x & 1) ? x + ((x + 1) >> 1) : x >> 1;
    }
}

int main(void) {
    long i = 3;
    long step = 100000000000; // 100,000,000,000 = 100 billion
    long stop = step;
    for (;;) {
        for (; i < stop; i += 2) {
            collatz(i);
        }
        printf("%lu\n", stop);
        stop += step;
    }
    return 0;
}
