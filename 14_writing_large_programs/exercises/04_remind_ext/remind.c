#include <stdio.h>
#include <string.h>
#include "readline.h"

#define  MAX_REMIND 50 /* maximum number of reminder */
#define  MSG_LEN 60 /* max length of remainder message */

int main(void)
{
    char remainders[MAX_REMIND][MSG_LEN + 3];
    char day_str[3], msg_str[MSG_LEN + 1];
    int day, i, j, num_remind = 0;

    for (;;){
        if(num_remind == MAX_REMIND){
            printf("-- No space left --\n");
            break;
        }

        printf("Enter day and remainder: ");
        scanf("%2d", &day);
        if(day == 0)
            break;
        sprintf(day_str, "%2d", day);
        read_line(msg_str, MSG_LEN);

        for(i = 0; i < num_remind; i++)
            if (strcmp(day_str, remainders[i]) < 0)
                break;
        for(j = num_remind; j > i; j--)
            strcpy(remainders[j], remainders[j - 1]);

        strcpy(remainders[i], day_str);
        strcat(remainders[i], msg_str);

        num_remind++;
    }

    printf("\nDay Remainders\n");
    for(i = 0; i < num_remind; i++)
        printf(" %s\n", remainders[i]);

    return 0;
}
