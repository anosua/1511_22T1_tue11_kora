// Live demo of pointers
// Anosua Roy z5264396
// 2022-03-15

#include <stdio.h>

int main(void) {

    int number;
    int *new_pointer;
    
    number = 50;
    new_pointer = &number;
    
    printf("number = %d. new_pointer = %p. new_pointer pointing @ = %d\n", 
           number, new_pointer, *new_pointer);
    
    *new_pointer = 73;
    
    printf("After pointer change\n");
    printf("number = %d\n", number);
    
    
    return 0;
}
