// header comment example
// name
// date

#include <stdio.h>
// this makes strcpy work
#include <string.h>

#define MAX_NAME_LENGTH 100

struct student {
  int zID;
  double wam;
  char name[MAX_NAME_LENGTH];
};

int main(void) {
    
    struct student stu;
    struct student *stu_pointer;
    
    stu_pointer = &stu;
    
    (*stu_pointer).zID = 5264396;
    (*stu_pointer).wam = 2.34;
    // strcpy(new_string, value_of_string)
    strcpy((*stu_pointer).name, "Frankie");
    
    printf("%s(%d): %lf\n", (*stu_pointer).name, (*stu_pointer).zID, (*stu_pointer).wam);
    
    // doing the same as above but with less effort
    stu_pointer->zID = 33333333;
    stu_pointer->wam = 100.3566;
    strcpy(stu_pointer->name, "Henry the octopus");
    
    printf("%s(%d): %lf\n", stu_pointer->name, stu_pointer->zID, stu_pointer->wam);
    
    // stu_pointer: is a pointer to a struct student
    // (*stu_pointer): is the actual struct student itself (dereferenced)
    // (*stu_pointer).name: the name field of the actual student
    // (*stu_pointer).name IS THE SAME AS stu_pointer->name
    
    return 0;
}
