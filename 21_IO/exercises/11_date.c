#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFF_SIZE 10

int main()
{
    int month, day, year;
    bool is_slashed = false;
    int i;
    char buffer[BUFF_SIZE];

    const char *months[] = {
    "January", "February", "March", "April", 
    "May", "June", "July", "August", 
    "September", "October", "November", "December"
    };
    
    printf("Enter the date either in (m-day-year) or (m/day/year): " );
    fgets(buffer, BUFF_SIZE, stdin);

    for(i = 0; i < BUFF_SIZE; i++) {
        if(buffer[i] == '/') {
            is_slashed = true;
            break;
        }
        if(buffer[i] == '-')
            break;
    }

    if(i == BUFF_SIZE) {
        fprintf(stderr, "invalid date format\n");
        exit(EXIT_FAILURE);
    }
   
    if(is_slashed)
        sscanf(buffer, "%d/%d/%d", &month, &day, &year);
    else
        sscanf(buffer, "%d-%d-%d", &month, &day, &year);

    printf("%s %d, %d\n", months[month -1], day, year);
   
    return 0;
}
