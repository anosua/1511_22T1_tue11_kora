// Live demo of pointers and functions
// Anosua Roy z5264396
// 2022-03-15

#include <stdio.h>

int *max(int *a, int *b);

int main(void) {
    
    int anosua = 72;
    int tom = 42;
    
    int *result = max(&anosua, &tom);
    
    printf("anosua = %d @ %p\n", anosua, &anosua);
    printf("tom = %d @ %p\n", tom, &tom);
    
    printf("result = %p. pointing at %d\n", result, *result);
    printf("address of result: %p\n", &result);
    return 0;
}

int *max(int *a, int *b) {
    if (*a > *b) {
        return a;
    } else {
        return b;
    }
}
