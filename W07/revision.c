// header comment example
// name
// date

#include <stdio.h>

int main(void) {
    
    int number;
    int *new_pointer;
    
    number = 50;
    new_pointer = &number;
    
    printf("value of number: %d\n", number);
    printf("address of number: %p and value at this address %d\n", new_pointer, *new_pointer);
    
    return 0;
}
