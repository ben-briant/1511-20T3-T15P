// implements functions in list.h
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "list.h"

// ======= W10 Tut Problems ========
// returns a copy of the linked list
struct node *copy(struct node *head) {
    // The head of the new list
    struct node *new_head = NULL;

    // The last node added to the new list
    struct node *new_curr = new_head;

    // Temp pointer to loop through the original list,
    // without losing the head
    struct node *curr = head;

    while (curr != NULL) {
        if (new_head == NULL) {
            // Then we are copying the first node in the list,
            // so set new_head, rather than inserting after new_curr.
            new_head = create_node(curr->data);
            new_curr = new_head;
        } else {
            // We are inserting at the end of the list, after new_curr
            new_curr->next = create_node(curr->data);
            new_curr = new_curr->next;
        }

        curr = curr->next;
    }

    return new_head;
}

// returns 1 if the two lists are identical, otherwise returns 0
int identical(struct node *head1, struct node *head2) {
    struct node *curr1 = head1;
    struct node *curr2 = head2;

    // Loop through both lists simultaneously
    while (curr1 != NULL && curr2 != NULL) {
        if (curr1->data != curr2->data) {
            // If the data in both nodes are not equal,
            // then the lists are not identical
            return 0;
        }

        curr1 = curr1->next;
        curr2 = curr2->next;
    }

    // If the loop finished before reaching the end of either list,
    // then the lists are a different length
    if (curr1 != NULL || curr2 != NULL) {
        return 0;
    }

    // If we made it here, then the lists are identical
    return 1;
}

// returns 1 if list is in strictly increasing order, otherwise returns 0
int ordered(struct node *head) {
    // This is one of this week's lab exercises...
    // Not going to put the solution here sorry :P
    return 0;   // replace this
}

// given two lists in strictly increasing order,
// return a new linked list (in strictly increasing order) of the elements in both set1 and set2
struct node *set_intersection(struct node *set1, struct node *set2) {

    // The head of the linked list of intersections
    struct node *intersection = NULL;
    // The end of the linked list of intersections
    struct node *last_intersection = NULL;

    // For every node in the first list...
    struct node *curr1 = set1;
    while (curr1 != NULL) {
        // Check if it is contained in the second list
        int match_found = 0;
        struct node *curr2 = set2;
        while (curr2 != NULL) {
            if (curr1->data == curr2->data) {
                match_found = 1;
            }
            curr2 = curr2->next;
        }
        // If the current value appears in both lists, then add it to the intersection list
        if (match_found == 1) {
            struct node *new_node = create_node(curr1->data);
            if (intersection == NULL) {
                intersection = new_node;
                last_intersection = intersection;
            } else {
                last_intersection->next = new_node;
                last_intersection = last_intersection->next;
            }
        }

        curr1 = curr1->next;
    }
    return intersection;
}

// given two linked lists in strictly increasing order,
// return a new linked list (in strictly increasing order) of the elements in either set1 or set2
// no duplicates (only include them once)
struct node *set_union(struct node *set1, struct node *set2) {
    // This wasn't one of the tutorial problems - if you'd like me to
    // write a solution for this, shoot me an email :)
    return NULL;    // replace this
}

// =================================

// given an array of integer values for data items
// returns the head of a linked list with these values
// in the order as they appear in the array
// size gives the size of the array
struct node *create_list(int values[], int size) {
    int i = 0;

    if (size <= 0) {
        // empty linked list (or invalid size)
        return NULL;
    }

    struct node *head = NULL;   // head of the linked list
    struct node *tmp = NULL;    // temporary item we're working with
    struct node *curr = NULL;   // current node we're looking at in the linked list

    while (i < size) {
        tmp = create_node(values[i]);

        // link this node onto our list
        if (head == NULL) {
            // this is the first node in the list
            head = tmp;
            curr = head;
        } else {
            // this is not the first node in the list
            // add it to the end, i.e. after curr
            curr->next = tmp;

            // reset curr to point at the new last node
            curr = tmp;
        }
        i = i + 1;
    }

    return head;
}

// creates a struct node with the given data value
// returns a pointer to this node
struct node *create_node(int dat) {
    struct node *new = malloc(sizeof(struct node));
    assert(new != NULL);
    new->data = dat;
    new->next = NULL;

    return new;
}

// prints out the list given the head of a list
void print_list(struct node *head) {
    struct node *curr;
    curr = head;

    while (curr != NULL) {
        printf("[ %d ]-->", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");

}

// frees all the elements in a linked list
void free_list(struct node *head) {
    if (head == NULL) {
        return;
    }
    free_list(head->next);
    free(head);
}

// return the number of items in the linked list
int num_items(struct node *head) {
    struct node *curr = head;
    int count = 0;

    while (curr != NULL) {
        count = count + 1;
        curr = curr->next;
    }

    return count;
}
