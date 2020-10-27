// Program to echo each line input, twice.
// Written by T15P on 27/10/20

#include <stdio.h>

int main (void) {
    char line[4096];

    // Keep reading lines from stdin until EOF is reached
    // (the user presses CTRL-D)
    while (fgets(line, 4096, stdin) != NULL) {
        // Replace newline characters with a null terminator
        // This ensures that, if fgets() read a newline,
        // it is removed from the string
        int i = 0;
        while (line[i] != '\0') {
            if (line[i] == '\n') {
                line[i] = '\0';
            }
            i++;
        }
        
        // Print the line that was read twice.
        printf("%s\n", line);
        printf("%s\n", line);
    }
    
    

    return 0;
}
