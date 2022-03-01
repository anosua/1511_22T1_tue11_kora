// Make a struct with meridiem, hour, minute
// Anosua Roy z5264396
// 2022-3-1

#include <stdio.h>

struct time {
    char meridiem;
    int hour;
    int minute;
};

int main(void) {
    
    // struct time -> data type
    // anosua_class -> name of the variable
    struct time anosua_class;
    
    // populating the new struct with values
    anosua_class.meridiem = 'a';
    anosua_class.hour = 11;
    anosua_class.minute = 0;
    
    printf("%.2d:%.2d%cm\n", 
           anosua_class.hour, 
           anosua_class.minute,
           anosua_class.meridiem
    );
    
    struct time help_session;
    
    help_session.meridiem = 'p';
    help_session.hour = 8;
    help_session.minute = 4;
    
    printf("%.2d:%.2d%cm\n", 
           help_session.hour, 
           help_session.minute,
           help_session.meridiem
    );
    
    return 0;
}
