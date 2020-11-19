// Author: T15P
// Matching brackets with a stack!

#include <stdio.h>
#include <string.h>

#include "stack.h"

int opening_bracket(int bracket);
int closing_bracket(int bracket);
int brackets_match(int opening, int closing);

int main(int argc, char *argv[]) {

    Stack opening_brackets = create_stack();

    char *brackets = argv[1];
    int i = 0;
    int valid = 1;
    while (brackets[i] != '\0') {
        char curr_bracket = brackets[i];
        if (opening_bracket(curr_bracket)) {
            stack_push(opening_brackets, curr_bracket);
        } else if (closing_bracket(curr_bracket)) {
            if (stack_size(opening_brackets) == 0) {
                valid = 0;
            } else {
                char opening_bracket = stack_pop(opening_brackets);
                if (!brackets_match(opening_bracket, curr_bracket)) {
                    valid = 0;
                }
            }
        }

        i++;
    }

    if (stack_size(opening_brackets) != 0) {
        valid = 0;
    }

    if (valid == 0) {
        printf("Not valid\n");
    } else {
        printf("Valid\n");
    }
    
    return 0;
}

int opening_bracket(int bracket) {
    if (bracket == '(' || bracket == '{' || bracket == '[') {
        return 1;
    }
    return 0;
}

int closing_bracket(int bracket) {
    if (bracket == ')' || bracket == '}' || bracket == ']') {
        return 1;
    }
    return 0;
}

int brackets_match(int opening, int closing) {
    if (opening == '(' && closing == ')') {
        return 1;
    }
    if (opening == '{' && closing == '}') {
        return 1;
    }
    if (opening == '[' && closing == ']') {
        return 1;
    }
    return 0;
}
