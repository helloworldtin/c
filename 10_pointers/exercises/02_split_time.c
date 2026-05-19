#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main()
{
    long total_sec = 156000;
    int hr, min, sec;

    split_time(total_sec, &hr, &min, &sec);

    printf("The hour is %d, minutes is %d and  seconds is %d\n",hr, min, sec);
    return 0;
}


void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec / 3600;
    *min = (total_sec % 3600) / 60;
    *sec = total_sec - (*hr * 3600) - (*min * 60);
}
