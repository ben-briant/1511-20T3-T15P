// A short program introducing structs!
// Written by Ben Briant (z5254701)
// On 3/11/2020

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME_SIZE 20

struct student {
    int zid;
    double mark;
    char name[MAX_NAME_SIZE];
    struct student *next;
};

struct student *new_student(int zid, double mark, char *name);
void print_students(struct student *head);

int main (void) {
    // Create a struct student named "Frankie",
    // zID of 5151515, and assignment 1 mark of 60.2
    struct student frankie;
    frankie.zid = 5151515;
    frankie.mark = 60.2;
    strcpy(frankie.name, "Frankie");
    
    // Create a struct student * using a function.
    // Name: "Chicken", zID: 5252525, assignment 1 mark: 71
    struct student *chicken = new_student(5252525, 70.0, "Chicken");
    struct student *fish = new_student(5353535, 82.0, "Fish");
    // make chicken point to fish - the list now looks like:
    // chicken -> fish -> NULL
    chicken->next = fish;
    struct student *dog = new_student(5454545, 93.7, "Dog");
    // make fish point to dog - the list now looks like:
    // chicken -> fish -> dog -> NULL
    fish->next = dog;
    
    print_students(chicken);

    // Which of these structs are leaking memory? How do we fix it?
    // chicken, fish, and dog are all leaking memory - since we have called
    // malloc(), but never called free().
    free(chicken);
    free(fish);
    free(dog);
}

struct student *new_student(int zid, double mark, char *name) {
    // Malloc enough memory to hold a "struct student"
    struct student *new = malloc(sizeof(struct student));
    
    new->zid = zid;
    new->mark = mark;
    strcpy(new->name, name);
    new->next = NULL;
    
    // Return a pointer to the new student
    return new;
}

// Prints information about a linked list of students
void print_students(struct student *head) {
    // Generally good practice to use a temporary pointer
    // This avoid moving "head", which is useful for functions
    // where we need to return the head of the list.
    struct student *curr = head;
    while (curr != NULL) {
        printf("Student %s\n", curr->name);
        // Make the current node, the node that the current node points to
        // i.e, the next node in the list
        curr = curr->next;
    }
}






