// Header comment should include a brief description of
// the program
// NAME (z5254701) - 6/10/20

#include <stdio.h>

#define START_YEAR  7
#define END_YEAR    12

int main(void) {

    printf("What year are you in? ");
    
    int curr_year;
    scanf("%d", &curr_year);
    
    // If the user is in highschool:
    if (curr_year >= START_YEAR && curr_year <= END_YEAR) {
        printf("You are in high school\n");
    } else {
        printf("You are not in high school\n");
    }
    
    return 0;
}
