
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main(void) {
    char *char_ptr = malloc(sizeof(char));
    int *int_ptr = malloc(sizeof(int));
    int *array = malloc(sizeof(int) * 5);

    // How do I malloc a struct node?
    struct node *node_ptr = malloc(sizeof(struct node));

    // How do I initialise the struct node?
    node_ptr->data = 3;
    node_ptr->next = NULL;

    return 0;
}