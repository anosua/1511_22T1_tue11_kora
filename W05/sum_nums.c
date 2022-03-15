// Live demo of pointers and functions
// Anosua Roy z5264396
// 2022-03-15

#include <stdio.h>

void find_sum_prod(int *sum, int *prod, int a, int b);

int main(void) {
    int a = 42;
    int b = 100;
    int sum = 0;
    int prod = 0;
    
    // TODO: call the function here
    find_sum_prod(&sum, &prod, a, b);
    
    printf("sum: %d\n", sum);
    printf("prod: %d\n", prod);
    
    return 0;
}

void find_sum_prod(int *sum, int *prod, int a, int b) {
    *sum = a + b;
    *prod = a * b;
}
