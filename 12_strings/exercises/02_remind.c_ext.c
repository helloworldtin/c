#include <stdio.h>
#include <string.h>

// TODO:(NOT Completed)
#define  MAX_REMIND 50 /* maximum number of reminder */
#define  MSG_LEN 60 /* max length of remainder message */

int read_line(char str[], int n);
void a(void);
void b(void);
void c(void);

int main(void)
{
    // a();
    // b();
    c();
    return 0;
}

void a(void)
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

        if(day < 1 || day > 31){
            read_line(msg_str, MSG_LEN);
            printf("Please provide the value day\n");
            continue;
        }

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

}

void b(void)
{
    char remainders[MAX_REMIND][MSG_LEN + 3];
    char day_str[3], time_str[3], msg_str[MSG_LEN + 1];
    int day, i, j, time, num_remind = 0;

    for (;;){
        if(num_remind == MAX_REMIND){
            printf("-- No space left --\n");
            break;
        }

        printf("Enter day and remainder: ");
        scanf("%2d", &day);
        if(day == 0)
            break;

        if(day < 1 || day > 31){
            read_line(msg_str, MSG_LEN);
            printf("Please provide the value day\n");
            continue;
        }

        scanf(" %2d", &time);
        if(time < 0 || time > 23){
            read_line(msg_str, MSG_LEN);
            printf("Pleas the correct time.\n");
            continue;
        }

        sprintf(day_str, "%2d", day);
        sprintf(time_str, "%2d", time);
        read_line(msg_str, MSG_LEN);

        for(i = 0; i < num_remind; i++){
            if ((strcmp(day_str, remainders[i]) < 0)){
                break;
            }
            char *ptr = remainders[i]  +  2;
            char buff[3];

            for(int i = 0; i < 2; i++){
                buff[i] = *ptr++;
            }

            buff[i] = '\0';

            if(strcmp(time_str, buff) == 0)
                break;
        }


        for(j = num_remind; j > i; j--)
            strcpy(remainders[j], remainders[j - 1]);

        strcpy(remainders[i], day_str);
        strcat(remainders[i], time_str);
        strcat(remainders[i], msg_str);

        num_remind++;
    }

    printf("\nDay Remainders\n");
    for(i = 0; i < num_remind; i++)
        printf(" %s\n", remainders[i]);

}

void c(void)
{
    char remainders[MAX_REMIND][MSG_LEN + 3];
    char day_str[3], month_str[3], msg_str[MSG_LEN + 1];
    int day, i, j, month, num_remind = 0;

    for (;;){
        if(num_remind == MAX_REMIND){
            printf("-- No space left --\n");
            break;
        }
        printf("Enter day and remainder: ");
        scanf("%2d/%2d", &month, &day);

        if(day == 0 || month == 0)
            break;

        if(month < 0 || month > 12){
            read_line(msg_str, MSG_LEN);
            printf("Pleas the correct month.\n");
            continue;
        }

        if(day < 1 || day > 31){
            read_line(msg_str, MSG_LEN);
            printf("Please provide the value day\n");
            continue;
        }

        sprintf(day_str, "%2d", day);
        sprintf(month_str, "%2d", month);
        read_line(msg_str, MSG_LEN);

        for(i = 0; i < num_remind; i++){
            if ((strcmp(month_str, remainders[i]) < 0)){
                break;
            }
            // char *ptr = remainders[i]  +  2;
            // char buff[3];

            // for(int i = 0; i < 2; i++){
            //     buff[i] = *ptr++;
            // }

            // buff[i] = '\0';

            // if(strcmp(day_str, buff) == 0){
            //     printf("I am fucking came here\n");
            //     break;
            // }
        }


    for(j = num_remind; j > i; j--)
        strcpy(remainders[j], remainders[j - 1]);

    strcpy(remainders[i], month_str);
    strcat(remainders[i], "/");
    strcat(remainders[i], day_str);
    strcat(remainders[i], msg_str);

    num_remind++;
    }

    printf("\nDay Remainders\n");
    for(i = 0; i < num_remind; i++)
        printf(" %s\n", remainders[i]);
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
