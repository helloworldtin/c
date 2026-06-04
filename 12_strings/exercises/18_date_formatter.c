#include <stdio.h>

int main(void)
{
    char *months[] = { "January", "February" , "March", "April",
                        "May", "June", "July", "August","September", "October",
                        "November", "December",
                      };
    int mm, dd, yyyy;
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("%s %d, %d\n", months[mm - 1], dd, yyyy);
    return 0;
}
