// Program which prints out the value of argc/argv
// Written by Ben Briant (z5254701) on 26/10/20

#include <stdio.h>
    
int main (int argc, char *argv[]) {
    printf("argc = %d\n", argc);

    int i = 0;
    while (i < argc) {
        printf("    argv[%d] = %s\n", i, argv[i]);
        i++;
    }
}
