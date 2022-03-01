// Live demo of 1D loops
// Anosua Roy z5264396
// 2022-3-1

#include <stdio.h>

#define DIVISOR 7

int main(void) {
    
    // step 1. print start prompt
    printf("Enter start: ");
    // step 2. scan in the start
    int start;
    scanf("%d", &start);
    // step 3. print end prompt
    printf("Enter finish number: ");
    // step 4. scan in the end
    int finish;
    scanf("%d", &finish);
    
    int count = start;
    while (count <= finish) {
        // print out if divisible
        if (count % DIVISOR == 0) {
            printf("%d\n", count);
        }
        
        count++;
    }
    
    return 0;
}
