// Program to do various linked list exercises
// Written by <your-name> (zID) on <date>

#include <stdio.h>
#include <stdlib.h>

#include "list.h"

struct node *create_node(int data);
struct node *find_last_node(struct node *head);

int main(void) {

    return 0;
}

/** PRESCRIBED FUNCTIONS **/

struct node *add_last(struct node *head, int data) {
    struct node *new = create_node(data);

    if (head == NULL) {
        return new;
    }

    struct node *end_of_list = find_last_node(head);
    end_of_list->next = new;

    return head;
}

struct node *create_node(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    return new;
}

struct node *find_last_node(struct node *head) {
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    return curr;
}

void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

struct node *copy(struct node *list) {
    struct node *copied_list = NULL;
    struct node *curr = list;
    while (curr != NULL) {
        add_last(copied_list, curr->data);
        
        curr = curr->next;
    }

    return copied_list;
}

struct node *list_append(struct node *first_list, struct node *second_list) {
    struct node *first_copy = copy(first_list);
    struct node *second_copy = copy(second_list);

    if (first_copy == NULL) {
        return second_copy;
    }

    struct node *end_of_first = find_last_node(first_copy);
    end_of_first->next = second_copy;

    return first_copy;
}

int identical(struct node *first_list, struct node *second_list) {
    struct node *first_curr = first_list;
    struct node *second_curr = second_list;
    while (first_curr != NULL && second_curr != NULL) {
        if (first_curr->data != second_curr->data) {
            return 0;
        }

        first_curr = first_curr->next;
        second_curr = second_curr->next;
    }

    if (first_curr != NULL || second_curr != NULL) {
        return 0;
    }

    return 1;
}

// Only works if given two sets
struct node *set_intersection(
    struct node *first_list,
    struct node *second_list
) {
    struct node *intersect = NULL;

    struct node *first_curr = first_list;
    while (first_curr != NULL) {
        struct node *second_curr = second_list;
        while (second_curr != NULL) {
            if (first_curr->data == second_curr->data) {
                add_last(intersect, first_curr->data);
                second_curr = NULL;
            } else {
                second_curr = second_curr->next;
            }
        }

        first_curr = first_curr->next;
    }

    return intersect;
}