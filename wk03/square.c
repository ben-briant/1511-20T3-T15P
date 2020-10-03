// A program which uses nested while loops to
// print a 2-dimensional grid of asterisks

#include <stdio.h>

int main(void) {
    int number;
    int row, column;

    // Obtain input
    printf("Enter size: ");
    scanf("%d", &number);

    row = 0;
    while (row < number) {
        column = 0;
        while (column < number) {
            printf("*");
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
}
