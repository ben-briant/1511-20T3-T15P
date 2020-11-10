#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *delete_last(struct node *list);
void list_print(struct node *list);
struct node *create_list(int len, int values[len]);
struct node *create_node(int val);

int main (void) {

    // Test 1: two ordinary lists
    int values1[] = {1, 2, 3};
    struct node *list1 = create_list(3, values1);
    int values2[] = {5};
    struct node *list2 = create_list(1, values2);

    struct node *new_list = delete_last(list1);
    list_print(new_list);

    new_list = delete_last(NULL);
    list_print(new_list);

    new_list = delete_last(list2);
    list_print(new_list);
    // What would be some other good cases to test?
}

// Deletes the last node in the given list.
// Returns a pointer to the head of the new list.
struct node *delete_last(struct node *list) {
    if (list == NULL) {
        return list;
    }
    struct node *prev = NULL;
    struct node *curr = list;
    while (curr->next != NULL) {
        prev = curr;
        curr = curr->next;
    }
    free(curr);
    if (prev == NULL) {
        return NULL;
    }
    prev->next = NULL;

    return list;
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
