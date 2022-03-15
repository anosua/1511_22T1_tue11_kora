// Live demo of 2D arrays
// Anosua Roy z5264396
// 2022-03-15

#include <stdio.h>

#define NUM_STU 3
#define NUM_SUBJ 2

int main(void) {
    
    int marks[NUM_STU][NUM_SUBJ] = {{100, 97},{2, 3},{50, 66}};
    
    int student = 0;
    while (student < NUM_STU) {
        printf("student %d: ", student);
        int subject = 0;
        while (subject < NUM_SUBJ) {
            
            printf("%d ", marks[student][subject]);
            
            subject++;
        }
        
        printf("\n");
        student++;
    }
    
    return 0;
}
