#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REMIND 60 /* Maximum number of reminders */
#define MSG_LEN 60    /* Max length of remainder message */

int read_line(char str[], int n);

int main(void)
{
    char *remainders[MAX_REMIND];
    char day_str[3], mst_str[MSG_LEN + 1];
    int day, i, j, num_remind = 0;

    for(;;){
        if(num_remind == MAX_REMIND){
            printf("-- No Space left --\n");
            break;
        }

        printf("Enter day and reminder: ");
        scanf("%2d", &day);
        if(day == 0)
            break;

        sprintf(day_str, "%2d", day);
        read_line(mst_str, MSG_LEN);

        for(i = 0; i < num_remind; i++)
            if(strcmp(day_str, remainders[i]) < 0)
                break;
        for(j = num_remind; j > i; j--)
            remainders[j] = remainders[j - 1];

        remainders[i] = malloc(2 + strlen(mst_str) + 1);
        if(remainders[i] == NULL){
            printf("-- No Space left --\n");
            break;
        }

        strcpy(remainders[i], day_str);
        strcat(remainders[i], mst_str);

        num_remind++;
    }

    printf("\nDay Remainder\n");

    for(i = 0; i < num_remind; i++)
        printf(" %s\n", remainders[i]);

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;
    while((ch = getchar()) != '\n')
        if(i < n)
            str[i++] = ch;

    str[i] = '\0';
    return i;
}
