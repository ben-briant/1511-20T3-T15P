// Program to read characters until EOF, and
// print the number of digits read + their sum
// Written by T15P on 27/10/20

#include <stdio.h>

int main (void) {
    int curr_char;
    int num_digits = 0;
    int sum = 0;
    
    curr_char = getchar();
    
    while (curr_char != EOF) {
    
        if ('0' <= curr_char && curr_char <= '9') {
            num_digits++;
            sum += curr_char - '0';
        }
        
        curr_char = getchar();
    }
    
    printf("Input contained %d digits which summed to %d\n",
           num_digits, sum);
    
    return 0;
}
