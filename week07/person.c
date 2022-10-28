#include <stdio.h>
#include <string.h>

struct person {
    char character_name[100];
    int num;
};

void swap_numbers(struct person *member1, struct person *member2);
void print_person(struct person member);

int main(void) {
    struct person clarissa;
    strcpy(clarissa.character_name, "Clarissa");
    clarissa.num = 21;
    print_person(clarissa);
    struct person jon;
    strcpy(jon.character_name, "Jon");
    jon.num = 16;
    print_person(jon);

    struct person *jon_ptr = &jon;
    swap_numbers(&clarissa, jon_ptr);
    print_person(clarissa);
    print_person(jon);

    return 0;
}

// Swaps the numbers of each struct
void swap_numbers(struct person *member1, struct person *member2) {
    int temp_num = member1->num;

    (*member1).num = member2->num;
    member2->num = temp_num;
}

void print_person(struct person member) {
    printf("%s: %d\n", member.character_name, member.num);
}
