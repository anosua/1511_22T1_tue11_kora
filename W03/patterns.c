// Live demo of 2D loops and patterns
// Anosua Roy z5264396
// 2022-3-1

#include <stdio.h>

int main(void) {
    
    printf("Enter size: ");
    int size;
    scanf("%d", &size);
    
    int row = 0;
    while (row < size) {
        
        int col = 0;
        while (col < size) {
            
            if (row + col == size - 1) {
                printf("*");
            } else {
                printf("-");
            }
            
            col++;
        }
        printf("\n");
        
        
        row++;
    }
    return 0;
}
