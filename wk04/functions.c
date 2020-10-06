// Simple program illustrating the creation/use of functions
// Written by T15P - 6/10/2020

#include <stdio.h>

// Function prototypes
int is_even(int num);
void print_hello(void);

int main (void) {
    // Write a function "is_even" which takes in one integer,
    // and returns 1 if it is even, and 0 if not.
    
    int result;
    int a = 2;
    result = is_even(a);
    // a == 
    printf("%d\n", is_even(3));

    print_hello();

    return 0;
}

// Function implementation

// Checks if a number is even
// Returns 1 if even, 0 if odd
int is_even(int num) {

    num *= 3;

    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

// Prints "Hello!"
// Since this is a void function, it doesn't take
// any parameters or return any values.
void print_hello(void) {
    printf("Hello!\n");
}
