// Code to calculate the area of a rectangle
// Written by T15P
// on 22/9/2020

#include <stdio.h>

int main (void) {
    int length;
    int width;
        
    printf("Please enter rectangle length: ");
    scanf("%d", &length);
    
    printf("Please enter rectangle width: ");
    scanf("%d", &width);
    
    if (length <= 0 || width <= 0) {
        printf("Invalid rectangle!\n");
    } else {
        int area = length * width;
        printf("Area = %d\n", area);
    }
    
    return 0;
}
