// A program which uses nested while loops to
// print a 2-dimensional grid of asterisks

#include <stdio.h>

int main(void) {
    int size;
    int row, column;

    // Obtain input
    printf("Enter size: ");
    scanf("%d", &size);

    row = 0;
    while (row < size) {
        column = 0;
        while (column < size) {
            if (row + column >= size - 1) {
                printf("*");
            } else {
                printf("-");
            }
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
}
