// Program using while loops
// Written by T15P on 29/09/2020

#include <stdio.h>

int main (void) {
    int finish;

    printf("Enter finish: ");

    scanf("%d", &finish);

    int num = 1;
    while (num <= finish) {
        printf("%d\n", num);
        
        num++;
    }
    
    return 0;
}
