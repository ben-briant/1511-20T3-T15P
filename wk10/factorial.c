#include <stdio.h>

int num_times = 0;

int factorial(int n) {
    printf("Call number %d: n = %d\n", num_times++, n);
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main (void) {
    int result = factorial(4);
}
