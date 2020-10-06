// Program to read values from standard input
// until user stops providing values
// Written by T15P - 6/10/2020

#include <stdio.h>

int main (void) {
    // Set up a loop that will keep reading
    // values until End Of Input.
    
    int num, num2;
    
    // Method 1
    /*
    int result = scanf("%d %d", &num, &num2);
    while (result == 2) {
        printf("%d %d\n", num * 2, num2 * 2);
        
        result = scanf("%d %d", &num, &num2);
    }
    */
    
    // Method 2
    while (scanf("%d %d", &num, &num2) == 2) {
        printf("%d %d\n", num * 2, num2 * 2);
    }
    
}
