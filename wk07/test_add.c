// A program that tests adding three numbers
// Written very badly by Tom Kunc 2020-10-25 (z5205060)
// t.kunc@unsw.edu.au (please don't email me about this bad code)

#include <stdio.h>

#define MEETS_SPEC 1
#define DOES_NOT_MEET_SPEC 0

int add(int a, int b, int c);

int test_add(void) {
    // if adding 1, 1 and 1 together does not return 3,
    // then there has been an error, so return DOES_NOT_MEET_SPEC.
    if (add(1, 1, 1) != 3) {
        return DOES_NOT_MEET_SPEC;
    }
    if (add(-1, -1, -1) != -3) {
        return DOES_NOT_MEET_SPEC;
    }
    if (add(57, 22, 31) != 110) {
        return DOES_NOT_MEET_SPEC;
    }
    
    // If we have made it through all our tests without returning
    // DOES_NOT_MEET_SPEC, then our tests have passed, so we can
    // return MEETS_SPEC
    return MEETS_SPEC;
}


// This function returns the sum of a, b and c.
int add(int a, int b, int c) {
    // Broken version:
    // return a * b * c;
    // Working version:
    return a + b + c;
}

int main(void) {
    printf("Test whether `add` does the right thing: ");
    if (test_add() == MEETS_SPEC) {
        printf("MEETS SPEC\n");
    } else {
        printf("DOES NOT MEET SPEC\n");
    }
    return 0;
}
