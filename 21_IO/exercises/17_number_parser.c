#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_UNFORMATTED_LINE_SIZE 100

int main(int argc, char *argv[])
{
    if(argc != 2) {
        fprintf(stderr, "Usage number_parse <phonenumber_file>\n");
        exit(EXIT_FAILURE);
    }
    
    FILE *fp;
    char ch, *filename = argv[1],
        buffer[MAX_UNFORMATTED_LINE_SIZE],
        number_buffer[11],
        part1[4],
        part2[4],
        part3[5];
    int i, digit_count, j;

    if((fp = fopen(filename, "r")) == NULL) {
        fprintf(stderr, "Can't open %s\n", filename);
        exit(EXIT_FAILURE);
    }

    while(fgets(buffer, MAX_UNFORMATTED_LINE_SIZE, fp) != NULL) {
        digit_count = 0;
        for(i = 0, j = 0; digit_count != 10; i++) {
            if(isdigit(buffer[i])) {
                number_buffer[j++] = buffer[i];
                digit_count += 1;
            }
        }
        number_buffer[j] = '\0';
        sscanf(number_buffer, "%3s", part1);
        sscanf(number_buffer + 3, "%3s", part2);
        sscanf(number_buffer + 6, "%4s", part3);

        printf("(%s) %s-%s\n", part1, part2, part3);
    }
    
    return 0;
}
