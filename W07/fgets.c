// Live demo of fgets explanation
// Anosua Roy z5264396
// 2022/03/29

#include <stdio.h>

#define MAX_LINE_LENGTH 10

int main(void) {
    char line[MAX_LINE_LENGTH];
    
    // scanf but for string (the whole line of input)
    fgets(line, MAX_LINE_LENGTH, stdin);
    
    printf("Scanned in: %s\n", line);

    return 0;
}
