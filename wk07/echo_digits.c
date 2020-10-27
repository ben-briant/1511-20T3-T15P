// Program to echo only the digits in command line arguments
// Written by T15P on 27/10/20

#include <stdio.h>

int is_digit(char ch) {
    return '0' <= ch && ch <= '9';
}

// instead of "int main (void)", we have "int main (int argc, char *argv[])"
// This allows us to take input from the command line, rather than the user
// typing it while the program is running.
int main (int argc, char *argv[]) {
    // Note that i starts at 1 - this is because "./program_name" is also a
    // command line argument (it is argv[0]), but we want to skip it.
    int i = 1;
    while (i < argc) {
        // Now, we loop through argv[i] to find the digits, and print them out.
        int j = 0;
        while (argv[i][j] != '\0') {
            // if the current character is a digit, then print it
            if (is_digit(argv[i][j])) {
                putchar(argv[i][j]);
            }
            j++;
        }
        // each argument is separated by a space
        putchar(' ');
        i++;
    }
    putchar('\n');

    return 0;
}
