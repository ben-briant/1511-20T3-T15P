// Program which recursively calculates the nth fibonacci number
// Written by T15P on 17/11/2020

#include <stdio.h>
#include <stdlib.h>

int fibbonacci(int n);

int main(int argc, char *argv[]) {
    int num = atoi(argv[1]);

    int result = fibbonacci(num);

    printf("%2d = %d\n", num, result);
}

int fibbonacci(int n) {
    if (n == 0) {
        // The "0th" fibbonacci number is 0
        return 0;
    }
    if (n == 1) {
        // The 1st fibbonacci number is 1
        return 1;
    }

    // All other values can be built starting with the base cases 0 and 1.
    return fibbonacci(n - 1) + fibbonacci(n - 2);
    // When you run this for larger values (> 30) you will
    // start to notice it becoming very slow. Have a think about why
    // it becomes so slow, and potential ways to speed it up!
}
