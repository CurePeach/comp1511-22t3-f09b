// Exploring structs and enums

#include <stdio.h>

struct date {
    int month; // wouldn't it be better as an enum?
    int day;
    int year;
};

enum opal_card_type {
    ADULT,
    STUDENT,
    CONCESSION
};

// Similarly
// #define ADULT 0
// #define STUDENT 1
// #define CONCESSION 2

struct person {
    int                 shoe_size;
    double              height;
    char                first_name_initial;
    enum opal_card_type opal;
    // struct date         birthday;
};

int main(void) {
    // Create a person named Clarissa
    struct person clarissa;
    clarissa.shoe_size = 7; // type: int
    clarissa.height = 156;  // type: double
    clarissa.first_name_initial = 'c'; // type: char
    clarissa.opal = CONCESSION;

    // How would I print Clarissa's shoe size?
    printf("Clarissa's shoe size: %d\n", clarissa.shoe_size);

    // How would I print Clarissa's first name initial?
    // Characters = %c

    // How would I print Clarissa's height?
    // Doubles = %lf

    // Create a student Opal card
    enum opal_card_type opal = STUDENT;

    // How can we add Opal card types to our original struct person?
    // What do we have to update for Clarissa?

    return 0;
}