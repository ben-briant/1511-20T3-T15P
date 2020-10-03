// Program using while loops
// Written by T15P on 29/09/2020

#include <stdio.h>

int main (void) {
    int start;
    int finish;
    
    printf("Enter start: ");
    scanf("%d", &start);
    
    printf("Enter finish: ");
    scanf("%d", &finish);
    
    int num = start;
    
    while (num <= finish) {
        if (num % 7 == 0) {
            printf("%d\n", num);
        }
        
        num++;
    }
    
    return 0;
}
