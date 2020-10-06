// Simple program introducing arrays
// Written by T15P - 6/10/2020

#include <stdio.h>

#define SIZE 5

int main (void) {
    // Create an array of 5 elements, and give it the values 4, 2, 0, 0, 0
    int nums[SIZE] = {4, 2};

    // Change the third value to 7
    nums[2] = 7;

    // Print the values in the array
    int i = 0;
    while (i < SIZE) {
        printf("%d\n", nums[i]);
        
        i++;
    }

    return 0;
}
