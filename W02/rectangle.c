// Compute area of a rectangle using ints
// Anosua Roy (z5264396) 
// 2022-Feb-22

#include <stdio.h>

int main(void) {
    /*
    int a = 12;
    printf("%d\n", a);
    
    int b;
    scanf("%d", &b);
    */
    
    // TODO: scan in length and width of rectangle
    int length;
    int width;
    printf("Input length then width: ");
    scanf("%d %d", &length, &width);
    
    // TODO: print out the area
    printf("area of rectangle: %d\n", length * width);
    return 0;
}
