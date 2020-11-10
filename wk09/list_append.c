#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *list_append(struct node *list1, struct node *list2);
void list_print(struct node *list);
struct node *create_list(int len, int values[len]);
struct node *create_node(int val);

int main (void) {
    // Create combinations of lists to test list_append
    struct node *list1;
    struct node *list2;
    struct node *new_list;

    // Test 1: two ordinary lists
    int values1[] = {1, 2, 3};
    int values2[] = {4, 5};
    list1 = create_list(3, values1);
    list2 = create_list(2, values2);

    new_list = list_append(list1, list2);
    list_print(new_list);

    // What would be some other good cases to test?
    list1 = NULL;
    new_list = list_append(list1, list2);
    list_print(new_list);

}

// Appends list2 to list1. Returns the head of the new list
struct node *list_append(struct node *list1, struct node *list2) {
    if (list1 == NULL) {
        return list2;
    }
    struct node *curr = list1;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    // after the loop, curr points to the last node in list 1

    curr->next = list2;

    return list1;
}

// Prints a linked list
void list_print(struct node *list) {
    struct node *curr = list;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

// Creates a linked list from an array of integers
// Returns a pointer to the head of the list
struct node *create_list(int len, int values[len]) {
    struct node *head = NULL;
    struct node *curr = NULL;
    int i = 0;
    while (i < len) {
        struct node *new = create_node(values[i]);
        if (curr == NULL) {
            head = new;
            curr = head;
        } else {
            curr->next = new;
            curr = curr->next;
        }
        i++;
    }
    return head;
}

// Creates a node with value 'val'
struct node *create_node(int val) {
    struct node *new = malloc(sizeof(struct node));

    new->data = val;
    new->next = NULL;

    return new;
}
