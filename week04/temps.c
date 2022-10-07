// Scanning temperatures in a loop

#include <stdio.h>

#define MAX_ARRAY_SIZE 1024

void print_array(double array[MAX_ARRAY_SIZE], int length);

int main(void) {
    // Initialise an empty array
    double temps[MAX_ARRAY_SIZE];

    // While loop using scanf
    // Asking for the length
    // int length;
    // printf("Length: ");
    // scanf("%d", &length);

    // printf("Enter values:\n");
    // int i = 0;
    // while (i < length) {
    //     double temp;
    //     scanf("%lf", &temp);
    //     temps[i] = temp;
    //     i++;
    // }

    // print_array(temps, length);

    // Use scanf's return value
    // int i = 0;
    // double temp;
    // int result = scanf("%lf", &temp);
    // while (result == 1) {
    //     temps[i] = temp;
    //     i++;

    //     result = scanf("%lf", &temp);
    // }

    int i = 0;
    double temp;
    while (scanf("%lf", &temp) == 1) {
        temps[i] = temp;
        i++;
    }

    print_array(temps, i);

    // Find the maximum temperature

    // Print the maximum temperature

    return 0;
}

void print_array(double array[MAX_ARRAY_SIZE], int length) {
    int i = 0;
    while (i < length) {
        printf("%lf ", array[i]);
        i++;
    }
    printf("\n");
}