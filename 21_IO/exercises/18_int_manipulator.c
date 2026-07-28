#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;

    if(x < y)
        return -1;

    if(x > y)
        return 1;
    return 0;
}

int main(int argc, char *argv[])
{
    if(argc != 2) {
        fprintf(stderr, "Usage int_manipulator <filename>\n");
        return -1;
    }
    int buffer[10000], num, i, read_count;
    char *filename = argv[1];
    FILE *fp;

    if((fp = fopen(filename, "r")) == NULL) {
        fprintf(stderr, "Can't open %s\n", filename);
        return -1;
    }

    while((read_count = fscanf(fp, "%d", &num)) != EOF) {
        buffer[i] = num;
        i++;
    }

    qsort(buffer, i, sizeof(int), compare);

    printf("Smallst number from the file is %d\n", buffer[0]);
    printf("Largest number from the file is %d\n", buffer[i - 1]);

    if(i % 2 != 0)
        printf("Median number from file is %d\n", buffer[(i/2)]);
    else {
        int index = (buffer[i/2] + buffer[(i/2) - 1]) / 2;
        printf("Median number from file is %d\n", buffer[index]);
    }
    return 0;
}
