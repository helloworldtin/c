#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 2) {
        fprintf(stderr, "usage sale_formatter <filename>\n");
        exit(EXIT_FAILURE);
    }

    FILE *fp;
    char buffer[100];
    int item;
    float price;
    char purchase_date[100];

    if((fp = fopen(argv[1], "rb")) == NULL) {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    printf("Item        Unit Price        Purchase Date\n");
    while((fgets(buffer, 100, fp)) != NULL) {
        sscanf(buffer, "%d,%f,%s", &item, &price, purchase_date);
        printf("%d        $-%.2f       %s\n", item, price, purchase_date);
        
    }
    fclose(fp);
    return 0;
}
