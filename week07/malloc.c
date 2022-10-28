#include <stdio.h>
#include <stdlib.h>

int *create_num(int num);

int main(void) {
    int *num = create_num(21);
    printf("num = %d\n", *num);

    return 0;
}

int *create_num(int num) {
    int *num_ptr = malloc(sizeof(int));
    *num_ptr = num;

    return num_ptr;
}