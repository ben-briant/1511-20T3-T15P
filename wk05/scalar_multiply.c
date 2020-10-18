// Program to perfom scalar multiplication on a matrix
// Written by T15P

#include <stdio.h>

#define ROWS 4
#define COLS 6

// Fills the matrix with a sequence of values
void fill_matrix(int rows, int cols, int matrix[rows][cols]);

// Prints the values stored inside the matrix
void print_matrix(int rows, int cols, int matrix[rows][cols]);

// Function to multiply all elements in a matrix by a scalar
void scalar_multiply(int rows, int cols,
                     int matrix[rows][cols],
                     int scalar);


int main (void) {
    int matrix[ROWS][COLS] = {0};
    
    fill_matrix(ROWS, COLS, matrix);

    printf("Matrix before multiplication: \n");
    print_matrix(ROWS, COLS, matrix);

    // TODO: Scalar multiply!
    scalar_multiply(ROWS, COLS, matrix, 4);

    printf("Matrix after multiplication: \n");
    print_matrix(ROWS, COLS, matrix);
    
    return 0;
}


void scalar_multiply(int rows, int cols,
                     int matrix[rows][cols],
                     int scalar) {
    // TODO: Implement this function
    int row = 0;
    while (row < rows) {
        int col = 0;
        while (col < cols) {
            // Scalar multiply the values
            matrix[row][col] *= 4;
            col++;
        }   
        row++;
    }
}


void fill_matrix(int rows, int cols, int matrix[rows][cols]) {
    int i = 0;
    while (i < rows) {
        int j = 0;
        while (j < cols) {
            matrix[i][j] = (i + 1) * (j + 1);
            j++;
        }
        i++;
    }
}

void print_matrix(int rows, int cols, int matrix[rows][cols]) {
    int i = 0;
    while (i < rows) {
        int j = 0;
        while (j < cols) {
            printf("%3d ", matrix[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}
