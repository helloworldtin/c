#include <stdio.h>

int main(void)
{
    const char *sales_with_id = "sales id#123,133";
    char str[100];

    sscanf(sales_with_id, "%*9c%s", str);
    puts(str);

    return 0;

}

