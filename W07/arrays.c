// header comment example
// name
// date

#include <stdio.h>

#define SIZE 100
#define NUM_STU 3
#define NUM_SUBJ 4

int main(void) {
    
    //int new_array[SIZE];
    
    int marks[NUM_STU][NUM_SUBJ] = {0};
    
    int row = 0;
    while (row < NUM_STU) {
        
        int col = 0;
        while (col < NUM_SUBJ) {
        
            printf("%d ", marks[row][col]);
        
            col++;
        }
        
        printf("\n");
        row++; 
    }
    
    return 0;
}
