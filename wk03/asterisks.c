// Program using while loops
// Written by T15P on 29/09/2020

#include <stdio.h>

int main (void) {
    int num_asterisks;

    printf("Please enter an integer: ");

    scanf("%d", &num_asterisks);

    int num = 1;
    while (num <= num_asterisks) {
        printf("*\n", num);
        
        num++;
    }
    
    return 0;
}
