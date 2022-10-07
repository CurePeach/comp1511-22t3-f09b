// Exploration of arrays

#include <stdio.h>

#define MAX_ARRAY_SIZE 1024

struct date {
    int day;
    int month;
    int year;
};

// Create three procedures:
// odd_only - makes sure all the values in an integer array are odd and print
// the array
void odd_only(int array[MAX_ARRAY_SIZE], int length);
// copy_array - copy elements from a double array into another and print the
// copied array
// largest_character - print out the largest character in a character array

void print_array(int array[MAX_ARRAY_SIZE], int length);

int main(void) {
    // Create an integer array
    int nums[3];
    int array[3] = {1, 2, 3};
    int zeroes[3] = {0};
    int ones[3];
    // ones[0] = 1;
    // ones[1] = 1;
    // ones[2] = 1;
    int i = 0;
    while (i < 3) {
        ones[i] = 1;
        i++;
    }

    // Create a double array
    double      doubs[4];
    struct date class_birthdays[24];

    // Create a character array

    // Print an array
    print_array(array, 3);

    // odd_only
    odd_only(array, 3);

    return 0;
}

void print_array(int array[MAX_ARRAY_SIZE], int length) {
    int i = 0;
    while (i < length) {
        printf("array[%d] = %d\n", i, array[i]);
        i++;
    }
}

// Makes sure that all the values in the array are odd and prints
// Takes in the array to change and the array's length
// Returns nothing
void odd_only(int array[MAX_ARRAY_SIZE], int length) {
    // [0, length)
    int i = 0;
    while (i < length) {
        if (array[i] % 2 == 0) {
            array[i] += 1;
        }

        i++;
    }

    print_array(array, length);
}
